#include <iostream>
using namespace std;

// Function template named arraySum
template <typename T>
T arraySum(T arr[], int size) {
    // Initialize a variable to store the sum
    // Starting with arr[0] or T() is standard
    T sum = T(); 

    // Use a loop to add all elements
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Return the sum
    return sum;
}

int main() {
    int arr1[] = {7, 14, 21, 28,35, 42, 49};
    double arr2[] = {1 ,2, 3,4,5,6,7};

    cout << "Sum of int array: " << arraySum(arr1, 7) << endl;
    cout << "Sum of double array: " << arraySum(arr2, 7) << endl;

    return 0;
}