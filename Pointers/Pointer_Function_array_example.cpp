#include <iostream>
using namespace std;

// Function to calculate the sum and average of array elements.
// Uses pointers to return the sum and average.
void getSumAndAverage(int numbers[], int size, int* sum, double* average) {
    *sum = 0; // Initialize sum to 0.
    for (int i = 0; i < size; i++) {
        *sum += numbers[i]; // Add each element to the sum.
    }
    *average = static_cast<double>(*sum) / size; // Calculate average.
}

int main() {
    int numbers[5] = {4, 7, 2, 8, 3}; // Example array.
    int sum = 0;
    double average = 0.0;

    // Calculate sum and average using the getSumAndAverage function.
    getSumAndAverage(numbers, 5, &sum, &average);

    cout << "Sum: " << sum << endl; // Print the sum.
    cout << "Average: " << average << endl; // Print the average.

    return 0;
}