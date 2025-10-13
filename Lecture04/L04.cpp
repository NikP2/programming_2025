//В пункте 1, размер массива равен №варианта + 3.
// 1.Упорядочить массив по возрастанию, <u>если все числа</u> кратны 5.



#include <iostream>
using namespace std;

int main() {
    int x[7];
    for (int b = 0; b < 7; ++b) {
        int num;
        cout << "Введите число №" << b + 1 << ": ";
        cin >> num;
        if (num % 5 == 0) {
            x[b] = num;
        }
        else {
            cout << "Не все числа кратны 5!"<< endl;
            return 0;
        }
    }
    for (int i = 0;i < 6;++i) {
        for (int j = i + 1;j < 7;++j) {
            if (x[i] > x[j]) {
                swap(x[i], x[j]);
            }
        }
    }
    for (int q = 0; q < 7; ++q) {
        cout << x[q] << " ";
    }
    return 0;
}


/*В пункте 2, матрицы формата 3 строки х 4 столбца.
Числа вводятся корректно и все они типа int. Из нескольких одинаковых значений выбирать первое.*/
// 2.Найти столбец, где больше всего отрицательных чисел и заменить все значения в нём на -1.


#include <iostream>
using namespace std;

int main() {
    // вводим числа в матрицу
    const int y = 4, x = 3;
    int matrix[x][y];
    for (int i = 0;i < x;++i) {
        for (int j = 0; j < y; ++j) {
            cout << "Введите число, которое стоит на месте " << i << j << ": ";
            cin >> matrix[i][j];
        }
    }
// ищем номер строки с наибольшим кол-во отриц значений
    int mx_cnt = 0;
    int mx_col = -1;
    for(int i1 = 0; i1 < y; ++i1) {
        int cnt = 0;
        for(int j1 = 0; j1 < x; ++j1) {
            if (matrix[j1][i1] < 0) {
                ++cnt;
            }
        }
        if (cnt > mx_cnt) {
            mx_cnt = cnt;
            mx_col = i1;
        }
    }
//Делаем замену элементов столбца на -1 (по усл)
    if (mx_col != -1) {
        for(int j2 = 0; j2 < x; ++j2) {
            matrix[j2][mx_col] = -1; 
        }
    }
// выводим матрицу
    for(int i3 = 0; i3 < x;++i3) {
        for (int j3 = 0; j3 < y; ++j3) {
            cout << matrix[i3][j3] << " ";
        }
        cout << endl;
    }
    return 0;
}