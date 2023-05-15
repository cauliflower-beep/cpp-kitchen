#include <iostream>
using namespace std;
int main() {
  int num = 0,num1 =1;
  int *const ptr = &num; // const指针必须初始化！
  ptr = &num1 ; // 常指针的指向不能修改！
  *ptr = 1; // 常指针指向的值可以修改
  int *t = &num;
  *t = 1; // 常指针指向的值可以修改
  cout << *ptr << endl;
}
