#include <iostream>
#include <cmath> //подключение math для использования функции pow

using namespace std;

int main() {
    const float num = 13.1415f; //создание float переменной
    double V, S, r; //созданиеи числа с плавующей точкой с помощью double
    cin >> r; //input
    V = pow(r, 3) * (4.0 / 3.0) * num;  //вычислить объём сферы
    S = 4 * num * pow(r, 2); //вычислить площадь поверхности сферы
    cout << "Объём сферы: " << V << " double" << "\n" << "Площадь поверхности сферы: " << S << " double" << endl; // вывод переменных
    cout <<"float "<< "32 бита, " << -3.4E+38 <<  3.4E+38 << endl;
    cout <<"double "<< "64 бита, " << -1.7E-308 << 1.7E-308 << endl;
    return 0;
}