// #include<vector>
// using namespace std;

// int getPivot(vector<int>& arr, int n) {

//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;

//     while(s<e) {

//         if(arr[mid] >= arr[0])
//         {
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }

// int binarySearch(vector<int>& arr, int s, int e, int key) {

//     int start = s;
//     int end = e;

//     int mid = start + (end-start)/2;

//     while(start <= end) {

//         if(arr[mid] == key) {
//             return mid;
//         }

//         //go to right wala part
//         if(key > arr[mid]) {
//             start = mid + 1;
//         }
//         else{ //key < arr[mid]
//             end = mid - 1;
//         }

//         mid = start + (end-start)/2;
//     }
    
//     return -1;
// }



// int findPosition(vector<int>& arr, int n, int k)
// {
//     int pivot = getPivot(arr, n);
//     if( k >= arr[pivot] && k <= arr[n-1])
//     {//BS on second line
//         return binarySearch(arr, pivot, n-1, k);
//     }
//     else
//     {//BS on first line
//         return binarySearch(arr, 0, pivot - 1, k);
//     }
    
// }
#include<iostream>
using namespace std;
int search(int arr[],int key,int s,int e){
   if(s>e){
      return -1;
   }
   int mid = s+(e-s)/2;
   if(arr[mid]==key){
      return mid;
   }
   if(arr[s]<=arr[mid]){
      if(key>=s && key<=arr[mid]){
          return search(arr,key,s,mid-1);
      }
      return search(arr,key,e,mid+1);
   }
   if(key>=arr[mid] && key<=arr[e]){
       return search(arr,key,mid+1,e);
   }
   return search(arr,key,s,mid-1);

}
int main(){
    int arr[] ={9,10,15,1,2};
    int n = 5;
    int key = 10;
    
    int i = search(arr,key,0,n-1);
    if(i == -1){
        cout<<"does't exits"<<endl;
    }else{
        cout<<"key is present "<<i<<endl;
    }

    return 0;
}