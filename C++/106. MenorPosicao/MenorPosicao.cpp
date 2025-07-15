#include <iostream>
int menorPosicao(int* vetor, int tamanho)
{
    int posicao = 0;
    for (int i = 1; i < tamanho; i++)
    {
        if (vetor[i] < vetor[posicao])
        {
            posicao = i;
        }
    }
    return posicao;
}
int main()
{
    int N;
    std::cin >> N;
    int* vetor = new int[N];
    for (int i = 0; i < N; i++)
    {
        std::cin >> vetor[i];
    }
    int posicao = menorPosicao(vetor, N);
    std::cout << "Menor valor: " << vetor[posicao] << std::endl;
    std::cout << "Posicao: " << posicao << std::endl;
    return 0;
}
