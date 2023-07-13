#include<bits/stdc++.h>
using namespace std;
//  special question
signed main(){
    int ts; cin>>ts;
    while(ts--){
        long long n, H;
        cin>>n>>H;
        vector<int> weapon(n,0);
        for(int i=0; i<n; i++){
            cin>>weapon[i];
        }
        long long count=0;
        sort(weapon.begin(), weapon.end(), greater<int>());
            long long wep1=weapon[0], wep2 = weapon[1];
            long long sum = wep1+wep2+0ll;
            if(H % (sum) == 0){
                cout<<2*(H/sum)<<"\n";
            }else if(H % (sum) <=wep1){
                cout<<(2*(H/sum) + 1)<<"\n"; 
            }else{
                cout<<((2*(H/sum)) + 2)<<"\n"; 
            }
    }
    return 0;
}