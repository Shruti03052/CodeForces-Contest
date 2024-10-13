#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> arr ,int n,int r){
    int ppl=accumulate(arr.begin(),arr.end(),0);
    int cnt=0;
    if(r*2 ==ppl){
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                cnt+=arr[i];
            }
            else{
                cnt+=arr[i]-1;
            }
        }
        cout<<cnt<<endl;
        return;
    }
    else{
        int extra=r*2 - ppl;
        if(r==ppl){
            cnt=ppl;
            cout<<cnt<<endl;
            return;
        }
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                cnt+=arr[i];
            }
            else{
                if(arr[i]==1){
                    if(extra>0){
                        extra--;
                        cnt+=1;
                    }
                }
                else{
                    cnt+=arr[i]-1;
                    if(extra>0){
                        extra--;
                        cnt+=1;
                    }
                }
            }

        }
        cout<<cnt<<endl;
        return;

    }
}
int main(){
    int t;
    cin >>t;
    while(t--){
        int n,r;
        cin>>n>>r;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(arr,n,r);
    }
    return 0;
}