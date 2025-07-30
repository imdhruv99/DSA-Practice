/*
Problem:
Given an array of 10 numbers, find the smallest and largest number and swap their positions.
- User will input 10 numbers.
- Program will find indices of smallest and largest values.
- Then it will swap them in the array.

Time Complexity:
- O(n) -> Single traversal to find min and max indices, where n = array size.

Space Complexity:
- O(1) -> Swapping is done in-place, no extra space used.

Example Flow:
Input: 5 12 3 8 20 7 9 15 2 10
Output after swapping min and max:
5 12 20 8 2 7 9 15 3 10
*/

#include <iostream>
using namespace std;

// Function to swap smallest and largest elements in the array
void swapMinMax(int arr[], int size)
{
    int indexOfMinValue = 0; // Assume first element is the smallest
    int indexOfMaxValue = 0; // Assume first element is the largest

    // Loop to find actual smallest and largest element indices
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[indexOfMinValue])
        {
            indexOfMinValue = i;
        }
        if (arr[i] > arr[indexOfMaxValue])
        {
            indexOfMaxValue = i;
        }
    }

    // Swap only if min and max are not already the same
    if (indexOfMinValue != indexOfMaxValue)
    {
        int temp = arr[indexOfMinValue];
        arr[indexOfMinValue] = arr[indexOfMaxValue];
        arr[indexOfMaxValue] = temp;
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

    // Process: Swap min and max values in the array
    swapMinMax(numbers, size);

    // Output: Display the modified array after swapping
    cout << "Array after swapping min and max values: ";
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
