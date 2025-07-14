#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    long long soma = n;
    while (n != 0) 
    {
        std::cin >> n;    
        soma += n;
    }
    std::cout << soma << std::endl;
    return 0;
} 