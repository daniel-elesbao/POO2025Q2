#include <iostream>
int lua(int M1, int M2)
{
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

int main()
{
    int N, M1, M2;
    std::cin >> N;
    for (int i = 0; i < N; ++i)
    {
        std::cin >> M1 >> M2;
        lua(M1, M2);
    }
    return 0;
}