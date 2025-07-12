#include <iostream>
#include <iomanip>
int main()
{
    float A;
    float B;
    float C;

    std::cin >> A >> B >> C;
    std::cout << std::fixed << std::setprecision(2); // Configura precisão para todas as saídas
    std::cout << A << ' ' << B << ' ' << C << std::endl;

    return 0;
}