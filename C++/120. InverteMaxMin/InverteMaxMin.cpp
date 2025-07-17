#include <iostream>
int inverteMaxMin (int V[], int N)
{
    int W[N];
    for (int i = N - 1; i >= 0; i--)
    {
        W[N - 1 - i] = V[i];
    }
    std::cout << V[0];
    for (int i = 1; i < N; i++)
    {
        std::cout << ' ' << V[i];
    }
    std::cout << std::endl << W[0];
    for (int i = 1; i < N; i++)
    {
        std::cout << ' ' << W[i];
    }
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