#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
int visited[N],level[N];

void tree_input(int node)
{

    for(int i=0;i<node-1;i++)
    {

        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
}

void bfs(int startNode)
{
    queue<int> q;
    q.push(startNode);
    visited[startNode] = 1;

cout<<"\nOrder of bfs is"<<endl;
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        for(int child : g[cur])
        {
            if(!visited[child])
            {
                q.push(child);
                visited[child] = 1;
                level[child] = level[cur] + 1;
            }
        }
        cout<<cur<<"=>";
    }
    cout<<"\n\n\n";
}




int main()
{
    int node;
    cin>>node;
    tree_input(node);
    bfs(1);
    cout<<"Level of node is...."<<endl;
    for(int i=1;i<=node;i++)
        cout<<i<<" =>"<<level[i]<<endl;
    return 0;
}

/*
input
13
1 2
1 3
1 13
2 5
3 4
5 6
5 7
5 8
8 12
4 9
4 10
10 11
*/
