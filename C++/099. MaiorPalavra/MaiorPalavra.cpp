#include <iostream>
int main()
{
    std::string palavra, maiorPalavra;
    int tamMaior = 0;
    while (std::cin >> palavra)
    {
        if (palavra.length() > tamMaior)
        {
            tamMaior = palavra.length();
            maiorPalavra = palavra;
        }
    }
    if (palavra.empty())
    {
        std::cout << "Nenhuma palavra foi informada" << std::endl;
        return 0;
    }
    std::cout << "A maior palavra informada foi " << maiorPalavra << std::endl;
    return 0;
}
