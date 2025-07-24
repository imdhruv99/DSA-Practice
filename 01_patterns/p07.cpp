/*
Pattern Problem:
Given an input number 'n', print numbers in increasing order per row:

Example for n = 4:
1
1 2
1 2 3
1 2 3 4
*/

#include <iostream>

int main()
{
    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    std::cout << "Number is: " << number << std::endl;

    // Outer loop controls the number of rows
    for (int i = 1; i <= number; i++)
    {
        // Inner loop prints numbers from 1 up to current row number 'i'
        for (int j = 1; j <= i; j++)
        {
            std::cout << j << " ";
        }

        // Line break after each row
        std::cout << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
