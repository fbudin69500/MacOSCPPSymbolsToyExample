#ifndef _common_h
#define _common_h

#include "derived.h"
#include "template.h"

template class __attribute__((visibility("default")))  derived<float>;

class __attribute__((visibility("default")))common
{
public:

  derived<float> objectderived;
  MyTemplatedClass<int> objecttemplate;
  common();
  ~common();
};
#endif
