#include <iostream>
int main()
{
    int M1, M2;
    std::cin >> M1 >> M2;
    if (M2 <= 2)
    {
        std::cout << "Nova" << std::endl;
    }
    else if (M2 >= 97)
    {
        std::cout << "Cheia" << std::endl;
    }
    else if (M1 > M2)
    {
        std::cout << "Minguante" << std::endl;
    }
    else
    {
        std::cout << "Crescente" << std::endl;
    }
    return 0;
}