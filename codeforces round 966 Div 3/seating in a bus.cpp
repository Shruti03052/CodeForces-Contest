#include<bits/stdc++.h>
using namespace std;


string solve(vector<int> arr,int n){
  unordered_map<int,int> m;
  m[arr[0]]=1;
  for(int i=1;i<n;i++){
    if(m.find(arr[i]-1)==m.end() && m.find(arr[i]+1)==m.end()){
        return "no";



    }
    m[arr[i]]=1;
    
  }
  return "yes";



}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        string ans=solve(arr,n);
        cout<<ans<<endl;
    }

    return 0;
}