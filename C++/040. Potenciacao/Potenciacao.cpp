#include <iostream>
#include <iomanip>
#include <cmath>
int main()
{
    int A, B;
    double C;
    std::cin >> A >> B;
    C = std::pow(static_cast<double>(A) , static_cast<double>(B));
    std::cout << std::fixed << std::setprecision(4);
    std::cout << C << std::endl;
    return 0;
}