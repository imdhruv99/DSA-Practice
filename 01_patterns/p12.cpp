/*
Pattern Problem:
Given an input number 'n', print the following pattern.

Example for n = 4:

      1
     121
    12321
   1234321
*/

#include <iostream>

int main()
{
    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    std::cout << "Number is: " << number << std::endl;

    // Outer loop controls the number of lines (from 0 to number-1)
    for (int i = 0; i < number; i++)
    {

        // First, print spaces to create the left padding
        // For line i, we need (number - i - 1) spaces
        for (int j = 0; j < number - i - 1; j++)
        {
            std::cout << " ";
        }

        // Print increasing numbers from 1 up to (i + 1)
        // Example: when i = 2 -> prints 123
        for (int j = 0; j <= i; j++)
        {
            std::cout << j + 1;
        }

        // Print decreasing numbers from i down to 1
        // Example: when i = 2 -> prints 2 1
        for (int j = i; j > 0; j--)
        {
            std::cout << j;
        }

        // Move to the next line after printing one full row
        std::cout << std::endl;
    }

    return 0;
}
