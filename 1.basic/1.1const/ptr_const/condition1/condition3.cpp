#include <iostream>
using namespace std;

int main() {
  const int *ptr;
  int val = 3;
  ptr = &val; // ok 指针指向的是常量，但指针本身不是常量，可以赋值
  cout << *ptr << endl; // ptr 指向的值，当前是3
  // *ptr = 4； // error 不能通过ptr指针来修改其指向的值
  int *ptr1 = &val;
  *ptr1 = 4; // ok 可以通过第二个非const指针来修改const指针指向的值
  cout << *ptr << endl;
}
