// #include<bits/stdc++.h>
// using namespace std;
// int findWoodCount(int arr[],int n,int m,int mid){
//     int woodCount = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>mid){
//             woodCount = woodCount+(arr[i]-mid);
//         }
//     }
//     return woodCount;
    
// }
// int woodCount(int arr[],int n,int m){
//     int max  = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     int low = 0;
//     int high = max;
//     int mid = 0; 
//     while (low<=high)
//     {
//         int mid = low + (high-low)/2;
//         int  woodCount   = findWoodCount(arr,n,m,mid);
//         if(woodCount == m || low == m){
//             return m;
//         }else if(woodCount>m){
//             low = m;
//         }else
//         {
//             high = m;
//         }
        
//     }
//     return -1;
// }
// int main(){
//     int n = 4,m = 7;
//     int arr[] = {20,10,15,17};
//     cout<<woodCount(arr,n,m)<<endl;
//     return 0;
// }