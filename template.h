#ifndef _template_h
#define _template_h
#include <typeinfo>

template<class T>
struct __attribute__((visibility("default"))) MyTemplatedClass
{
  MyTemplatedClass();
  ~MyTemplatedClass();
};

#include "template.hxx"
#endif
