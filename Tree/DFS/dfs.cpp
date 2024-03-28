#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
int depth[N],height[N];

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
void dfs(int vertex,int parent = 0)
{
    //take action on the vertex after entering the vertex

    for(int child : g[vertex])
    {
                                 //             |
        //if(visited(child)) continue; //check the child is visited or not
        //take action on the child before entering the child node
        if(child == parent) continue;

        depth[child] = depth[vertex]+1;
        dfs(child,vertex);
        height[vertex] = max(height[vertex],height[child]+1);
        //take action on the child after exiting the child node


    }
    //take action on the vertex before exiting the vertex
}

int main()
{
    int node;
    cin>>node;
    tree_input(node);
    dfs(1);
    for(int i=1;i<node;i++)
        cout<<depth[i]<<" "<<height[i]<<endl;
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
