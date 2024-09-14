# include<bits/stdc++.h>
using namespace std;

void solve(int n,int m,int t1,int t2,int d_pos){
    int maxi=max(t1,t2);
    int mini=min(t1,t2);
    int mid=(t1+t2)/2;
    if(d_pos>maxi){
        
        cout<<n-maxi<<endl;
        return ;
    }
    else if(d_pos<mini){
        
        cout<<mini-1<<endl;
        return ;
    }
    else{
        cout<<min(abs(t1-mid),abs(t2-mid))<<endl;
        return;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n;
        cin>>m;
        cin>>q;
        int t1;
        int t2;
        int d_pos;
        cin>>t1;
        cin>>t2;
        cin>>d_pos;
        solve(n,m,t1,t2,d_pos);


    }

    return 0;
}