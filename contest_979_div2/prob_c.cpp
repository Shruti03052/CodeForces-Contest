
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



void solve(int n,string str){

    bool cons=false;
    for(int i=1;i<n;i++){
        if(str[i]=='1' && str[i-1]=='1'){
            cons=true;
            break;
        }

    }
    if(cons==true){
        cout<<"yes"<<endl;
        return;
    }
    
    
    if(str[0]=='1' || str[n-1]=='1' ){
            cout<<"yes"<<endl;
            return;
        }
       
        
    cout<<"no"<<endl;
    return;
        

    

}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        solve(n,str);
    }
    return 0;
}






