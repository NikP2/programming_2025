#include <iostream>
using namespace std;
#include "L06.hpp"

int main() {
    int n;
    cout << "Введите число: ";
    cin >> n;
    if (np::UsualNum(n)) {
        cout << "Число простое" << endl;
    }
    else {
        cout << "Число не простое" << endl;
    }
    return 0;
}