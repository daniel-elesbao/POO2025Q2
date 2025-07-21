#include <iostream>
#include <iomanip>
int somaVet (float* vetor1, float* vetor2, int N)
{
    std::cout << std::fixed << std::setprecision(2);
    std::cout << vetor1[0] + vetor2[0];
    for (int i = 1; i < N; i++)
    {
        std::cout << ' ' << vetor1[i] + vetor2[i];
    }
    std::cout << std::endl;
    return 0;
}

int main()
{
    int N;
    std::cin >> N;
    while (N != 0)
    {
        float* vetor1 = new float[N];
        float* vetor2 = new float[N];        
        for (int i = 0; i < N; i++)
        {
            std::cin >> vetor1[i];
        }
        for (int i = 0; i < N; i++)
        {
            std::cin >> vetor2[i];
        }    
        somaVet (vetor1, vetor2, N);
        std::cin >> N;
    }
    return 0;
}