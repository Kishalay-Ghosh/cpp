#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int graph[N][N];
vector<pair<int,int>> graph_adj_list[N];

int main()
{
    int v,e;
    cout<<"Enter the no of vertex and edgs :";

    cin>>v>>e;


    cout<<"\nPlease enter the graph"<<endl;
    for(int i=0;i<e;i++)
    {
        int v1,v2,wt;
        cin>>v1>>v2>>wt;
        //adjacency matrix representation-->  space complexity O(v^2)
        graph[v1][v2]=wt;
        graph[v2][v1]=wt;

        //adjacency list representation  --> space complexity O(v+e)
        graph_adj_list[v1].push_back({v2,wt});
        graph_adj_list[v2].push_back({v1,wt});
    }

    //print adj_matrix
    cout<<"\nThe matrix representation is-->"<<endl;
    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nThe list representation is-->"<<endl;

    for(int i=1;i<=v;i++)
    {
        cout<<i<<"--> ";
        for(pair<int,int> child : graph_adj_list[i])
        {
            cout<<"("<<child.first<<","<<child.second<<") |";
        }
        cout<<endl;
    }
    return 0;
}

/*
vertex 6, edge 9

1 3 4
1 5 3
3 5 2
3 4 7
3 6 8
3 2 9
2 6 1
4 6 2
5 6 3
*/
