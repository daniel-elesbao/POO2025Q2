#include <iostream>

int main()
{
    int N, M;
    std::cin >> N >> M;
    int sabre[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            std::cin >> sabre[i][j];
        }
    }
    for (int i = 1; i < N - 1; i++)
    {
        for (int j = 1; j < M - 1; j++)
        {
            if (sabre[i][j] == 42 && sabre[i - 1][j] == 7 && sabre[i + 1][j] == 7 && sabre[i][j - 1] == 7 && 
                sabre[i][j + 1] == 7 && sabre[i - 1][j - 1] == 7 && sabre[i - 1][j + 1] == 7 && sabre[i + 1][j - 1] == 7 && 
                sabre[i + 1][j + 1] == 7)
            {
                std::cout << i+1 << ' ' << j+1 << std::endl;
                return 0;
            }
        }
    }
    std::cout << "0 0" << std::endl;
    return 0;
}
