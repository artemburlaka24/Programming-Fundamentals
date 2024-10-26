#include <iostream> 
#include <algorithm> 

using namespace std; 

int main() {
    // Task 1
    {
        int arr[11]; 
        for (int i = 0; i < 11; i++) { 
            arr[i] = (i % 2 == 0) ? 2 * i - 50 : i - 6; 
        }

        sort(arr, arr + 11); 

        cout << "Sorted array (Task 1): "; 
        for (int i = 0; i < 11; ++i) cout << arr[i] << " "; 
        cout << endl; 
    }

    // Task 2
    {
        const int n = 10; 
        int arr1[n], arr2[n], arr3[n]; 

        for (int i = 0; i < n; ++i) { 
            arr1[i] = 2 * i + 38; 
            arr2[i] = 60 - 3 * i; 
            arr3[i] = arr1[i] + arr2[i]; 
        }

        int max_element_value = *max_element(arr3, arr3 + n); 

        cout << "First array (Task 2): "; 
        for (int i = 0; i < n; ++i) cout << arr1[i] << " "; 
        cout << "Second array: "; 
        for (int
