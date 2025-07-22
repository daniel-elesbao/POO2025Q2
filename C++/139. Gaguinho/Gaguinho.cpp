#include <iostream>
#include <sstream>

int main()
{
    std::string S;
    std::getline(std::cin, S);
    std::istringstream iss(S);
    std::string palavra;
    bool primeira = true;

    while (iss >> palavra)
    {
        if (palavra.length() >= 4 && palavra.substr(0, 2) == palavra.substr(2, 2)) {
            palavra.erase(2, 2);
        }
        if (!primeira) std::cout << " ";
        std::cout << palavra;
        primeira = false;
    }
    std::cout << std::endl;
    return 0;
}
