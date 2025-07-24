/*
Pattern Problem:
Given an input number 'n', print a pattern of letters where:

Example for n = 4:
AAAA
 BBB
  CC
   D
*/

#include <iostream>

int main()
{
    int number;
    char c = 'A'; // Starting character

    std::cout << "Enter the number: ";
    std::cin >> number;

    std::cout << "Number is: " << number << std::endl;

    // Loop for each line
    for (int i = 0; i < number; i++)
    {
        // Print leading spaces; increases with each row
        for (int j = 0; j < i; j++)
        {
            std::cout << " ";
        }

        // Print the current character (decreasing count per row)
        for (int j = 0; j < number - i; j++)
        {
            std::cout << c;
        }

        // Move to next character in alphabet for next row
        c++;

        // Line break after each row
        std::cout << std::endl;
    }

    return 0;
}
