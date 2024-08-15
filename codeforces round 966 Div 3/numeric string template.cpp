#include<bits/stdc++.h>
using namespace std;


string solve(int n,vector<int> &arr,string &str){
    int size=str.size();
    if(n!=size){
        return "no";
    }
    
        unordered_map<int,char> m1;
        unordered_map<char,int> m2;
     
        
        for(int i=0;i<n;i++){
           if(m1.find(arr[i])!=m1.end()){
             if(m1[arr[i]]!=str[i]){
                
               return "no";

             }

           }
           else{
             m1[arr[i]]=str[i];

           }
            

           if(m2.find(str[i])!=m2.end()){
             if(m2[str[i]]!=arr[i]){
                return "no";
            }
          

           }
           else{
              m2[str[i]]=arr[i];
           
           }

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
        int m;
        cin>>m;
        
        for(int i=0;i<m;i++){
            string str;
            cin>>str;
            cout<<solve(n,arr,str)<<endl;
        }



    }

    return 0;

}