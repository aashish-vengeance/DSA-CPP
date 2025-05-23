#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int spanningTree(int V, vector<vector<int>> adj[]) {
    // code here
    vector<int>vis(V,0);
    priority_queue<pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>>pq;
    pq.push({0,0});
    
    int sum=0;
    while(!pq.empty()){
        int node = pq.top().second;
        int wt= pq.top().first;
        pq.pop();
        if(vis[node]==1)continue;
        
        vis[node]=1;
                sum=sum+wt;
        for(auto it:adj[node]){
                int adjNode=it[0];
                int edgeWt=it[1];
            if(!vis[adjNode] ){
                pq.push({edgeWt,adjNode});
            }
        }
        
    }
    return sum;
}

int main(){
return 0;
}