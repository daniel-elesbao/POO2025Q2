#include <iostream>
#include <iomanip>

int acima(int notas[], int N)
{
    std::cout << std::fixed << std::setprecision(3);   
    long soma = 0;
    double notasAcima = 0;
    double media = 0;
    for (int i = 0; i < N; i++)
    {
        soma += notas[i];
    }
    media = static_cast<double>(soma) / static_cast<double>(N);
    for (int i = 0; i < N; i++)
    {
        if (static_cast<double>(notas[i]) >= media)
        {
            notasAcima++;
        }
    }
    std::cout << (notasAcima / static_cast<double>(N)) * 100 << "%";
    return 0;
}

int main()
{
    int C, N;
    std::cin >> C;
    for (int i = 0; i < C; i++)
    {
        std::cin >> N;
        int notas[N];
        for (int j = 0; j < N; j++)
        {
            std::cin >> notas[j];
        }
        acima(notas, N);
    }
    return 0;
    std::cout << std::endl;
}
