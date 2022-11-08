// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
//     public:
//     int binarySearch(vector<int> &nums, int target) {
//         int low = 0, high = nums.size();
//         while (low < high) {
//             int mid = low + (high - low) / 2;
//             if (nums[mid] > target)
//                 high = mid;
//             else
//                 low = mid + 1;
//         }
//         return low;
//     }
//     vector<int> searchRange(vector<int> &nums, int target) {
//         int p2 = binarySearch(nums, target);
//         int p1 = binarySearch(nums, target - 1);
//         if (p1 == p2 )  // That means element is not present hence return [-1,-1]
//             return {-1, -1};
//         return {p1, p2-1}; //element is present 
//     }
// };

// int main() {
//         Solution sol;
//         vector<int> nums = {5,7,7,8,8,10};
//         int target = 8;
//         vector<int> result = sol.searchRange(nums, target);
//         for(int x : result){
//             cout << x << " ";
//         }
//         return 0;
//  } 

// #include<iostream>
// using namespace std;

// int firstOccurence(int arr[], int size, int key) {
//     int start = 0;
//     int end = size - 1;

//     int mid = start + (end - start)/2;
//     int ans = -1;

//     while (start <= end) {
//         if (key == arr[mid]) {
//             ans = mid;
//             end = mid - 1;
//         } 
//         else if (key > arr[mid]) {
//             start = mid + 1;
//         }
//         else if (key < arr[mid]) {
//             end = mid - 1;
//         }
//         mid = start + (end - start)/2;
//     }
//     return ans;
// }

// int lastOccurence(int arr[], int size, int key) {
//     int start = 0;
//     int end = size - 1;

//     int mid = start + (end - start)/2;
//     int ans = -1;

//     while (start <= end) {
//         if (key == arr[mid]) {
//             ans = mid;
//             start = mid + 1;
//         } 
//         else if (key > arr[mid]) {
//             start = mid + 1;
//         }
//         else if (key < arr[mid]) {
//             end = mid - 1;
//         }
//         mid = start + (end - start)/2;
//     }
//     return ans;
// }

// int main() {
//     int arr[10] = {4, 4, 8, 8, 8, 15, 16, 23, 23, 42};

//     int first = firstOccurence(arr, 10, 8);
//     int last = lastOccurence(arr, 10, 8);
//     int result;
//     if (first == -1 && last == -1){
//         result = 0;
//     } else {
//     result = (last - first) + 1;
//     }
//     cout << "Number of occurence is: " << result << endl;
// }

#include<iostream>
using namespace std;
int peackElement(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = (s + e)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }else{
            e = mid;
        }
    }
    return s;
}
int main(){
    int arr[6] = {2,3,5,6,7};
    cout<<"peak of element"<<peackElement(arr,6);
    return 0;
}