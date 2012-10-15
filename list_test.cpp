#include <iostream>
#include <string>

#include "LinkedList.h"

int main() {
  LinkedList<int>* l = new LinkedList<int>();

  LinkedList<std::string>* s = new LinkedList<std::string>();

  l->insert(5);
  l->insert(6);
  l->insert(7);

  l->print();


  s->insert("hello world!");
  s->insert("hi");
  s->insert("apple");
  s->insert("banana");

  s->print();


  return 0;
}
