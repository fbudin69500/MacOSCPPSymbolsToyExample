#ifndef _lib_h
#define _lib_h
#include <typeinfo>
#include <vector>
#include "template.h"


template<class T>
struct __attribute__((visibility("default"))) MyExplicitClass
{
  public:
  typedef std::vector<float> MyVecType;
  MyExplicitClass();
  ~MyExplicitClass();
  __attribute__((visibility("default"))) MyVecType vec;
  MyVecType __attribute__((visibility("hidden")))  GetMyVec(){return vec;};
  virtual MyTemplatedClass<int> GetMyTemplate(){MyTemplatedClass<int> var;return var;};
};

#endif
