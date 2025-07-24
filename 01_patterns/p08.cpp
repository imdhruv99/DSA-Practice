/*
Pattern Problem:
Given an input number 'n', print numbers in reverse order like:

Example for n = 4:
1
2 1
3 2 1
4 3 2 1
*/

#include <iostream>

int main()
{
    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    std::cout << "Number is: " << number << std::endl;

    // Outer loop for each row
    for (int i = 0; i < number; i++)
    {
        // Inner loop prints numbers in reverse starting from (i + 1) down to 1
        for (int j = i + 1; j > 0; j--)
        {
            std::cout << j << " ";
        }

        // Line break after each row
        std::cout << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
