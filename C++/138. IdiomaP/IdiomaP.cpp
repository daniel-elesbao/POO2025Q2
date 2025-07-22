#include <iostream>

int idiomaP(std::string S)
{
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == 'a')
        {
            std::cout << "apa";
        }
        else if (S[i] == 'e')
        {
            std::cout << "epe";
        }
        else if (S[i] == 'i')
        {
            std::cout << "ipi";
        }
        else if (S[i] == 'o')
        {
            std::cout << "opo";
        }
        else if (S[i] == 'u')
        {
            std::cout << "upu";
        }
        else if (S[i] == 'A')
        {
            std::cout << "Apa";
        }
        else if (S[i] == 'E')
        {
            std::cout << "Epe";
        }
        else if (S[i] == 'I')
        {
            std::cout << "Ipi";
        }
        else if (S[i] == 'O')
        {
            std::cout << "Opo";
        }
        else if (S[i] == 'U')
        {
            std::cout << "Upu";
        }
        else
        {
            std::cout << S[i];
        }
    }
    return 0;
}

int main()
{
    std::string S;
    while (std::getline(std::cin, S))
    {
        idiomaP(S);
        std::cout << std::endl;
    }
    return 0;
}