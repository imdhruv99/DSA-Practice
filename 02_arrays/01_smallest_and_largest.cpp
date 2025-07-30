/*
Problem:
Given an array of 10 numbers, find and print the smallest number.
- The program takes 10 inputs from the user.
- It then iterates through the array to determine the smallest value.

Example Flow:
Input: 45 67 23 89 -12 99 34 56 78 10
Output: smallest number in array is: -12
*/

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int numbers[10];                                      // Array to store 10 numbers
    int size = 10;                                        // Fixed size of the array
    int smallest = INT_MAX, inbuiltMinFunction = INT_MAX; // Initialize smallest with maximum possible integer
    int largest = INT_MIN, inbuiltMaxFunction = INT_MIN;  // Initialize largest with minimum possible integer
    int indexOfSmallest = 0, indexOfLargest = 0;          // Variables to store indices of smallest and largest numbers

    // Input: Take 10 numbers from user
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Process: Find the smallest number in the array
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] < smallest)
        {
            smallest = numbers[i]; // Update smallest if current number is smaller
            indexOfSmallest = i;   // Store the index of the smallest number
        }

        if (numbers[i] > largest)
        {
            largest = numbers[i]; // Update largest if current number is larger
            indexOfLargest = i;   // Store the index of the largest number
        }

        // alternative way to find smallest using std::min
        inbuiltMinFunction = min(smallest, numbers[i]);

        // alternative way to find largest using std::max
        inbuiltMaxFunction = max(largest, numbers[i]);
    }

    // Output: Display the smallest and largest number found
    cout << "smallest number in array is: " << smallest << " and using in built function: " << inbuiltMinFunction << " at index " << indexOfSmallest << endl;
    cout << "largest number in array is: " << largest << " and using in built function: " << inbuiltMaxFunction << " at index " << indexOfLargest << endl;
    return 0;
}
