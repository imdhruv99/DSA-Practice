/*
Problem:
Given an array of 10 numbers, reverse the array in-place.
- User will input 10 numbers.
- Program will reverse the array using a two-pointer approach (without extra space).

Time Complexity:
- O(n) -> Each element is visited once, where n is the size of the array (here n = 10).

Space Complexity:
- O(1) -> In-place reversal, no extra space used except a temporary variable for swapping.

Example Flow:
Input: 10 20 30 40 50 60 70 80 90 100
Output: 100 90 80 70 60 50 40 30 20 10
*/

#include <iostream>
using namespace std;

// Function to reverse the array in-place
void reverseArray(int array[], int size)
{
    int start = 0, end = size - 1;

    // Swap elements from start and end moving towards center
    while (start < end)
    {
        // Swap array[start] and array[end]
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        // Move pointers towards the center
        start++;
        end--;
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

    // Reverse the array
    reverseArray(numbers, size);

    // Output: Display the reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
