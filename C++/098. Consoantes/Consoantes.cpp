#include <iostream>
int main()
{
    char letra;
    std::cin >> letra;
    int soma = 0;
    char consoantes[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 
                     'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z', 'B',
                     'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 
                     'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z'};
    while (letra != '*')
    {
        for (char c : consoantes)
        {
            if (letra == c)
            {
                soma++;
            }
        }
        std::cin >> letra;
    }
    std::cout << soma << std::endl;
    return 0;
}