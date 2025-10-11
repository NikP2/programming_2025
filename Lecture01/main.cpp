#include <iostream>
#include <cmath> //подключение math для использования функции pow

using namespace std;

int main() {
    const float num = 13.1415f; //создание float переменной
    double V, S; //созданиеи числа с плавующей точкой с помощью double
    int r;
    cin >> r; //input
    V = pow(r, 3) * (4.0 / 3.0) * num;  //вычислить объём сферы
    S = 4 * num * pow(r, 2); //вычислить площадь поверхности сферы
    cout << "Объём сферы: " << V << " double" << "\n" << "Площадь поверхности сферы: " << S << " double" << endl; // вывод переменных
    cout <<"float "<< sizeof(float) * 8 << " бита, " << numeric_limits<float>::lowest()  << " " <<  numeric_limits<float>::max()  << endl;
    cout <<"double "<< sizeof(double) * 8 << " бита, " << numeric_limits<double>::lowest() << " " << numeric_limits<double>::max()  << endl;
    cout <<"int "<< sizeof(int) * 8 << " бита, " << numeric_limits<int>::min() << " " << numeric_limits<int>::max() << endl;
    return 0;
}

/*Hello
world
! */