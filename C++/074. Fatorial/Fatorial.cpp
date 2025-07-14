#include <iostream>
int main() 
{
    int N;
    std::cin >> N;
    long long fatorial = 1;
    if (N == 0)
    {
        std::cout << fatorial << std::endl;
        return 0;
    }
    for (int i = 1; i <= N; ++i) {
        fatorial *= i;
    }
    std::cout << fatorial << std::endl;
    return 0;
}