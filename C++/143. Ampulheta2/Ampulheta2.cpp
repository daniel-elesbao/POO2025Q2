#include <iostream>

int main()
{
    int N, maior = -63, soma = 0;
    std::cin >> N;
    int matriz[N][N];
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            std::cin >> matriz[i][j];
        }
    }
    for (int i = 1; i < N-1; ++i)
    {
        for (int j = 1; j < N-1; ++j)
        {
            soma = matriz[i][j] + matriz[i-1][j-1] + matriz[i-1][j] + matriz[i-1][j+1] + matriz[i+1][j-1] + 
                   matriz[i+1][j] + matriz[i+1][j+1];
            if (soma > maior)
            {
                maior = soma;
            } 
        }
    }
    std::cout << maior << std::endl;
    return 0;
}