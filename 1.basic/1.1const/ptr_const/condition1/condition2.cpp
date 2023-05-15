#include <iostream>
using namespace std;

int main() {
  const int p = 10; // p是一个常量
  const void *vp = &p; // p的地址 必须使用 const void *vp 保存
  void *vp = &p; // error
}
