#include <iostream>
#include "cll.h"

int main() {
  CLL list;
  list.addFront(4);
  list.addFront(3);
  list.addFront(2);
  list.addFront(1);
  list.addBack(5);
  list.addBack(6);
  list.addBack(7);
  list.addBack(8);
  
  list.print();

  list.deleteAt(7); // delete last
  list.deleteAt(0); // delete first
  list.deleteAt(2); // should delete 4
  
  list.print();

  // empty list
  list.deleteFront();
  list.deleteFront();
  list.deleteBack();
  list.deleteBack();
  list.deleteBack();
  list.deleteBack();
  list.deleteFront();

  std::cout << "Print empty";
  
  list.print();
  std::cout <<'\n';

  std::cout << "Add front 1";
  list.addFront(1);
  
  list.print();
  
  list.deleteFront();
  list.addBack(1);
  std::cout<< "Add back 1";

  
  list.print();

  return 0;
  
}