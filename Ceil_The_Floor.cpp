#include<bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	sort(arr, arr+n);
	int ceil=-1, floor=-1;
	int low=0,high=n-1;
	while(low<=high){
		int mid = low + (high-low)/2;
		if(arr[mid]==x)
                  return {arr[mid], arr[mid]};
		else if(arr[mid]<x){
			floor=arr[mid];
			low=mid+1;
		}
		else {
		ceil = arr[mid];
		high = mid - 1;
		}
	}
	return {floor,ceil};		
}

int main(){
    int n; cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target; cin>>target;
    cout<<getFloorAndCeil(arr,n,target);
    return 0;
}