#include <iostream>
#include <iomanip>

double acima(int notas[], int N)
{
    long soma = 0;
    int acimaMedia = 0;

    for (int i = 0; i < N; i++)
    {
        soma += notas[i];
    }

    double media = static_cast<double>(soma) / N;

    for (int i = 0; i < N; i++)
    {
        if (notas[i] > media)
        {
            acimaMedia++;
        }
    }

    return (static_cast<double>(acimaMedia) / N) * 100.0;
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

        double resultado = acima(notas, N);
        std::cout << std::fixed << std::setprecision(3) << resultado << "%" << std::endl;
    }

    return 0;
}