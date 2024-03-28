#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
bool visit_find_max_depth_func = false;
vector<int> g[N];
int depth[N];

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


        //take action on the child before entering the child node
        if(child == parent) continue;
        depth[child] = depth[vertex]+1;

        dfs(child,vertex);

        //take action on the child after exiting the child node


    }
    //take action on the vertex before exiting the vertex
}

int find_max_depth(int sizeOfTree)
{
    int maxDepth=-1;
    int max_depth_node;
    for(int i=1;i<=sizeOfTree;i++)
    {
        if(depth[i]>maxDepth)
        {
            maxDepth = depth[i];
            max_depth_node = i;
        }
        depth[i] = 0; //reassign the depth array to zero for further used
    }
    if(visit_find_max_depth_func)
        return maxDepth;
    return max_depth_node;
}

int main()
{
    int node;
    cin>>node;
    tree_input(node);
    dfs(1);
    int max_node = find_max_depth(node);  //find the max depth from rootnode
    visit_find_max_depth_func = true;
    dfs(max_node);                         //make the max depth node as root node
    cout<<"the diameter of the tree is :"<<find_max_depth(node)<<endl;  //get the diameter of the tree

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


