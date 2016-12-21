#include "lib.h" 

template<class T> 
MyExplicitClass<T>::MyExplicitClass()
{
  MyVecType my_vec;
  (void)my_vec;
}

template<class T>
MyExplicitClass<T>::~MyExplicitClass()
{
}

template class MyExplicitClass<float>;
