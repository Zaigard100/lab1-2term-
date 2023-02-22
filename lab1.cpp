
#include <iostream>
#include <fstream>
#include "dataio.h"
#include "function.h"

using std::cout;

unsigned int n{0};

int main()
{
  std::ifstream fin("in.txt");
  std::ofstream fout("out.txt");
  unsigned char inl;
  unsigned char outl;
  while(true){
    if(fin.is_open()&&fout.is_open()){
      cout << "Ввод с консоли (0) или в файл(1): ";
      inl = read_0_1();
      cout << "Вsвод с консоли (0) или в файл(1): ";
      outl = read_0_1();
      if(inl == '0'){
        initcon();
      }else if (inl == '1'){
        initfile(fin);
      }

      if(outl == '0'){
          outcon();
      }else if (outl == '1'){
          outfile(fout);
      }
      if(inl == '1') break;
      
      cout << "Хотите продолжить(0/1): ";
      inl = read_0_1();
      if(inl == '0'){
        break;
      }
    }else{
       cout << "Не удалось открыть файл(ы)!\n";
    }
    fin.close();
    fout.close();
  }
}