#include <iostream>
int main()
{
    int N;
    int x;
    int soma = 0;
    std::cin >> N;   
    for (int i = 0; i < N; i++)
    {
        std::cin >> x;
        soma += x;
    }    
    std::cout << soma << std::endl;
    return 0;
}