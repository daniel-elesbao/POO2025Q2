#include <iostream>
int main()
{
    std::string palavra;
    while (std::cin >> palavra)
    {
        for (int i = palavra.length() - 1; i >= 0; --i)
        {
            std::cout << palavra[i];
        }
        std::cout << std::endl;
    }
    return 0;
}