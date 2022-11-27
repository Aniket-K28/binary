#include <bits/stdc++.h>
using namespace std;
bool ispossible(int rank[],int n, int m,int mid){
   int time =0;
   int dish=0;
   for(int i=0;i<n;i++){
       for(int j=1;j<=m;j++){
           time+=rank[i]*j;
           if(time<=mid){
               dish++;
               if(dish==m){
                   return true;
               }
           }
       }
       time=0;
   }
   return false;
   
}
int minCookTime(int rank[], int n,int m)
{
   int s=0;
   int e=1e8;
   int ans=-1;
   int mid=s+(e-s)/2;
   while(s<=e){
       if(ispossible(rank,n,m,mid)){
           ans=mid;
           e=mid-1;
       }
       else{
           s=mid+1;
       }
       mid=s+(e-s)/2;
   }
   return ans;
}
int main()
{
    int n = 4, m = 11;
    int rank[] = {1, 2, 3, 4};
    cout<<" "<<minCookTime(rank,n,m)<<endl;
    return 0;
}