#include <iostream>
int pares(int* vetor, int tamanho)
{
    int quantidade = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            std::cout << vetor[i] << " ";
            quantidade++;
        }
    }
    return quantidade;
}

int main()
{
    int N;
    std::cin >> N;
    int vetor[N];
    for (int i = 0; i < N; i++)
    {
        std::cin >> vetor[i];
    }
    int quantidade = pares(vetor, N);
    std::cout << quantidade << std::endl;
    return 0;
}