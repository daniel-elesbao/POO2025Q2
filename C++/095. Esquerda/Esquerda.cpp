#include <iostream>
int main()
{
    int N;
    char P, O;
    P = 'N';
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> O;
        if (O == 'E')
        {
            if (P == 'N')
            {
                P = 'O';
            }
            else if (P == 'O')
            {
                P = 'S';
            }
            else if (P == 'S')
            {
                P = 'L';
            }
            else if (P == 'L')
            {
                P = 'N';
            }
        }
        else if (O == 'D')
        {
            if (P == 'N')
            {
                P = 'L';
            }
            else if (P == 'L')
            {
                P = 'S';
            }
            else if (P == 'S')
            {
                P = 'O';
            }
            else if (P == 'O')
            {
                P = 'N';
            }
        }
    }
    std::cout << P << std::endl;
    return 0;
}