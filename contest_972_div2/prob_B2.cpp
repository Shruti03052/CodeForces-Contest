#include<bits/stdc++.h>
using namespace std;


void solve(int n,int m,int q,vector<int> t_pos,vector<int> d_pos){
    int maxi=INT_MIN;
    int mini=INT_MAX;
    sort(t_pos.begin(),t_pos.end());
    for(int i=0;i<m;i++){
        maxi=max(maxi,t_pos[i]);
        mini=min(mini,t_pos[i]);
    }
    for(int i=0;i<q;i++){
        if(d_pos[i]>maxi){
            cout<<n-maxi<<endl;
        }
        else if(d_pos[i]<mini){
            cout<<mini-1<<endl;
        }
        else{
            
            int upper_idx=upper_bound(t_pos.begin(),t_pos.end(),d_pos[i])-t_pos.begin();
            int upper=t_pos[upper_idx];
            int lower_idx=upper_idx-1;
            int lower=t_pos[lower_idx];
            
            int mid=(upper+lower)/2;
            cout<<min(abs(upper-mid),abs(mid-lower))<<endl;
            

        }
    }
}
int main(){
     int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;
        vector<int> t_pos(m);
        vector<int> d_pos(q);
        for(int i=0;i<m;i++){
            cin>>t_pos[i];
        }
        for(int i=0;i<q;i++){
            cin>>d_pos[i];
        }
        solve(n,m,q,t_pos,d_pos);

    }
   
    return 0;
}