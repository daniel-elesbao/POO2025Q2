#include <iostream>
#include <iomanip>
#include <cmath>
int main()
{
    long long A;
    double B;
    std::cin >> A;
    B = std::sqrt(static_cast<double>(A));
    std::cout << std::fixed << std::setprecision(4);
    std::cout << B << std::endl;
    return 0;
}