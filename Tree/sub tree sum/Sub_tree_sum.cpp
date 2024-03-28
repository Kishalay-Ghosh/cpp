#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
int sub_tree_sum[N],even_count[N];

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
    if(vertex % 2 ==0)
    {
    even_count[vertex]++;
    }
    sub_tree_sum[vertex] += vertex;
    for(int child : g[vertex])
    {
                                 //             |
        //if(visited(child)) continue; //check the child is visited or not
        //take action on the child before entering the child node
        if(child == parent) continue;


        dfs(child,vertex);

        //take action on the child after exiting the child node
        sub_tree_sum[vertex] += sub_tree_sum[child];
        even_count[vertex] += even_count[child];

    }
    //take action on the vertex before exiting the vertex
}

int main()
{
    int node;
    cin>>node;
    tree_input(node);
    dfs(1);
    for(int i=1;i<=node;i++)
        cout<<sub_tree_sum[i]<<" "<<even_count[i]<<endl;
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

