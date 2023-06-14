#include<bits/stdc++.h>
using namespace std;

int BS(int n, vector<int> &v, int target, int low, int high, int lb){
    
    if(low > high){
        return lb;
    }
    int mid = low + (high-low)/2;
    if(v[mid] >= target){
        lb = mid;
        return BS(n, v, target, low, mid-1, lb);
        //return mid;

    }else{
        return BS(n, v, target, mid+1, high, lb);
    }
    return -1;
}


int main(){
    cout<<"Enter the size of Sorted array : \n";
    int n; cin>>n;
    cout<<"Enter the elements of Sorted array : \n";
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //int low=0, high=n-1, lb =n;
    cout<<"Enter the target element : \n";
    int target; cin>>target;
    cout<<"The lower_bound of "<<target<<"is: "<<BS(n, v, target, 0, n-1, -1);
    return 0;
}