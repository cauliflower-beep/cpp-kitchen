void func(const int var); // 传递过来的参数不可变

void func(int *const var); // 指针本身不可变

void StringCopy(char *dst, const char *src);

void func(const A &a);