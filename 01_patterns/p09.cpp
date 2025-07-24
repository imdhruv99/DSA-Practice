/*
Pattern Problem:
Given an input number 'n', print numbers in a sequence like below:

Example for n = 4:
1
2 3
4 5 6
7 8 9 10
*/

#include <iostream>

int main()
{
    int number;
    int current = 1; // This will keep track of the next number to print

    std::cout << "Enter the number: ";
    std::cin >> number;

    std::cout << "Number is: " << number << std::endl;

    // Outer loop for each row (from 1 to number)
    for (int i = 1; i <= number; i++)
    {
        // Inner loop prints 'i' numbers in each row
        for (int j = 1; j <= i; j++)
        {
            std::cout << current << " ";
            current++; // Move to the next number
        }

        // Line break after each row
        std::cout << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
