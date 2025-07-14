#include <iostream>
int main ()
{
    double X, Y;
    std::cin >> X >> Y;
    if (X == 0 && Y == 0)
    {
        std::cout << "Origem" << std::endl;
    }
    else if (X == 0)
    {
        std::cout << "Eixo Y" << std::endl;
    }
    else if (Y == 0)
    {
        std::cout << "Eixo X" << std::endl;
    }
    else if (X > 0 && Y > 0)
    {
        std::cout << "Q1" << std::endl;
    }
    else if (X < 0 && Y > 0)
    {
        std::cout << "Q2" << std::endl;
    }
    else if (X < 0 && Y < 0)
    {
        std::cout << "Q3" << std::endl;
    }
    else
    {
        std::cout << "Q4" << std::endl;
    }
    return 0;
}