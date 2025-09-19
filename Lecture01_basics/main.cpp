#include <iostream>
#include <cmath> //подключение math для использования функции pow

int main() {
    const float num = 13.1415f; //создание float переменной
    double V, S, r; //созданиеи числа с плавующей точкой с пощью double
    std::cin >> r; //input
    V = pow(r, 3) * (4.0/3.0) * num;  //вычислить объём сферы
    S = 4 * num * pow(r, 2); //вычислить площадь поверхности сферы
    std::cout << "Объём сферы: " << V << " double" << "\n" << "Площадь поверхности сферы: " << S << " double" << std::endl; // вывод переменных
    std::cout <<"float "<< "32 бита, " << "minSize: -3.4E+38, maxSize: 3.4E+38" << std::endl;
    std::cout <<"double "<< "64 бита, " << "minSize: -1.7E-308, maxSize: 1.7E-308" << std::endl;
    return 0;
}