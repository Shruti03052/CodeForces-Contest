
#include <bits/stdc++.h>
using namespace std;

// TYPES  
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
// functions
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

int dy[4] = {-1,0,1,0};
int dx[4] = {0,-1,0,1};



/* UTILS */
#define MOD 1e9+7
#define PI 3.1415926535897932384626433832795



void solve(ll n){

    string str="";
    if(n==1){
        cout<<"0"<<endl;
        return;
    }
    ll mid=n/2;
    for(int i=0;i<n;i++){
        if(i==mid){
            str+='1';
        }
        else{
            str+='0';
        }
    }
    cout<<str<<endl;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        solve(n);
    }
    return 0;
}






