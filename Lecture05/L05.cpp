#include <iostream>
#include <limits>
#include <vector>
using namespace std;

void L01(int r) {
    const float num = 13.1415f; //создание float переменной
    double V, S;
    V = pow(r, 3) * (4.0 / 3.0) * num;  //вычислить объём сферы
    S = 4 * num * pow(r, 2); //вычислить площадь поверхности сферы
    cout << "Объём сферы: " << V << " double" << "\n" << "Площадь поверхности сферы: " << S << " double" << endl; // вывод переменных
    cout <<"float "<< sizeof(float) * 8 << " бита, " << numeric_limits<float>::lowest()  << " " <<  numeric_limits<float>::max()  << endl;
    cout <<"double "<< sizeof(double) * 8 << " бита, " << numeric_limits<double>::lowest() << " " << numeric_limits<double>::max()  << endl;
    cout <<"int "<< sizeof(int) * 8 << " бита, " << numeric_limits<int>::min() << " " << numeric_limits<int>::max() << endl;
}

int MediumAbs(int a, int b, int c) {
    int s[3] = {abs(a), abs(b), abs(c)};
    int mx = max(s[0], max(s[1], s[2]));
    int mn = min(s[0], min(s[1], s[2]));
    int su = 0;
    for(int i = 0; i != 3; ++i) {
        su += s[i];
    }
    return su - (mx + mn);
}


int MediumAbs(int a, int b) {
    return min(abs(a), abs(b));
}

int MediumAbs(int n) {
    int mx = numeric_limits<int>::min();
    int col = 0;
    int copyN = abs(n);
    while (copyN > 0) {
        if (mx < copyN % 10) {
            mx = copyN % 10;
        }
        copyN /= 10;
    }
    copyN = abs(n);
    while (copyN > 0) {
        if (mx == copyN % 10) {
            ++col;
        }
        copyN /= 10;
    }
    return col;
}

void ControlMain(int x[3]) {
    vector<int> vec;
    for(int i = 0; i != 3; ++i) {
        if (x[i] != 0) {
            vec.push_back(x[i]);
        }
    }
    if (vec.size() == 3) {
        cout << "Для трёх чисел – среднее по модулю: " << MediumAbs(vec[0], vec[1], vec[2]) << endl;
    }
    else if (vec.size() == 2) {
        cout << "Для двух чисел - минимальное число: " << MediumAbs(vec[0], vec[1]) << endl;
    }
    else if (vec.size() == 1) {
        cout << "Максимальная цифра повторяется: " << MediumAbs(vec[0]) << endl;
    }
    else {
        cout << "К сожалению я 0 не считаю :(" << endl;
    }
}

int main() {
    int answer;
    cout << "Введите с клавиатуры число 1 или 2"<< "\n" << "1 - первый пункт" << "\n" << "2 - второй пункт" << "\n";
    cin >> answer;
    if (answer == 1) {
        int a;
        int x[3];
        for(int i = 0; i != 3; ++i) {
            cout << "Число по счёту #" << i + 1 << ": "; 
            cin >> x[i];
        }
        ControlMain(x);
    }
    else if (answer == 2) {
        cout << "Введите радиус сферы: ";
        int r;
        cin >> r; //input
        L01(r);
    }
    else {
        cout << "Такой команды нет!" << endl;
    }
   
    return 0;
 }


//План Б (целые числа)

// #include <iostream>
// #include <limits>
// #include <vector>
// using namespace std;

// void L01() {
//     const float num = 13.1415f; //создание float переменной
//     double V, S; //созданиеи числа с плавующей точкой с помощью double
//     cout << "Введите радиус сферы: ";
//     int r;
//     cin >> r; //input
//     V = pow(r, 3) * (4.0 / 3.0) * num;  //вычислить объём сферы
//     S = 4 * num * pow(r, 2); //вычислить площадь поверхности сферы
//     cout << "Объём сферы: " << V << " double" << "\n" << "Площадь поверхности сферы: " << S << " double" << endl; // вывод переменных
//     cout <<"float "<< sizeof(float) * 8 << " бита, " << numeric_limits<float>::lowest()  << " " <<  numeric_limits<float>::max()  << endl;
//     cout <<"double "<< sizeof(double) * 8 << " бита, " << numeric_limits<double>::lowest() << " " << numeric_limits<double>::max()  << endl;
//     cout <<"int "<< sizeof(int) * 8 << " бита, " << numeric_limits<int>::min() << " " << numeric_limits<int>::max() << endl;
// }

// int MediumAbs(int a, int b, int c) {
//     int s[3] = {abs(a), abs(b), abs(c)};
//     int mx = max(s[0], max(s[1], s[2]));
//     int mn = min(s[0], min(s[1], s[2]));
//     int su = 0;
//     for(int i = 0; i != 3; ++i) {
//         su += s[i];
//     }
//     return su - (mx + mn);
// }

// int NumberOfMaxNumbers(int n) {
//     int mx = numeric_limits<int>::min();
//     int col = 0;
//     int copyN = abs(n);
//     while (copyN > 0) {
//         if (mx < copyN % 10) {
//             mx = copyN % 10;
//         }
//         copyN /= 10;
//     }
//     copyN = abs(n);
//     while (copyN > 0) {
//         if (mx == copyN % 10) {
//             ++col;
//         }
//         copyN /= 10;
//     }
//     return col;
// }

// void ControlMain(int a, int b, int c) {
//     vector<int> vec;
//     if (a == 0 || b == 0 || c == 0) {
//         cout << "К сожалению я 0 не считаю :(" << endl;
//     }
//     else {
//         cout << "Для трёх чисел – среднее по модулю: " << MediumAbs(a, b, c) << endl;
//     }
// }
// int main() {
//     int answer;
//     cout << "Введите с клавиатуры число 1 или 2"<< "\n" << "1 - первый пункт" << "\n" << "2 - второй пункт" << "\n";
//     cin >> answer;
//     if (answer == 1) {
//         int q;
//         int x[3];
//         cout << "Введите своё число для нахождения повторений максимальной цифры: ";
//         cin >> q;
//         cout << "Максимальная цифра повторяется: " << NumberOfMaxNumbers(q) << endl;
        
//         cout << "А теперь мы выведем среднее по модулю среди 3-х чисел!" << endl;
//         int a, b, c;
//         cout << "Enter your number #1: ";
//         cin >> a;
//         cout << "Enter your number #2: ";
//         cin >> b;
//         cout << "Enter your number #3: ";
//         cin >> c;
//         ControlMain(a, b, c);
//     }
//     else if (answer == 2) {
//         L01();
//     }
//     else {
//         cout << "Такой команды нет!" << endl;
//     }
    
//     return 0;
// }

//Way #2 (MediumAbs)

/* int MediumAbs(int x[3]) {
    int s[3] = {abs(x[0]), abs(x[1]), abs(x[2])};
    int mx, mn;
    int su = 0;
    mx = numeric_limits<int>::min();
    mn = numeric_limits<int>::max();
    for(int i = 0; i != 3; ++i) {
        su += s[i];
        if (mx < s[i]) {
            mx = s[i];
        }
        if (mn > s[i]) {
            mn = s[i];
        }
    }
    return su - (mx + mn);
 } */