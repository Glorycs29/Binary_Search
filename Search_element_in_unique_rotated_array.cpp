#include <bits/stdc++.h>
using namespace std;

// arr[] = {4, 5, 6, 7, 8, 9, 0, 1, 2, 3}
// let target = 4
// it is for unique elemets
// search & sorted --> always use binary search
 
// brute force
// linear search 

// optimal 
// binary search

int SearchInRotated(vector<int> &arr, int n, int low , int high, int target){
    if(low>high) return -1;
    while(low<=high){
        int mid = (high-low)/2 + low;
        // ideal case
        if(arr[mid] == target) return mid;
        if(arr[mid] >= arr[low]){
            if(arr[low] <= target && arr[mid] >= target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }else{
            if(arr[mid] <= target && arr[high] >= target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
    }
    return -1;
}


int main(){
    cout<<"Enter the size of rotated array : \n";
    int n; cin>>n;
    cout<<"Enter the elements of rotated array : \n";
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //int low=0, high=n-1, lb =n;
    cout<<"Enter the no. of testcases: \n";
    int testcases; cin>>testcases;
    while(testcases--){
    cout<<"Enter the target element : \n";
    int target; cin>>target;
    cout<<"The idx of "<<target<<" is: "<<SearchInRotated(v, n, 0, n-1, target);
    cout<<"\n";
    }
    cout<<"Sayonara!";
    return 0;
}
