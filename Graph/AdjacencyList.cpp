#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    //creating vector adjacency list of n size
    vector<int> adj[n+1];

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        //if graph undirected
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}
//time complexity -- O(n+m)


//another code for adjcency list
/*
#include<bits/stdc++.h>
using namespace std;

const int N = 1e3 +10;
int graph1[N][N];

vector<int> graph2[N];

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph1[v1][v2] = 1;
        graph1[v2][v1] = 1;

        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);
    }
    
}

*/

//if graph weighted
/*

#include<bits/stdc++.h>
using namespace std;

const int N = 1e3 +10;
int graph1[N][N];

vector<pair<int,int>> graph2[N];

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2,wt;
        graph1[v1][v2] = wt;
        graph1[v2][v1] = wt;

        graph2[v1].push_back({v2, wt});
        graph2[v2].push_back({v1, wt});
    }
    
}


*/

// benfit of adjacency list is that it can search the connection between edges in constant time,
//but space complexity is n^2 
