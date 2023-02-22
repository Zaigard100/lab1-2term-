#include <iostream>
#include <istream>
#include <fstream>
#include <limits>
#include <math.h>
#include "dataio.h"

using std::ifstream;
using std::string;
using std::cout;
using std::cin;

extern unsigned int n;

unsigned int formulaBinet(){
  double gold_rat = ((1 + sqrt(5)) / 2);
  cout << gold_rat;
  return 0
}

bool init(){
  cout << "Введите n";
  n = read_uint();
  
}
