#include <iostream>

using namespace std;

int main() {
    char firstName[50];
    cout << "Введите имя: ";
    cin >> firstName;
    cout << "Hello " << firstName << endl;
    cerr << "firstname" << firstName << endl;
    return 0;
}