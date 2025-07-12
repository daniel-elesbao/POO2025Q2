#include <iostream>
#include <iomanip>
int main()
{
    double A;
    double B;
    double C;

    std::cin >> A >> B >> C;
    std::cout << std::fixed << std::setprecision(4); // Configura precisão para todas as saídas
    std::cout << A << ' ' << B << ' ' << C << std::endl;

    return 0;
}