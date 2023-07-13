#include<bits/stdc++.h>
using namespace std;

signed main(){
    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        long long max_team = (a+b)*1ll/4;
        long long min_team = min(a,b);
        long long ans = min(max_team, min_team);
        cout<<ans<<"\n";

    }
}