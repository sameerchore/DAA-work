#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key) {
    // Base case
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == key)
        return mid;

    if (key < arr[mid])
        return binarySearch(arr, low, mid - 1, key);

    return binarySearch(arr, mid + 1, high, key);
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int index = binarySearch(arr, 0, n - 1, key);

    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}