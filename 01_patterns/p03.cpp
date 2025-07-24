/*
Pattern Problem:
Given an input number 'n', print numbers in a grid format:

Example for n = 4:
1  2  3  4
5  6  7  8
9 10 11 12
13 14 15 16
*/

#include <iostream>

int main()
{
    int number;
    int current = 1; // This will track the next number to print

    std::cout << "Enter the number: ";
    std::cin >> number;

    std::cout << "Number is: " << number << std::endl;

    // Outer loop for each row
    for (int i = 1; i <= number; i++)
    {
        // Inner loop prints 'n' numbers in each row
        for (int j = 1; j <= number; j++)
        {
            std::cout << current << " ";
            current++; // Move to next number
        }

        // Line break after each row
        std::cout << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
