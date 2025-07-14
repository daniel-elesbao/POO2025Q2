#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    int somaDiv = 0;
    while (n >= 0) 
    {
        for (int i = 1; i < n; ++i) 
        {
            if (n % i == 0) 
            {
                somaDiv += i;
            }
        }
        if (somaDiv == n)
        {
            std::cout << "perfeito" << std::endl;
        }
        else if (somaDiv > n)
        {
            std::cout << "abundante" << std::endl;
        }
        else
        {
            std::cout << "deficiente" << std::endl;
        }
        somaDiv = 0;
        std::cin >> n;  
    }
    return 0;
}