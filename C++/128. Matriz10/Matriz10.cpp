#include <iostream>
int main()
{
    int N, M;
    std::cin >> N >> M;
    int matriz[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            std::cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        std::cout << matriz [i][0] * 10; 
        for (int j = 1; j < M; j++)
        {
            std::cout << ' ' << matriz[i][j] * 10;
        }
    std::cout << std::endl;
    }
    return 0;
}