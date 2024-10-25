
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



void solve(int n,vi arr){
    int ans = 0;
    vector<int>  vis(n, 0);
    

    f(i,0,n){
        if(!vis[i]){
            
            int j = i;
            int l = 0;

            while(!vis[j]){
                vis[j] = 1;
                j = arr[j]-1;
                l+=1;
            }

            if(l>=3){
                ans+=(l-1)/2;
            }
        }
    }
    cout<<ans<<endl;

 

}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vi arr(n);
        f(i,0,n){
            cin>>arr[i];
        }
        solve(n,arr);
    }
    return 0;
}






