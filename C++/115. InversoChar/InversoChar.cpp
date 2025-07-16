#include <iostream>
int inversoChar (char vetor[], int N)
{
    std::cout << vetor[N - 1];
    for (int i = N - 2; i >= 0; i--)
    {
        std::cout << ' ' << vetor[i];
    }
    std::cout << std::endl;
    return 0;
}

int main()
{
    int N;
    std::cin >> N;
    char vetor[N];
    for (int i = 0; i < N; i++)
    {
        std::cin >> vetor[i];
    }
    inversoChar(vetor, N);
    return 0;
}