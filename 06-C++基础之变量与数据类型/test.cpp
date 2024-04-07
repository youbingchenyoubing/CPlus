#include <iostream>
#include <iomanip>

int main() {
    double num = 3.14159265358979323846;
    int precision = 4; // 设置固定位数为4位小数

    std::cout << std::setprecision(precision) << std::fixed;
    std::cout << "输出固定位数为" << precision << "位小数的浮点数：" << num << std::endl;

    return 0;
}

