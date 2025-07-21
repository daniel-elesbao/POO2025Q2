#include <iostream>

bool troco(long long N, long long M)
{
    int notas[] = {2, 5, 10, 20, 50, 100};
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if ((M - N) == (notas[i] + notas[j]))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    long long N, M;
    std::cin >> N >> M;
    while (N != 0 && M != 0)
    {
        if (troco(N, M))
        {
            std::cout << "possible" << std::endl;
        }
        else
        {
            std::cout << "impossible" << std::endl;
        }
        std::cin >> N >> M;
    }
    return 0;
}