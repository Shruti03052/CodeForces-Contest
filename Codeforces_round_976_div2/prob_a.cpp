#include<bits/stdc++.h>
using namespace std;
void solve(int n,int k){
    if(k==1){
        cout<<n<<endl;
        return;
    }
    if(k==n){
        cout<<1<<endl;
        return ;
    }
    else if(k>n){
        cout<<n<<endl;
        return;
    }
    else{
        // int cnt=0;
        // while(n){
        //     int exp=0;
        // while(pow(k,exp)<=n){
        //     exp+=1;
        // }
        // cnt+=1;
        // n=n-pow(k,exp-1);

        // }
         int cnt=0;
         while (n > 0) {
        // Add remainder when dividing by k (this handles non-zero digits in base k)
        cnt += n % k;

        // Reduce n by dividing it by k (move to the next power of k)
        n /= k;
         }
        cout<<cnt<<endl;
        return;
         
        

    
        
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        solve(n,k);
    }
    return 0;
}