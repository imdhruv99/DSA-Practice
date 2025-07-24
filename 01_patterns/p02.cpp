/*
Pattern Problem:
Given an input number 'n', print alphabets in a grid format:

Example for n = 4:
A B C D
A B C D
A B C D
A B C D
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
        char currentChar = 'A'; // Reset to 'A' at the start of every row

        // Inner loop prints letters from 'A' up to the nth letter
        for (int j = 1; j <= number; j++)
        {
            std::cout << currentChar << " ";
            currentChar++; // Move to the next alphabet
        }

        // Line break after each row
        std::cout << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
