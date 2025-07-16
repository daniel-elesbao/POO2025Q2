#include <iostream>
int maiorElemento (int vetor[], int N)
{
    int maior = vetor[0];
    int indiceMaior = 0;
    for (int i = 1; i < N; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            indiceMaior = i;
        }
    }
    std::cout << indiceMaior << ' ' << maior << std::endl;
    return 0;
}

int main()
{
    int N;
    std::cin >> N;
    while (N != 0)
    {
            int vetor[N];
            for (int i = 0; i < N; i++)
            {
                std::cin >> vetor[i];
            }
            maiorElemento(vetor, N);
            std::cin >> N;
    }
    return 0;
}