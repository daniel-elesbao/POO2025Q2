#include <iostream>
int main()
{
    int N, menor, segundoMenor;
    std::cin >> N;
    int* faltas = new int[N];
    while (N!= 0)
    {
        menor = 1001;
        segundoMenor = 1001;
        for (int i = 0; i < N; i++)
        {
            std::cin >> faltas[i];
        }
        for (int i = 0; i < N; i++)
        {
            if (faltas[i] < menor)
            {
                segundoMenor = menor;
                menor = faltas[i];
            }
            else if (faltas[i] < segundoMenor && faltas[i] > menor)
            {
                segundoMenor = faltas[i];
            }
        }
        for (int i = 0; i < N; i++)
        {
            if (faltas[i] == segundoMenor)
            {
                std::cout << i + 1 << std::endl;
            }
        }
        std::cin >> N;
        faltas = new int[N];
    }
    return 0;
}