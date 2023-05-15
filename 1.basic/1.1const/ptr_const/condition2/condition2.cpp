#include <iostream>
using namespace std;
int main() {
  const int num = 0;
  int *const ptr = &num; // error! const int* -> int* 常指针ptr指向的是一个变量，而不是const常量，所以这里报错
  cout << *ptr << endl;
}
