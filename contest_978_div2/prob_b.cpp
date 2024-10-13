#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(vector<ll> &arr,ll n,ll x){
    ll maxi=*max_element(arr.begin(),arr.end());
    ll tot=accumulate(arr.begin(),arr.end(),0LL);
    ll ele=ceil(double(tot)/x);

    ll ans= max(maxi,ele);
    cout<<ans<<endl;

}




int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(arr,n,x);
    }
}