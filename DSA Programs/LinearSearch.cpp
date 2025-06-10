#include<iostream>
using namespace std;
void LinearSearch(int arr[], int n, int key) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element does not exist in the Array" << endl;
    }
}
int main() {
    int a[] = {1, 2, 3, 4, 5};
    int k = 5;
    int target = 4;
    LinearSearch(a, k, target);
}
