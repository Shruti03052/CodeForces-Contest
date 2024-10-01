#include<bits/stdc++.h>
using namespace std;
 # define ll long long
void solve(ll k){
   ll low=1;
   ll high=4e18;
   ll ans=4e18;
   while(low<=high){
    ll mid=(low+high)/2;
    ll on_bulbs=mid-(int) sqrt(mid);
    if(on_bulbs==k){
        ans=min(ans,mid);
        high=mid-1;
    }
    else if(on_bulbs>k){
        high=mid-1;
    }
    else if(on_bulbs<k){
        low=mid+1;

    }
    
   }
   cout<<ans<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        solve(k);
    }
    return 0;
}