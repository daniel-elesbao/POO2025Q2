#include <iostream>
int main()
{
    std::string palavra;
    int espacos = 0;
    bool primeiraLetra = true;
    while (std::cin >> palavra)
    {
        for (char c : palavra)
        {    
            if (primeiraLetra)
            {
                std::cout << c;
                primeiraLetra = false;
            }
            else
            {
                std::cout << ' ' << c;

            }
        }
        std::cout << std::endl;
        primeiraLetra = true;
    }
    return 0;
}