#include <iostream>

int main()
{
    int n_valid = 10;
    int n_zero = 0;
    int n_first;
    int n_second;

    std::cout << "MY Key:";
    std::cin >> n_first;
    if (n_valid <= n_first)
    {
        std::cout << "Invalid";
    }

    else if (n_zero >= n_first)
    {
        std::cout << "Invalid";
    }
    else
    {
        std::cout << "Guess it :";
        std::cin >> n_second;
        if (n_valid <= n_second)
        {
            std::cout << "Invalid";
        }

        else if (n_zero >= n_second)
        {
            std::cout << "Invalid";
        }
        else
        {
            if (n_second == n_first)
            {
                std::cout << "Unlock";
            }
            else
            {
                std::cout << "NOt the rightkey";
            }
        }
    }
}