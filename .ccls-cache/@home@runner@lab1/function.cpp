#include "dataio.h"
#include <cmath>
#include <fstream>
#include <iostream>
#include <istream>
#include <limits>
#include <math.h>
#include <string>

using std::cin;
using std::cout;
using std::string;

extern unsigned int n;

string sequences_con(unsigned int n){
  
  unsigned long long fib_a = 0;
  unsigned long long fib_b = 1;
  unsigned long long fib_buf = 0;
  unsigned long long a = 0;
  unsigned long long b = 1;
  unsigned long long buf = 0;
  string fib_ser = "0 1 ";
  string ser = "0 1 ";
  for (unsigned i = 2; i < n; i++) {
    buf = a + b + fib_a;
    a = b;
    b = buf;
    fib_buf = fib_a + fib_b;
    fib_a = fib_b;
    fib_b = fib_buf;
    ser += std::to_string(buf) + " ";
    fib_ser += std::to_string(fib_buf) + " ";
  }
  return  "a) " + fib_ser + '\n' + "b)" + ser + "\n\n";
}

void initcon() {
  cout << "Введите n: ";
  n = read_uint();
}
bool initfile(std::ifstream & f) {
  f>>n;
  if(f.fail()){
    cout << "Ошибка ввода из файла\n";
  }
  return true;
}
void outcon() {
  cout << sequences_con(n);
}
void outfile(std::ostream & f){
  f<< "a) 0 1 ";
  unsigned long long fib_a = 0;
  unsigned long long fib_b = 1;
  unsigned long long fib_buf = 0;
  
  for (unsigned i = 2; i < n; i++) {
    fib_buf = fib_a + fib_b;
    fib_a = fib_b;
    fib_b = fib_buf;
    f << std::to_string(fib_buf) + " ";
  }
  
  f<< "\nб) 0 1 ";
  fib_a = 0;
  fib_b = 1;
  fib_buf = 0;
  unsigned long long a = 0;
  unsigned long long b = 1;
  unsigned long long buf = 0;
   for (unsigned i = 2; i < n; i++) {
    buf = a + b + fib_a;
    a = b;
    b = buf;
    fib_buf = fib_a + fib_b;
    fib_a = fib_b;
    fib_b = fib_buf;
    f <<  std::to_string(buf) + " ";
  }
}
