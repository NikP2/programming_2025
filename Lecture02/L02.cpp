#include <iostream>
#include <bitset>
using namespace std;

// Number 1

/*int main() {
int B, C;
short A, i;
cout << "Число i: ";
cin >> i;

if (i >= 8 || i < 0) {
  cout << "Слишком большой или малый i" << endl;
  return 1;
}

cout << "Число A: ";
cin >> A;
bitset<8> b2 = A;
cout << "Двоичное представление числа A: " << b2.to_string() << endl;

bool iBit = (A >> i) & 1;
cout << "i бит A: "<< iBit << endl;

  if (iBit) {
    cout << "Число B: ";
    cin >> B;
    cout << "Число C: ";
    cin >> C;
    if ((A < B) && (B < C)) {
      cout << C-B-A << endl;
    }
    else if (A % C == 0) {
      cout << A/C+B << endl;
    }
    else {
      cout << A+B+C << endl;
    }
  }
  else {
    cout << (A << 1) << endl;
  }
  return 0;
} */

// Number 2

/*int main() {
int n;
cout << "Введите номер месяца: ";
cin >> n;
switch (n)
  {
  case 1: case 3: case 5: case 7: case 8: case 10: case 12:
  switch (n) {
    case 1:
    cout << "January: 31 days" << endl;
    break;
    case 3:
    cout << "March: 31 days" << endl;
    break;
    case 5:
    cout << "May: 31 days" << endl;
    break;
    case 7:
    cout << "July: 31 days" << endl;
    break;
    case 8:
    cout << "August: 31 days" << endl;
    break;
    case 10:
    cout << "October: 31 days" << endl;
    break;
    case 12:
    cout << "December: 31 days" << endl;
    break;
  }
  break;
  case 4: case 6: case 9: case 11:
  switch (n) {
    case 4:
      cout << "April: 30 days" << endl;
      break;
    case 6:
      cout << "June: 30 days" << endl;
      break;
    case 9:
      cout << "September: 30 days" << endl;
      break;
    case 11:
      cout << "November: 30 days" << endl;
      break;
  }
  break;
  case 2:
    cout << "February: 28 days" << endl;
    break;
  default:
    cout << "Такого месяца нет!" << endl;
    break;
  }
} */
