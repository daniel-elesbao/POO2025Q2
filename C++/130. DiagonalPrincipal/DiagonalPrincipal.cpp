#include <iostream>
#include <iomanip>
int main()
{
    char S;
    int N;
    float soma = 0.0;
    std::cin >> S >> N;
    std::cout << std::fixed << std::setprecision(1);
    int matriz[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        soma += static_cast<float>(matriz[i][i]);
    }

    if (S == 'S')
    {
        std::cout << soma << std::endl;
    }
    else if (S == 'M')
    {
        std::cout << soma / N << std::endl;
    }
    return 0;
}