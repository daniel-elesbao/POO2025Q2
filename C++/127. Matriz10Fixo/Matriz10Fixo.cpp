#include <iostream>
int x10 (int matriz[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << matriz [i][0] * 10; 
        for (int j = 1; j < 5; j++)
        {
            std::cout << ' ' << matriz[i][j] * 10;
        }
    std::cout << std::endl;
    }
    return 0;
}

int main()
{
    int matriz[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cin >> matriz[i][j];
        }
    }
    x10 (matriz);
    return 0;
}