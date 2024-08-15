#include<bits/stdc++.h>
using namespace std;

vector<string>  solve(int n,vector<int> &arr){
    vector<string> ans(n);
    for(int i=0;i<n;i++){
        string str=to_string(arr[i]);
        
        if(str.size() >2){
            if(stoi(str.substr(0,2))!=10){
            ans[i]="no";
            continue;
        }
            string substrr=str.substr(2);
            if(substrr[0]=='0'){
                ans[i]="no";
                continue;

            }
            int num=stoi(substrr);
            if(num>=2){
                ans[i]="yes";
            }
            else{
                ans[i]="no";
            }
        }
        else{
            ans[i]="no";
        }
    }
    return ans;
}
 int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<string> res=solve(n,arr);
    for(int i=0;i<n;i++){
        cout<<res[i]<<endl;
    }
    return 0;
 }