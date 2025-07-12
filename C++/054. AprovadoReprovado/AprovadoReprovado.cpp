#include <iostream>
int main()
{
    float N;
    int F;
    std::cin >> N >> F;
    if (N >= 6.0 && F <= 30) {
        std::cout << "Aprovado!" << std::endl;
        return 0;
    }
    else
    {
        std::cout << "Reprovado!" << std::endl;
        return 0;
    }
}