#include <iostream>
using namespace std;

int main() {
  const int p = 3;
  const int *const ptr = &p; // p是一个指向常量的常指针
  cout << *ptr << endl;
}
