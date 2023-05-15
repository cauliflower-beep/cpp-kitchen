#include <iostream>
using namespace std;
int main() {
  const int b = 10;
  b = 0; // error 常量不能赋值
  const string s = "helloworld";
  const int i, j = 0; // error 常量i未初始化
}
