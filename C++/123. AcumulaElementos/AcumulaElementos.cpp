#include <iostream>
int acumulaElementos(int vetor[], int N)
{
    int maior = vetor[0];
    for (int i = 0; i < N; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    for (int i = 0; i <= maior; i++)
    {
        int count = 0;
        for (int j = 0; j < N; j++)
        {
            if (vetor[j] <= i)
            {
                count++;
            }
        }
        std::cout << "[" << i << "] " << count << std::endl;
    }
    return 0;  
}

int main()
{
    int N;
    std::cin >> N;
    while (N > 0)
    {
        int vetor[N];
        for (int i = 0; i < N; i++)
        {
            std::cin >> vetor[i];
        }
        acumulaElementos(vetor, N);
        std::cin >> N;
    }
    return 0;
}