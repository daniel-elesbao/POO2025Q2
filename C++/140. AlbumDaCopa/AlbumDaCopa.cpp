#include <iostream>

int main()
{
    int N, C, M;
    std::cin >> N >> C >> M;
    int carimbadas[C], compradas[M];
    for (int i = 0; i < C; i++)
    {
        std::cin >> carimbadas[i];
    }
    for (int i = 0; i < M; i++)
    {
        std::cin >> compradas[i];
    }
    int falta = C;
    for (int i = 0; i < C; i++)
        {
            bool encontrada = false;
            for (int j = 0; j < M; j++)
            {
                if (compradas[j] == carimbadas[i])
                {
                    encontrada = true;
                }
            }
            if (encontrada)
            {
                falta--;
            }
        }
    std::cout << falta << std::endl;
}