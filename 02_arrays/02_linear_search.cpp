/*
Problem:
Given an array of 10 numbers and a target number, find the index where the target is present.
- User will input 10 numbers.
- Then input a target number to search in the array.
- Program will check each element one by one (Linear Search).

Time Complexity:
- Best Case: O(1)  -> If target is at the first position.
- Worst Case: O(n) -> If target is at the last position or not present.
- Here, n = 10 (fixed size array).

Space Complexity:
- O(1) -> No extra space used apart from input array and a few variables.

Example Flow:
Input: 10 numbers: 5 12 8 7 19 45 32 9 11 23
Target: 19
Output: Target number 19 found at index 4
*/

#include <iostream>
using namespace std;

// Function to search for target in array using Linear Search
int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; // Return index if target is found
        }
    }
    return -1; // Return -1 if target not found
}

int main()
{
    int numbers[10]; // Array to store user inputs
    int target;      // Target number to search
    int size = 10;

    // Input: Take 10 numbers from user
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Input: Target number to search for
    cout << "Enter target number: ";
    cin >> target;

    // Search for target number in the array
    int index = linearSearch(numbers, size, target);

    // Output: Display result
    if (index != -1)
    {
        cout << "Target number " << target << " found at index " << index << endl;
    }
    else
    {
        cout << "Target number " << target << " not found in the array." << endl;
    }

    return 0;
}
