#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted arrays
vector<int> mergeArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> merged; // Resultant merged array
    int i = 0, j = 0;

    // Merge both arrays
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    // Add remaining elements of arr1
    while (i < arr1.size()) {
        merged.push_back(arr1[i]);
        i++;
    }

    // Add remaining elements of arr2
    while (j < arr2.size()) {
        merged.push_back(arr2[j]);
        j++;
    }

    return merged;
}

int main() {
    // Example input
   
    vector<int> array1 = {1, 3, 5, 7};
    vector<int> array2 = {2, 4, 6, 8, 10};

    // Merge arrays
    vector<int> result = mergeArrays(array1, array2);

    // Print merged array
    cout << "Merged Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

