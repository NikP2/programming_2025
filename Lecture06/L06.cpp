#include <iostream>

using namespace std;

void matrixResult(int top, int left, int** mas) {  // передаём нашу матрицу в функцию
    int coZ = 0;
    int* zeroRow = 0; 
    // Есть ли нули в строке или нет (если есть хоть 1 нолик, то переходим на следующую строку)
    for (int i = 0; i < top; i++) {
        for (int j = 0; j < left; j++) {
            if (mas[i][j] == 0) {
                coZ++;
                break;
            }
        }
    }

    // Выделяем память для coZ значений, туда мы поместим индексы строк, которые содержат нули.
    if (coZ > 0) {
        zeroRow = (int*)malloc(coZ * sizeof(int));
        int index = 0;
        for (int i = 0; i < top; i++) {
            for (int j = 0; j < left; j++) {
                if (mas[i][j] == 0) {
                    zeroRow[index] = i;
                    index++;
                    break;
                }
            }
        }
        
        cout << "Строки с нулями: ";
        for (int i = 0; i < coZ; i++) {
            cout << zeroRow[i] << " ";
        }
        cout << endl;

        // создаём новый масив, где колличество элементов будет взято от предыдущего - кол-во строк с нулями (данный шаг необходим для последующего удаления строк, которые содержат нули)
        int newTop = top - coZ;
        int** newMas = (int**)malloc(newTop * sizeof(int*));
        
        int newIndex = 0;
        for (int i = 0; i < top; i++) {
            int rem = 0; // создаём флаг
            
            for (int k = 0; k < coZ; k++) {
                if (i == zeroRow[k]) { // если строка будет равна строке, где мы нашли ноль, то...
                    rem = 1; // если флаг принял значение true / 1, то в дальнейшем мы удалим эту строку
                    break;
                }
            }
            
            // если строка не удаляется, значит мы её скопируем в новый масив.
            if (rem == 0) {
                newMas[newIndex] = (int*)malloc(left * sizeof(int));
                for (int j = 0; j < left; j++) {
                    newMas[newIndex][j] = mas[i][j];
                }
                newIndex++;
            }
        }
        
        for (int i = 0; i < newTop; i++) {
            for (int j = 0; j < left; j++) {
                cout << newMas[i][j] << " ";
            }
            cout << endl;
        }
        
        for (int i = 0; i < top; i++) {
            free(mas[i]);
        }
        free(mas);
        free(zeroRow);
    } 
    else {
        cout << "Строки с нулями не найдены..." << endl;
        for (int i = 0; i < top; i++) {
            for (int j = 0; j < left; j++) {
                cout << mas[i][j] << " ";
            }
            cout << endl;
        }
    }
}

int main() {

    // создаём 2-х мерный массив с помощью 2-х указателей. Один указатель будет содержать адреса строк, другой указатель будет содержать элементы этой строки. 
    int** mas = (int**)malloc(2 * sizeof(int*));

    for (int i = 0; i < 2; i++) {
        mas[i] = (int*)malloc(2 * sizeof(int));
    }

    // проходимся по массиву и проверяем, чтобы A и B не были отрицательными. Тут я тоже использовал флаг.
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++){
            cin >> mas[i][j];
            if (i == 0 && mas[i][j] < 0) {
                int fl = 1;
                while (fl == 1) {
                    cout << "Введите новое НЕ отрицательное число: ";
                    cin >> mas[i][j];
                    if (mas[i][j] >= 0) {
                        fl = 0;
                    }
                }
            }
        }
    }

    int A = mas[0][0];
    int B = mas[0][1];
    int C = mas[1][0];
    int D = mas[1][1];

    int top = 2 + A;
    int left = 2 + B;

    // расширяю массив с помощью функции realloc. Всё на подобии, как было в начале main
    mas = (int**)realloc(mas, top * sizeof(int*));
    
    for (int i = 2; i < top; i++) {
        mas[i] = (int*)malloc(left * sizeof(int));
    }
    

    // чтобы не потерять значение при расширении, мы сохраняем наши числа: A B C D
    for (int i = 0; i < 2; i++) {
        int old_data[2];
        for (int j = 0; j < 2; j++) {
            old_data[j] = mas[i][j];
        }
        
        mas[i] = (int*)realloc(mas[i], left * sizeof(int)); // расширение строки
        
        for (int j = 0; j < left; j++) {
            mas[i][j] = i * C + j * D; // заполняем всю строку формулой данной в условии
        }
        
        for (int j = 0; j < 2; j++) {
            mas[i][j + B] = old_data[j];  // воастанавливаем старые элементы справа
        }
    }
    
    for (int i = 2; i < top; i++) {
        for (int j = 0; j < left; j++) {
            mas[i][j] = i * C + j * D;   // заполняем строки, которые мы добавили сверху
        }
    }

    int** ugol = (int**)malloc(2 * sizeof(int*));
    for (int i = 0; i < 2; i++) {
        ugol[i] = (int*)malloc(2 * sizeof(int));
        for (int j = 0; j < 2; j++) {
            ugol[i][j] = mas[i][j + B];  // сохраняем данные, чтобы переместить их в нужный угол
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            mas[i + A][j + B] = ugol[i][j];
        }
    }
    // если ячейка левее или выше блока, то заполняем нашей формцлой
    for (int i = 0; i < top; i++) {
        for (int j = 0; j < left; j++) {
            if (i < A || j < B ) {
                mas[i][j] = i * C + j * D;
            }
        }
    }

    for (int i = 0; i < top; i++) {
        for (int j = 0; j < left; j++) {
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }

    matrixResult(top, left, mas);

    for (int i = 0; i < 2; i++) {
        free(ugol[i]);
    }
    free(ugol);
    
    return 0;
}


// Задание №2

// #include <iostream>
// using namespace std;

// int main() {

//     int a;
//     int b;
//     cout << "Введите число a: ";
//     cin >> a;
//     cout << "Введите число b: ";
//     cin >> b;

//     int* ptr_a = new int(a);
//     int* ptr_b = new int(b);
 
//     *ptr_a *= 2;
    
//     int sw = *ptr_a;
//     *ptr_a = *ptr_b;
//     *ptr_b = sw;

//     cout << "Адрес ptr_a: " << ptr_a << ", значение: " << *ptr_a << endl;
//     cout << "Адрес ptr_b: " << ptr_b << ", значение: " << *ptr_b << endl;
    
//     delete ptr_a;
//     delete ptr_b;
//     return 0;
// }