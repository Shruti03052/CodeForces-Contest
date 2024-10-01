#include<bits/stdc++.h>
using namespace std;
class DisjointSet {
    vector<int> rank, parent, size;
public:
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findPar(parent[node]);
    }

    void unionByRank(int u, int v) {
        int ulp_u = findPar(u);
        int ulp_v = findPar(v);
        if (ulp_u == ulp_v) return;
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionbySize(int u, int v) {
        int ulp_u = findPar(u);
        int ulp_v = findPar(v);
        if (ulp_u == ulp_v) return;
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        DisjointSet ds(n);
        
        for(int i=0;i<m;i++){
            int a,d,k;
            cin>>a>>d>>k;
            int last_ele=a+d*k;
            for(int j=0;j<k;j++){
                int curr_ele=a+j*d;
                ds.unionbySize(curr_ele,curr_ele+d);

            }
            ds.unionbySize(a,last_ele);

        }
        int comp=0;
        vector<bool>se(n+1,false);
        for(int i=1;i<=n;i++){
            if(!se[ds.findPar(i)]){
                comp++;
                se[ds.findPar(i)]=true;
            }
        }
        cout<<comp<<endl;
    }
}