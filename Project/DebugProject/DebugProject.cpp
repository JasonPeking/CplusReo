#include <iostream>
#include <string>
#include <cstring>

int main() {
    std::cout << "Hello World!" << std::endl;

    // 更好使用 std::string 而非原始 char*，避免手动内存管理
    std::string str = "Hello World!";

    int s, a, b;
    a = 5;
    b = 18;
    s = a + b;

    std::cout << str << std::endl;
    std::cout << s << std::endl;

    // 如果一定要使用动态分配内存，别忘了释放内存
    // delete[] str;  // 这行不需要，因为 std::string 会自动管理内存

    return 0;
}
