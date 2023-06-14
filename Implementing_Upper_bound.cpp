#include<bits/stdc++.h>
using namespace std;

int BS(int n, vector<int> &v, int target, int low, int high, int ub){
    
    if(low > high){
        return ub;
    }
    int mid = low + (high-low)/2;
    if(v[mid] <= target){
        //ub = mid;
        return BS(n, v, target, mid+1, high, ub);
    }else{
        ub = v[mid];
        return BS(n, v, target, low, mid-1, ub);
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
    cout<<"No. of testcases: \n";
    int testcases; cin>>testcases;
    while(testcases--){
    cout<<"Enter the target element : \n";
    int target; cin>>target;
    cout<<"The upper_bound of "<<target<<" is: "<<BS(n, v, target, 0, n-1, -1);
    cout<<"\n";
    }
    return 0;
}