#include<bits/stdc++.h>
using namespace std;
bool isPossible(int arr[],int n,int m,int mid){
        int painter = 1;
        int paintSum = 0;
        for (int i = 0; i < n; i++)
        {
            if(paintSum + arr[i]<=mid){
                paintSum +=arr[i];
            }else{
                painter++;
                if(painter>m || arr[i]>mid){
                    return false;
                }
            }
        }
        return true;
        
}
int painterAllocation(int arr[],int n,int m){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int start = 0;
    int end = sum;
    int ans = -1;
    while (start<=end)
    {
        int mid = start+(end-start)/2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        }else
        {
            start = mid  + 1;
        }
        
    }
    return ans;
}
int main (){
int n = 4,m =2;
int arr[] = {5,5,5,5};
cout<<"the partion of painter : "<<painterAllocation(arr,n,m)<<endl;
}