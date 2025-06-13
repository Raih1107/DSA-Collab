#include <iostream>
using namespace std;

void twoSum(int nums[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                cout << "Indices: " << i << ", " << j << endl;
                return;
            }
        }
    }
    cout << "No solution found." << endl;
}