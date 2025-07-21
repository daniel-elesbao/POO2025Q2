#include <iostream>
int vezes3 (int* vetor, int N)
{
    std::cout << vetor[0]*3;
    for (int i = 1; i < N; i++)
    {
        std::cout << " " << vetor[i]*3;
    }
    std::cout << std::endl;
    return 0;
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
    vezes3 (vetor, N);
    return 0; 
}
