#include <iostream>

int main()
{
    int N, M;
    std::cin >> N >> M;
    int compradas[M];
    for (int i = 0; i < M; ++i)
    {
        std::cin >> compradas[i];
    }

    int repetidas = 0;
    for (int i = 0; i < M; ++i)
    {
        bool achou = false;
        for (int j = i + 1; j < M && !achou; ++j)
        {
            if (compradas[i] == compradas[j])
            {
                achou = true;
            }
        }
        if (achou)
        {
            repetidas++;
        }
    }
    std::cout << N - (M - repetidas) << std::endl;
    return 0;
}