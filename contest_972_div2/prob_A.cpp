#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    string str="aeiou";
    string ans="";
    for(int i=0;i<5;i++){
        for(int j=0;j<n/5 + (i<n%5); j++){
            ans+=str[i];
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }
    return 0;
}
