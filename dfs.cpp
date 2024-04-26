/*
u->v  
0->1,2
1->2,3
2->
3->
adjecency list
time : O(vertices+edges);
unordered_map<int,vector<int>>adj

adj[0]={1,2}
adj[1]={2,3}
adj[2]={}
adj[3]={}

how to know- 1. suppose n courses are given and they are labelled from 0 to n-1
2. hinting to move up, down, left or right --edge


n=4 (vertices 0,1,2,3)
[[1,0],[2,0],[2,1],[3,1]]

u    v
1--->0
// Graph banao:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>adj;
        for(vector<int>&v: prerequisites){
            int v= v[1];  // to
            int u= v[0];  //from
            adj[u].push_back(v);   
        }
    }
// traversal of graph 


*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void DFS(unordered_map<int,vector<int>>&adj,int u,vector<bool>&visited,vector<int> &result){
        if(visited[u]==true){
            return;
        }
        
        visited[u]=true;
        result.push_back(u);
        for(int &v:adj[u]){
            if(!visited[v]){
                DFS(adj,v,visited,result);
            }
        }
    }
    
    
    
    vector<int> dfsOfGraph(int V, vector<int> mp[]) {
        // Code here
        unordered_map<int,vector<int>>adj;
        //make graph
        for(int u=0;u<V;u++){// V is no of vertex
        for(auto v=mp[u].begin();v!=mp[u].end();v++){
            adj[u].push_back(*v);
        }
        }
        vector<int> result;
        vector<bool>visited(V,false);
        DFS(adj,0, visited,result);
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends