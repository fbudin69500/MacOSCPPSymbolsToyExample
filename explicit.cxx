#include "libcommon.h"
#include <iostream>

int main(int argc, char* argv[])
{
  MyExplicitClass<float> MyExplicitClassFloat;
  std::cout<<typeid(MyExplicitClassFloat).name()<<std::endl;
  return 0;
}
