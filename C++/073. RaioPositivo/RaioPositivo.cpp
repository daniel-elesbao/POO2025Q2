#include <iostream>
#include <iomanip>
int main() {
    double raio = 0;
    while (raio <= 0)
    {
        std::cout << "Informe o raio: ";
        std::cin >> raio;
    }
    std::cout << std::fixed << std::setprecision(2);  
    std::cout << "A area eh: " << 3.1415 * raio * raio << std::endl;
    return 0;
}