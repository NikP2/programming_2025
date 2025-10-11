//Number 1

/*#include <iostream>
using namespace std;


int main() {
    int n, mx = INT_MIN , su = 0, co = 0, in;
    cout << "Введите конечное число последовательности: ";
    cin >> n;
    if (n <= 0) {
        cout << "последовательность пуста или отрицательна"<< endl;
        return 0;
    }
    bool flMn = false;
    for (;n != 0;n--) {
        cout << n <<" Введите число: ";
        cin >> in;
        if (in >= 0) {
            continue;
        }
        else {
            flMn = true;
            su += in;
            if (in > mx) {
                mx = in;
                co = 1;
            }
            else if (in == mx) {
                ++co;
                }                                   
            }
        }
        if (flMn) {
            cout << "Наибольше из отрицательных чисел: " << mx << " Сумма чисел: " << su << " Повторы: " << co << endl;
        }
        else {
            cout << "Отрицательных чисел нет" << endl;
        }
        return 0;
    } */

// Number 2

/*#include <iostream>
using namespace std;


int main() {
    int num, mx = INT_MIN;
    cout << "Введите число: ";
    cin >> num;
    num = abs(num);
    if (num == 0) {
        cout << num << endl;
        return 0; 
    }
    if (num < 1000) {
        while (num != 0) {
            if ((num % 10) > mx) {
                mx = num % 10;
            }
            num /= 10;
        }
        cout << mx << endl;
    }
    else {
       cout << "Не коректное число!" << endl; 
    }
    return 0;
} */
