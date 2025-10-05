#include <iostream>

int main() {
    int x;
    bool fl = true;
    std::cin >> x;
    if (x < 2) {
        std::cout << "Is not prime" << std::endl;
    }
    else {
        for (int d = 2; d <= sqrt(x); ++d) {
            if (x % d == 0) {
                fl = false;
                break;
            }
    }
    if (fl) {
        std::cout << "Is prime" << std::endl;
    }
    else {
        std::cout << "Is not prime" << std::endl;
    }
    }
    return 0;
}