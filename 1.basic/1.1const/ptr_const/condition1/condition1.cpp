#include <iostream>
using namespace std;

int main() {
  const int *ptr; // 指向常量的指针
  *ptr = 10; // error
}
