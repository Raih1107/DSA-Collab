// TC --> O(logN) and SC --> O(1)

#include <bits/stdc++.h>
using namespace std;


int peakIndexInMountainArray(vector<int>& arr) {
	int l = 0;
	int h = arr.size() - 1;
	int mid;
	while(l <= h){
		mid = l + (h - l)/2;
		if(arr[mid] > arr[mid -1] && arr[mid] > arr[mid+1]) return mid;
		if(arr[mid] < arr[mid+1]) l = mid;
		if(arr[mid] < arr[mid - 1]) h = mid;
	}
	return -1;


}

int main(){
	vector<int> arr = {3,5,3,2,0};
	cout << peakIndexInMountainArray(arr) << endl;
	return 0;

}
