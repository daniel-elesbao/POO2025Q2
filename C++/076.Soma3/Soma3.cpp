#include <iostream>
int main()
{
    int soma = 0;
    int n;
    while (std::cin >> n) 
    {
        soma += n;
    }
    std::cout << soma << std::endl; 
    return 0;
}