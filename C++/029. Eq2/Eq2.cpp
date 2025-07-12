#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
    double A, B, C;
    std::cin >> A >> B >> C;
    std::cout << std::fixed << std::setprecision(4);
    std::cout << (-B + sqrt((pow(B, 2))-(4*A*C))) / (2*A) << ' '
              << (-B - sqrt((pow(B, 2))-(4*A*C))) / (2*A) << std::endl;
    return 0;
}