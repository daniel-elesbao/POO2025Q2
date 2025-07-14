#include <iostream>
int main()
{
    int N;
    int M;
    int x;
    long long soma;
    std::cin >> N;
    for (int i = 0; i < N; ++i) 
    {
        std::cin >> M;
        soma = 0;
        for (int j = 0; j < M; ++j) 
        {
            std::cin >> x;
            soma += x;
        }
        std::cout << soma << std::endl;
    }
    return 0;
}