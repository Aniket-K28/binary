#include<bits/stdc++.h>
using namespace std;
bool isPossible(int stalls[], int k, int mid, int n) {
    
    int cowCount = 1;
    int lastPos = stalls[0];
    
    for(int i=0; i<n; i++ ){
        
        if(stalls[i]-lastPos >= mid){
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(int stalls[], int k,int n)
{
    sort(stalls, stalls+n);
   	int s = 0;
    int e=stalls[n-1];
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e) {
        if(isPossible(stalls, k, mid, n)) {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
   int n = 5,k=3;
   int stalls[] = {4, 2, 1, 3, 6};
   cout<<"cow position : " << aggressiveCows(stalls,k,n);
}