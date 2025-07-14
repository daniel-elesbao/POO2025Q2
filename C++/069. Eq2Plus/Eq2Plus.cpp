#include <iostream>
#include <cmath>
#include <iomanip>
int main ()
{
    double A, B, C;
    std::cin >> A >> B >> C;
    double delta = B * B - 4 * A * C;
    std::cout << std::setprecision(4) << std::fixed;
    if (A == 0 || delta < 0)
    {
        std::cout << "nao ha raiz real" << std::endl;
    }
    else if (delta == 0)
    {
        std::cout << -B / (2 * A) << std::endl;
    }
    else
    {
        std::cout << (-B + sqrt(delta)) / (2 * A) << " " 
                  << (-B - sqrt(delta)) / (2 * A) << std::endl;
    }
    return 0;
}