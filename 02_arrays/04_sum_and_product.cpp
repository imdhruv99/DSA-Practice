/*
Problem:
Given an array of 10 numbers, calculate and print:
1. Sum of all numbers.
2. Product of all numbers.

Time Complexity:
- Sum: O(n)  -> Traverses the array once.
- Product: O(n) -> Traverses the array once.
Overall: O(n), where n = size of the array (n = 10 here).

Space Complexity:
- O(1) -> No extra space used apart from few variables (sum, product).

Example Flow:
Input: 2 3 4 5 6 7 8 9 10 11
Output:
Sum = 65
Product = 19958400
*/

#include <iostream>
using namespace std;

// Function to calculate sum of array elements
int sumOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i]; // Add each element to sum
    }
    return sum;
}

// Function to calculate product of array elements
int productOfArray(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product = product * arr[i]; // Multiply each element to product
    }
    return product;
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

    // Calculate and display the sum of array elements
    cout << "Sum of all values in array is: " << sumOfArray(numbers, size) << endl;

    // Calculate and display the product of array elements
    cout << "Product of all values in array is: " << productOfArray(numbers, size) << endl;

    return 0;
}
