#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Linear Search Function
int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target)
            return i; // Return index
    }
    return -1; // Not found
}

// Binary Search Function
int binarySearch(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoid overflow
        if (arr[mid] == target)
            return mid; // Return index
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Not found
}

int main() {

    vector<int> data = {10, 20, 30, 40, 50};
    int target = 30;

    // Linear Search
    int linearResult = linearSearch(data, target);
    if (linearResult != -1)
        cout << "Linear Search: Element found at index " << linearResult << endl;
    else
        cout << "Linear Search: Element not found" << endl;

    // Binary Search (requires sorted data)
    sort(data.begin(), data.end()); // Ensure data is sorted
    int binaryResult = binarySearch(data, target);
    if (binaryResult != -1)
        cout << "Binary Search: Element found at index " << binaryResult << endl;
    else
        cout << "Binary Search: Element not found" << endl;

    return 0;
}

