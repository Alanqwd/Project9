#include <iostream>

int main() 
{
    char letters[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };
    int boardSize = 8;

    for (int i = boardSize; i >= 1; i--) 
    {
        std::cout << i << "";
        for (int j = 1; j <= boardSize; j++)
        {
            if ((i + j) % 2 == 0) 
            {
                std::cout << "  ";
            }
            else 
            {
                std::cout << "  ";
            } 
            std::cout << letters[j - 1] << i << "   ";
        }
        std::cout << std::endl;
    }

    std::cout << "  ";
    for (int i = 1; i <= boardSize; i++) 
    {
        std::cout << " " << letters[i - 1 ] << "     ";
    }

    return 0;
}