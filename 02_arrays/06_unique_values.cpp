/*
Problem:
Given an array of 10 numbers, print all unique values.
- User will input 10 numbers.
- The program will print each number only once (ignore duplicates).

Time Complexity:
- O(n^2) -> For every element, we check all previous elements to detect duplicates.
- Since n = 10 (small size), it's acceptable. For large arrays, hashing would be better.

Space Complexity:
- O(1) -> No extra space used (we're only printing results).

Example Flow:
Input: 1 2 3 2 4 3 5 6 1 7
Output: 1 2 3 4 5 6 7
*/

#include <iostream>
using namespace std;

// Function to print unique values from the array
void uniqueValues(int arr[], int size)
{
    // Loop through each element in array
    for (int i = 0; i < size; i++)
    {
        int j;
        // Check if arr[i] has appeared before
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break; // If found duplicate, break inner loop
            }
        }

        // If no duplicate was found in previous elements, print arr[i]
        if (i == j)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int numbers[10]; // Array to store 10 numbers
    int size = 10;

    // Input: Take 10 numbers from user
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Output: Print unique values
    cout << "Unique values: ";
    uniqueValues(numbers, size);
    cout << endl;

    return 0;
}
