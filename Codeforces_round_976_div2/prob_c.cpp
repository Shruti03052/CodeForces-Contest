#include<bits/stdc++.h>
using namespace std;

string decToBin(long long int num){
    string str="";
    while(num){
        if(num &1){
            str+='1';
        }
        else{
            str+='0';
        }
        num=num>>1;
    }
    if (str == "") str = "0";
    reverse(str.begin(),str.end());
    return str;
}
void solve(long long int b,long long int c,long long int d){
    string str_b=decToBin(b);
    string str_c=decToBin(c);
    string str_d=decToBin(d);
    string ans="";
    long long int maxi= max(str_b.size(),max(str_c.size(),str_d.size()));
    str_b = string(maxi - str_b.size(), '0') + str_b;
    str_c = string(maxi - str_c.size(), '0') + str_c;
    str_d = string(maxi - str_d.size(), '0') + str_d;
    for(long long int i=0;i<maxi;i++){
        if(str_d[i]=='0'){
            if((str_b[i]=='0' && str_c[i]=='1') ){
                ans+="0";
            }
            else if(str_b[i]=='0' && str_c[i]=='0'){
                ans+="0";

            }
            else if(str_b[i]=='1' && str_c[i]=='1'){
                ans+="1";

            }
            else{
                cout<<-1<<endl;
                return ;
            }
        }
        else if(str_d[i]=='1'){
             if((str_b[i]=='1' && str_c[i]=='0') ){
                ans+="0";
            }
            else if(str_b[i]=='0' && str_c[i]=='0'){
                ans+="1";

            }
            else if(str_b[i]=='1' && str_c[i]=='1'){
                ans+="0";

            }
            else{
                cout<<-1<<endl;
                return ;
            }

        }
    }
    if(ans.size()!=0){
        long long int res=stoll(ans,nullptr,2);
        cout<<res<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    


}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int b,c,d;
        cin>>b>>c>>d;
        solve(b,c,d);
    }
    return 0;

}