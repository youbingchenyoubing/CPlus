#include <iostream>
#include <iomanip>

int main() {
    double num = 3.14159265358979323846;
    int precision = 4; // ���ù̶�λ��Ϊ4λС��

    std::cout << std::setprecision(precision) << std::fixed;
    std::cout << "����̶�λ��Ϊ" << precision << "λС���ĸ�������" << num << std::endl;

    return 0;
}

