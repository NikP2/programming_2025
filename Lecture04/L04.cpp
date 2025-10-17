//В пункте 1, размер массива равен №варианта + 3.
// 1.Упорядочить массив по возрастанию, если все числа кратны 5.

#include <iostream>
using namespace std;

int main() {
    int x[7];
    bool fl = false;
    for (int b = 0; b < 7; ++b) {
        int num;
        cout << "Введите число №" << b + 1 << ": ";
        cin >> num;
        if (num % 5 == 0) {
            x[b] = num;
        }
        else {
            fl = true;
        }
    }
    if (fl == false) {
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
    }
    else {
        cout << "Массив содержит числа не кратные 5!" << endl;
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
// ищем номер столбца с наибольшим кол-во отриц значений
    int mx_cnt = 0;
    int mx_col = -1;
    for(int i = 0; i < y; ++i) {
        int cnt = 0;
        for(int j = 0; j < x; ++j) {
            if (matrix[j][i] < 0) {
                ++cnt;
            }
        }
        if (cnt > mx_cnt) {
            mx_cnt = cnt;
            mx_col = i;
        }
    }
//Делаем замену элементов столбца на -1 (по усл)
    if (mx_col != -1) {
        for(int j = 0; j < x; ++j) {
            matrix[j][mx_col] = -1; 
        }
    }
// выводим матрицу
    for(int i = 0; i < x;++i) {
        for (int j = 0; j < y; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}