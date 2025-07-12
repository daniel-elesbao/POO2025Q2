#include <iostream>
#include <iomanip>
#include <cmath>
int main()
{
    double A;
    std::cin >> A;
    std::cout << std::fixed << std::setprecision(4);
    std::cout << floor(A) << std::endl;
    return 0;
}