
#include <bits/stdc++.h>
using namespace std;

// TYPES  
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vvi vector<vector<int> > 
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



void solve(vi arr,int n){
    
    if(n==1){
        cout<<0<<endl;
        return ;
    }
    int len=(n+1)/2;
    vvi dp(len,vi(2,0));
    dp[0][0]=0;
    dp[0][1]=0;
    for(int i=1;i<len;i++){
        
            dp[i][0]=min((dp[i-1][0]+(arr[i]==arr[i-1])+(arr[n-i]==arr[n-i-1])) , 
            dp[i-1][1]+(arr[i]==arr[n-i-1])+(arr[n-i]==arr[i-1]));

            dp[i][1]= min((dp[i-1][0]+(arr[n-i]==arr[i-1])+(arr[i]==arr[n-i-1])) , 
            dp[i-1][1]+(arr[n-i]==arr[n-i-1])+(arr[i]==arr[i-1]));
        
    }
    int ans=min(dp[len-1][0],dp[len-1][1]);
    if(n%2==0){
        ans+=(arr[n/2]==arr[n/2-1]);
    }
    cout<< ans<<endl;


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
        solve(arr,n);
    }
    return 0;
}






