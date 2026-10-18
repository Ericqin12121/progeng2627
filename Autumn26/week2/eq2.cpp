#include <iostream>

// 解二元一次方程组（克莱姆法则 / 行列式法）:
//   a1*x + b1*y = c1
//   a2*x + b2*y = c2
//
// 主行列式 D  = a1*b2 - a2*b1
// x 的行列式 Dx = c1*b2 - c2*b1
// y 的行列式 Dy = a1*c2 - a2*c1
// 当 D != 0 时有唯一解: x = Dx/D, y = Dy/D
int main() {
    double a1, b1, c1;  // 第 1 个方程的系数
    double a2, b2, c2;  // 第 2 个方程的系数

    std::cout << "Solve the system:" << std::endl; 
    std::cout << "  a1*x + b1*y = c1" << std::endl;
    std::cout << "  a2*x + b2*y = c2" << std::endl;

    std::cout << "Enter a1 b1 c1: ";
    if (!(std::cin >> a1 >> b1 >> c1)) {
        std::cout << "Invalid input for equation 1." << std::endl;
        return 1;
    }
    std::cout << "Enter a2 b2 c2: ";
    if (!(std::cin >> a2 >> b2 >> c2)) {
        std::cout << "Invalid input for equation 2." << std::endl;
        return 1;
    }

    double d = a1 * b2 - a2 * b1;  // 主行列式 D

    if (d == 0) {
        // D = 0: 两直线平行（无解）或重合（无穷多解）
        std::cout << "No unique solution (parallel or identical lines)." << std::endl;
        return 0;
    }

    double x = (c1 * b2 - c2 * b1) / d;
    double y = (a1 * c2 - a2 * c1) / d;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    return 0;
}
