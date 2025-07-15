#include <iostream>
int main()
{
    int N;
    std::cin >> N;
    while (N != 0)
    {
        int* vetor = new int[N];
        for (int i = 0; i < N; i++)
        {
            std::cin >> vetor[i];
        }
        if (vetor[0] % 2 == 0)
        {
            std::cout << 0;
        }
        else
        {
            std::cout << 1;
        }
        for (int i = 1; i < N; i++)
        {
            if (vetor[i] % 2 == 0)
            {
                std::cout << ' ' << 0;
            }
            else
            {
                std::cout << ' ' << 1;
            }
        }
        std::cout << std::endl;
        std::cin >> N;
    }
    return 0;
}