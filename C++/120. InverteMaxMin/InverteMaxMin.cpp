#include <iostream>
int inverteMaxMin (int V[], int N)
{
<<<<<<< HEAD
    int maior = V[0];
    int indexMaior = 0;
    int menor = V[0];
    int indexMenor = 0;
    for (int i = 1; i < N; i++)
    {
        if (V[i] > maior)
        {
            maior = V[i];
            indexMaior = i;
        }
        if (V[i] < menor)
        {
            menor = V[i];
            indexMenor = i;
        }
    }
    V[indexMaior] = menor;
    V[indexMenor] = maior;
=======
    int W[N];
    for (int i = N - 1; i >= 0; i--)
    {
        W[N - 1 - i] = V[i];
    }
>>>>>>> 1697395e4dc0e80860f81fb987345b70901650cd
    std::cout << V[0];
    for (int i = 1; i < N; i++)
    {
        std::cout << ' ' << V[i];
    }
<<<<<<< HEAD
=======
    std::cout << std::endl << W[0];
    for (int i = 1; i < N; i++)
    {
        std::cout << ' ' << W[i];
    }
>>>>>>> 1697395e4dc0e80860f81fb987345b70901650cd
    std::cout << std::endl;
    return 0;
}

int main()
{
    int N;
    std::cin >> N;
    int V[N];
    for (int i = 0; i < N; i++)
    {
        std::cin >> V[i];
    }
    inverteMaxMin(V, N);
    return 0;
}