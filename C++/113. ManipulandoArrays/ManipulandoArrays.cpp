#include <iostream>
int manipulaArray(int vetor[], int A, int B, int K)
{
    for (int i = A - 1 ; i < B; i++)
    {
        vetor[i] += K;
    }
    return 0;
}

int main()
{
    int N, M, A, B, K;
    std::cin >> N >> M;
    int* vetor = new int[N]();
    for (int i = 0; i < M; i++)
    {
        std::cin >> A >> B >> K;
        manipulaArray(vetor, A, B, K);
    }
    int maior = vetor[0];
    for (int i = 1; i < N; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    std::cout << maior << std::endl;
    delete[] vetor;
    return 0;
}