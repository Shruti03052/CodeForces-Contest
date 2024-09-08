#include<bits/stdc++.h>
using namespace std;
void solve(int l,int r){
    int ele=r-l;
    int res=(ele+2)/4;
    cout<<res<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        if(l%2==0){
            l++;
        }
        solve(l,r);
    }
    return 0;
}