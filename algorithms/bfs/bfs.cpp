#include <bits/stdc++.h>
using namespace std;

vector <int> adj[100];
int visited[100];


void bfs(int s, int n){
    for(int i=0; i<n ; ++i) visited[i]=0;
    queue <int> Q;
    Q.push(s);
    visited[s]=1;
    cout<<s;

    while(!Q.empty()){
        int temp= Q.front();
        Q.pop();

        for(int i=0; i<adj[temp].size(); ++i){
            int u= adj[temp][i];
            if(!visited[u]){

                Q.push(u);
                visited[u]=1;
                cout<<"-->"<<u;
            }
        }
    }

}

int main(){
    int edges, vertices, source, a, b;
    cin >> vertices >> edges;

    for (int i=0; i<edges; ++i){
        cin>> a>>b;
        if(i==0){
            source= a;
        }
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bfs(source, vertices);
}


//inputs
/*
6 7
6 4
4 5
5 1
1 2
5 2
2 3
3 4
*/
