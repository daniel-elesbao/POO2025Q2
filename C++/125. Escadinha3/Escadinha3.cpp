#include <iostream>
int main()
{
    int N;
    std::cin >> N;
    int irmaos[N];
    for (int i = 0; i < N; i++)
    {
        std::cin >> irmaos[i];
    }
    if (N == 1)
    {
        std::cout << 'S' << std::endl;
    }
    else
    {
        int dif = irmaos[1] - irmaos[0];
        for (int i = 1; i < N; i++)
        {
            if ((irmaos[i] - irmaos[i-1] != 0) &&  (irmaos[i] - irmaos[i-1] != dif))
            {
                std::cout << 'N' << std::endl;
                return 0;
            }
        }
        std::cout << 'S' << std::endl;
    }
    return 0;
}