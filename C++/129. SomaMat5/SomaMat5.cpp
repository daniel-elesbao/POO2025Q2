#include <iostream>
int main()
{
    int N, M, soma = 0;
    std::cin >> N >> M;
    int matriz[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            std::cin >> matriz[i][j];
            soma += matriz[i][j];
        }
    }
    std::cout << "Somatorio da Matriz: " << soma << std::endl;
    return 0;
}