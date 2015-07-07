#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <stdexcept>
#include <vector>

template <class T>
class Stack
{
public:
  /*Stack();
  void push(T const&);
  void pop();
  T top();
  bool empty() const;*/

private:
  vector<T> elems;
};

#endif // STACK_H
