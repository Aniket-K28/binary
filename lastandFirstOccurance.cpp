// #include<iostream>
// using namespace std;
// int first(int arr[],int n,int key){
//     int s = 0;
//     int e = n;
//     int ans = -1;
//     int mid = (s+e)/2;
//     while (s<=e)
//     {
        
//         if(arr[mid] == key){
//             ans = mid;
//             e = mid - 1;
//         }
//         else if(key > arr[mid]) {//Right me jao
//             s = mid + 1;
//         }
//         else if(key < arr[mid]) {//left me jao
//             e = mid - 1;
//         }

//         mid = s + (e-s)/2;
//     }
//     return ans;
// }
// int last(int arr[],int n,int key){
//     int s = 0;
//     int e = n;
//     int ans = -1;
//     int mid = (s+e)/2;
//     while (s<=e)
//     {
        
//         if(arr[mid] == key){
//             ans = mid;
//             s = mid + 1;
//         }
//         else if(key > arr[mid]) {//Right me jao
//             s = mid + 1;
//         }
//         else if(key < arr[mid]) {//left me jao
//             e = mid - 1;
//         }

//         mid = s + (e-s)/2;
//     }
//     return ans;
// }
// int main(){
//     int even[5] = {1,2,3,3,4};
//     cout<<"first occurance is "<<first(even,5,3)<<endl;
//     cout<<"last occurance is "<<last(even,5,3)<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;
int first(int arr[],int n,int key){
    int s = 0;
    int e = n;
    int ans = -1;
    int mid = (s+e)/2;
    while (s<=e)
    {
        
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}
int last(int arr[],int n,int key){
    int s = 0;
    int e = n;
    int ans = -1;
    int mid = (s+e)/2;
    while (s<=e)
    {
        
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    int even[5] = {1,2,6,7,4};
    int a = first(even,5,3);
    int b = last(even,5,3);
    int result;
    if(a==-1 && b==-1){
        result = 0;
    }else{
        result = (b - a) + 1;
    }
    cout << "Number of occurence is: " << result << endl;
    return 0;
}


