#include<bits/stdc++.h>
using namespace std;
 # define ll long long
void solve(ll k){
    ll low=1;
    ll high=2e18;
    ll n=0;
    while(low<=high){
        ll mid=(low+high)/2;
        ll sqroot=sqrt(mid);
        while(sqroot*sqroot > mid){
            sqroot--;
        }
        while((sqroot+1)*(sqroot+1)<=mid){
            sqroot++;
        }

        ll rem = mid - sqroot;
        if(rem>=k){
            n = mid;
            high = mid-1;
        }

        else{
            low=  mid+1;
        }
    }

    cout << n<<endl;
    return ;
    
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