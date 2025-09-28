#include <iostream>
#include <limits>
#include <bitset>
//#define _USE_MATH_DEFINES
//#include <math.h>

int main() {
   int x = 10;
   std::bitset<8> b2 = x;
   std::cout << b2.to_string() << std::endl;
}

/*#include <iostream>
#include <numbers>
  int main() {
std::cout << std::numbers::pi << std::endl;
}*/

