/*
Pattern Problem:
Given an input number 'n', print numbers in a pattern where:

Example for n = 4:
1
2 2
3 3 3
4 4 4 4
*/

#include <iostream>

int main()
{
    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    std::cout << "Number is: " << number << std::endl;

    // Outer loop for each row
    for (int i = 1; i <= number; i++)
    {
        // Inner loop prints the current row number 'i' times
        for (int j = 1; j <= i; j++)
        {
            std::cout << i << " ";
        }

        // Line break after each row
        std::cout << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
