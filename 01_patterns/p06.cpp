/*
Pattern Problem:
Given an input number 'n', print letters in a pattern where:

Example for n = 4:
A
B B
C C C
D D D D
*/

#include <iostream>

int main()
{
    int number;
    char currentChar = 'A'; // Start with 'A'

    std::cout << "Enter the number: ";
    std::cin >> number;

    std::cout << "Number is: " << number << std::endl;

    // Outer loop for each row
    for (int i = 1; i <= number; i++)
    {
        // Inner loop prints the current character 'i' times in the row
        for (int j = 1; j <= i; j++)
        {
            std::cout << currentChar << " ";
        }

        // Move to the next letter for the next row
        currentChar++;

        // Line break after each row
        std::cout << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
