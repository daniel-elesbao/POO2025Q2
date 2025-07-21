#include <iostream>
int listaNomes (std::string nomes[], int N)
{
    for (int i = N - 1; i >= 0; i--)
    {
        std::cout << nomes[i] << std::endl;
    }
    return 0;
}

int main ()
{ 
    int N;
    std::cin >> N;
    std::string nomes[N];
    for (int i = 0; i < N; i++)
    {
        std::cin >> nomes[i];
    }
    listaNomes(nomes, N);
    return 0;
}