/*
Problem:
Given two arrays of 10 numbers each, print the intersection elements (common numbers in both arrays).
- User inputs two arrays.
- Program finds numbers that are present in both arrays.
- Each common number should be printed only once.

Time Complexity:
- O(n^2) -> For every element in first array, we scan entire second array.
- Since n = 10, it's acceptable for small inputs.

Space Complexity:
- O(1) -> No extra space used apart from variables.

Example Flow:
Array 1: 1 2 3 4 5 6 7 8 9 10
Array 2: 5 7 9 11 13 15 17 19 21 23
Output: 5 7 9
*/

#include <iostream>
using namespace std;

// Function to find and print intersection elements
void findIntersection(int arr1[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // Check if arr1[i] exists in arr2
        for (int j = 0; j < size; j++)
        {
            if (arr1[i] == arr2[j])
            {
                // Before printing, check if arr1[i] has already been printed (avoid duplicates)
                bool alreadyPrinted = false;
                for (int k = 0; k < i; k++)
                {
                    if (arr1[k] == arr1[i])
                    {
                        alreadyPrinted = true;
                        break;
                    }
                }
                // Print only if it's the first time encountering this common value
                if (!alreadyPrinted)
                {
                    cout << arr1[i] << " ";
                }
                break; // No need to check further in arr2 once found
            }
        }
    }
}

int main()
{
    int numbersOne[10]; // First array
    int numbersTwo[10]; // Second array
    int size = 10;

    // Input: First array
    cout << "Enter values for first array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbersOne[i];
    }

    // Input: Second array
    cout << "Enter values for second array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbersTwo[i];
    }

    // Output: Intersection of both arrays
    cout << "Intersection values: ";
    findIntersection(numbersOne, numbersTwo, size);
    cout << endl;

    return 0;
}
