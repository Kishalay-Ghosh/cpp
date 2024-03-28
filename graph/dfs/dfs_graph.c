#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
bool visited[N];

void graph_input(int v,int e)
{

    for(int i=0;i<e;i++)
    {

        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back[v2];
        g[v2].push_back[v1];
    }
}
void dfs(int vertex)
{
    //take action on the vertex after entering the vertex
    cout<<vertex<<endl;
    if(visited[vertex]) return;  //check the vertex is visited or not
    visited[vertex] = true       //             ^
                                 //             |
    for(int child : g[vertex])   //         same thing
    {
                                 //             |
        //if(visited(child)) continue; //check the child is visited or not
        //take action on the child before entering the child node

        cout<<"parent:"<<vertex<<" child:"<<child<<endl;
        dfs(child);

        //take action on the child after exiting the child node


    }
    //take action on the vertex before exiting the vertex
}

int main()
{
    int v,e;
    cin>>v>>e;
    graph_input(v,e);

    return 0;
}
