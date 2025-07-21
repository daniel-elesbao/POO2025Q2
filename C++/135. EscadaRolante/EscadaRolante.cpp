#include <iostream>
int escadaRolante(int T[], int N)
{
    int tempo = 10;
    for (int i = 1; i < N; i++)
    {
        if (T[i]-T[i-1] > 10)
        {
            tempo += 10;
        }
        else
        {
            tempo += T[i]-T[i-1];
        }
    }
    std::cout << tempo << std::endl;
    return 0;
}

int main()
{
    int N;
    std::cin >> N;
    while (N != 0)
    {
        int T[N];
        for (int i = 0; i < N; i++)
        {
            std::cin >> T[i];
        }
        escadaRolante(T, N);
        std::cin >> N;
    }
    return 0;
}