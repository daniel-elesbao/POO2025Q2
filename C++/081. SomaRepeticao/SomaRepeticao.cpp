#include <iostream>
int main()
{
    int A, B;
    std::cin >> A >> B;
    for (int i = 0; i < B; i++)
    {
        A++;
    }
    std::cout << A << std::endl;
    return 0;
} 