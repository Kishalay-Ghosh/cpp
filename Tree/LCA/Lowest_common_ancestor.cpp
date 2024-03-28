#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
int parent_arr[N];

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
void dfs(int vertex,int parent = -1)
{
    //take action on the vertex after entering the vertex
    parent_arr[vertex] = parent;

    for(int child : g[vertex])
    {


        //take action on the child before entering the child node

        if(child == parent) continue;
        dfs(child,vertex);
        //take action on the child after exiting the child node


    }
    //take action on the vertex before exiting the vertex
}

//give the path of any node of a tree till root
vector<int> path(int node)
{
    vector<int> ans;
    while(node !=-1)
    {
        ans.push_back(node);
        node = parent_arr[node];

    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int lca(int first_node, int second_node)
{
    vector<int> first_node_path = path(first_node);
    vector<int> second_node_path = path(second_node);
    int min_len = min(first_node_path.size(),second_node_path.size());

    int lca_node;
    for(int i=0;i<min_len;i++)
    {
        if(first_node_path[i] == second_node_path[i])
            lca_node = first_node_path[i];
        else
            break;
    }
    return lca_node;
}

int main()
{
    int node,a,b;
    cin>>node;
    tree_input(node);
    dfs(1);
    cout<<"\nEnter the two node:";
    cin>>a>>b;
    cout<<"The lowest common ancestor of "<<a<<" and "<<b<<" is--->"<<lca(a,b);
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
