#include <iostream>
#include <iomanip>
int main()
{
    char S;
    int N;
    float soma = 0.0, contador = 0.0;
    std::cin >> S >> N;
    int matriz[N][N];
    std::cout << std::fixed << std::setprecision(1);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            soma += matriz[i][j];
            contador++;
        }
    }
    if (S == 'S')
    {
        std::cout << soma << std::endl;
    }
    else if (S == 'M')
    {
        std::cout << soma / contador << std::endl;
    }
    return 0;
}