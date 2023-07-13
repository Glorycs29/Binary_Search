#include<bits/stdc++.h>
using namespace std;

signed main(){
    int t; cin>>t;
    while(t--){
        int n,s; cin>>n>>s;
        int remaning = (n/2)+1;
        cout<<(int)s/remaning<<"\n";
    }
    return 0;
}