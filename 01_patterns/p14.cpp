/*
Pattern Problem:
Given an input number 'n', print a butterfly pattern where:
- Upper half forms wings opening outwards.
- Lower half forms wings closing back in.

Example for n = 4:
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
*/

#include <iostream>

int main()
{
    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    std::cout << "Number is: " << number << std::endl;

    // Upper Half of the Butterfly
    for (int i = 0; i < number; i++)
    {
        // Left side stars: increase with each row
        for (int j = 0; j <= i; j++)
        {
            std::cout << "*";
        }

        // Spaces in between wings: decrease as stars increase
        for (int j = 0; j < 2 * (number - i - 1); j++)
        {
            std::cout << " ";
        }

        // Right side stars: mirror of left side
        for (int j = 0; j <= i; j++)
        {
            std::cout << "*";
        }

        // Move to next line after one row is complete
        std::cout << std::endl;
    }

    // Lower Half of the Butterfly
    for (int i = 0; i < number; i++)
    {
        // Left side stars: decrease with each row
        for (int j = number; j > i; j--)
        {
            std::cout << "*";
        }

        // Spaces in between wings: increase as stars decrease
        for (int j = 0; j < 2 * i; j++)
        {
            std::cout << " ";
        }

        // Right side stars: mirror of left side
        for (int j = number; j > i; j--)
        {
            std::cout << "*";
        }

        // Move to next line after one row is complete
        std::cout << std::endl;
    }

    return 0;
}
