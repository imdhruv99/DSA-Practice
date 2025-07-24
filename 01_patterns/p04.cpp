/*
Pattern Problem:
Given an input number 'n', print a right-angled triangle of stars:

Example for n = 4:
*
**
***
****
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
        // Inner loop prints '*' i times in each row
        for (int j = 1; j <= i; j++)
        {
            std::cout << "*";
        }

        // Line break after completing one row
        std::cout << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
