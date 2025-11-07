// #include <iostream>
// using namespace std;
// #include "L06.hpp"

// int main() {
//     int n;
//     cout << "Введите число: ";
//     cin >> n;
//     if (np::UsualNum(n)) {
//         cout << "Число простое" << endl;
//     }
//     else {
//         cout << "Число не простое" << endl;
//     }
//     return 0;
// }


#include <iostream>
#include <vector>
int main() {
    int n;
    vector<int> s;
    std::cout<<"Let's find the biggest number all of numbers!" << "\n" << "How many numbers do you want?" << std::endl;
    for (int i = 0; i != 3; i++) {
        int num;
        std::cout <<"Enter you " << i << " number: ";
        std::cin >> num;
        s.push_back(num);
    }
    
return 0;
}