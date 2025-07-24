/*
Pattern Problem:
Given an input number 'n', print a hollow diamond (half) pattern where:
- Upper half expands with spaces in between stars.
- Lower half shrinks back symmetrically.

Example for n = 4:
    *
   * *
  *   *
 *     *
  *   *
   * *
    *
*/

#include <iostream>

int main()
{
    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    std::cout << "Number is: " << number << std::endl;

    // Upper half of the pattern
    for (int i = 0; i < number; i++)
    {
        // Print leading spaces (decreasing as we go down)
        for (int j = 0; j < number - i - 1; j++)
        {
            std::cout << " ";
        }

        // Print the first star of the row
        std::cout << "*";

        // Print inner spaces (increasing with each row after first)
        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                std::cout << " ";
            }
            // Print the second star at the end of the hollow part
            std::cout << "*";
        }

        // Move to the next line after one row is done
        std::cout << std::endl;
    }

    // Lower half of the pattern
    for (int i = 0; i < number - 1; i++)
    {
        // Print leading spaces (increasing as we go down)
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << " ";
        }

        // Print the first star of the row
        std::cout << "*";

        // Print inner spaces (decreasing with each row except the last one)
        if (i != number - 2)
        {
            for (int j = 0; j < 2 * (number - i) - 5; j++)
            {
                std::cout << " ";
            }
            // Print the second star at the end of the hollow part
            std::cout << "*";
        }

        // Move to the next line after one row is done
        std::cout << std::endl;
    }

    return 0;
}
