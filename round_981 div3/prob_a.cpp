
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

//directions
int dy[4] = {-1,0,1,0};
int dx[4] = {0,-1,0,1};



//constants
#define MOD 1e9+7
#define PI 3.1415926535897932384626433832795



void solve(int n){
    if(n%2==1){
        cout<<"Kosuke"<<endl;
    }
    else{
        cout<<"Sakurako"<<endl;
    }

}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }
    return 0;
}






