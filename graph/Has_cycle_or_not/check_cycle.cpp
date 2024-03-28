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
        g[v1].push_back(v2);
        g[v2].push_back(v1);
}
}
bool dfs(int vertex, int parrent)
{
    bool isLoopExists = false;
    //take action on the vertex after entering the vertex

    //if(visited[vertex]) return;  //check the vertex is visited or not
    visited[vertex] = true;       //             ^
                                  //             |
    for(int child : g[vertex])   //         same thing
    {
        if(visited[child] && child== parrent)continue;//  |
        if(visited[child]) return true; //check the child is visited or not
        //take action on the child before entering the child node


        isLoopExists |= dfs(child,vertex);  //  '|=' this is or equal to

        //take action on the child after exiting the child node


    }
    //take action on the vertex before exiting the vertex
    return isLoopExists;
}

int main()
{
    int v,e;
    cin>>v>>e;
    graph_input(v,e);

    //check cycle is present or not

    bool isLoopExists = false;
    for(int i=1;i<=v;i++)
    {
        if(visited[i]) continue;

        if(dfs(i,0))
        {
            isLoopExists = true;
            break;
        }



    }
    (isLoopExists) ? cout<<"Cycle is present in the graph"<<endl : cout<<"Cycle is not present in the graph"<<endl;


    return 0;
}

/*
input-->
8 6
1 2
2 3
2 4
3 5
6 7
1 5
output-->
Total Connected component are-->3
*/
