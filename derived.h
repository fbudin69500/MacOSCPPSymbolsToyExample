#ifndef _derived_h
#define _derived_h

#include "lib.h"
template<class T>
class __attribute__((visibility("default"))) derived:public MyExplicitClass<T>
{
public:
  derived();
  ~derived();
};

#include "derived.hxx"

#endif
