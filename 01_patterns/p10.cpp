/*
Pattern Problem:
Given an input number 'n', print numbers in a pattern where:

Example for n = 4:
1111
 222
  33
   4
*/

#include <iostream>

int main()
{
    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    std::cout << "Number is: " << number << std::endl;

    // Loop for each row
    for (int i = 0; i < number; i++)
    {
        // Print spaces at the start of each row
        // Spaces increase with each row
        for (int j = 0; j < i; j++)
        {
            std::cout << " ";
        }

        // Print numbers in decreasing count per row
        // The number printed is (i + 1)
        for (int j = 0; j < number - i; j++)
        {
            std::cout << i + 1;
        }

        // Move to the next line after completing one row
        std::cout << std::endl;
    }

    return 0;
}
