#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
bool visited[N];
vector<int> current_cc;
vector<vector<int>> cc;

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
void dfs(int vertex)
{
    //take action on the vertex after entering the vertex

    if(visited[vertex]) return;  //check the vertex is visited or not
    visited[vertex] = true;       //             ^
    current_cc.push_back(vertex); //             |
    for(int child : g[vertex])   //         same thing
    {
                                 //             |
        //if(visited(child)) continue; //check the child is visited or not
        //take action on the child before entering the child node


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

    //check connected components
    int count_connected_components = 0;
    for(int i=1;i<=v;i++)
    {
        if(visited[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
        count_connected_components++;
    }
    cout<<"Total Connected component are-->"<<count_connected_components<<endl;
    cout<<"The Connected components are -->"<<endl;
    for(auto c_cc :cc )
    {
        for(int node : c_cc)
            cout<<node<<" ";
        cout<<endl;
    }

    return 0;
}

/*
input-->
8 5
1 2
2 3
2 4
3 5
6 7
output-->
Total Connected component are-->3
*/
