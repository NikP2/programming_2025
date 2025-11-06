#include "L06.hpp"
namespace np {
int UsualNum(int n) {
    bool fl = true;
    for (int i = 2;i < n;++i) {
        if (n % i == 0) {
            fl = false;
            break;
        }
    }
    return fl;
}
}