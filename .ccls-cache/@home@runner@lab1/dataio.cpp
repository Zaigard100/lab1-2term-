#include <iostream>
#include <limits>

using std::cin;
using std::cout;

unsigned char read_0_1() {
  while (true) {
    char enter;
    cin >> enter;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "\n";
    if (enter == '0' || enter == '1') {
      return enter;
    } else {
      cout << "Ошибка ввода\n";
    }
  }
}
unsigned int read_uint() {
  while (true) {
    unsigned int enter;
    cin >> enter;
    cout << "\n";
    if (cin.fail()) {
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      cout << "Ошибка ввода\n";
    } else {
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      return enter;
    }
  }
}
