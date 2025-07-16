#include <iostream>
long long soma (int* vetor, int N)
{
    long long soma = 0;
    for (int i = 0; i < N; i++)
    {
        soma += vetor[i];
    }
    return soma;
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
    long long somaVet = soma (vetor, N);
    std::cout << somaVet << std::endl;
    return 0; 
}