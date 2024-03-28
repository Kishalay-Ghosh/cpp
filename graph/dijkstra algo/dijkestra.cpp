#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
const int INF = 1e9+7;

vector<pair<int,int>> g[N];

vector<int> visited(N,0);
vector<int> dist(N,INF);

void graph_input(int edge)
{

    for(int i=0;i<edge;i++)
    {

        int v1,v2,wt;
        cin>>v1>>v2>>wt;
        g[v1].push_back({v2,wt});
        //g[v2].push_back(v1);
    }
}

void dijkstra(int source)
{
   //vector<int> visited(N,0);
   //vector<int> dist(N,INF);

   set<pair<int,int>> st;  //use as a priority queue ..> it is actually a set

   st.insert({0,source});
   dist[source] = 0;

   while(st.size() > 0)
   {
       auto node = *st.begin();  //get the pair val of set first address
       int v = node.second;
       int distance = node.first;
       st.erase(st.begin());

       if(visited[v]) continue;
       visited[v] = 1;

       for(auto child : g[v])
       {
           int child_v = child.first;
           int wt = child.second;

           if(dist[v] + wt < dist[child_v])
           {
               dist[child_v] = dist[v] + wt;
               st.insert({dist[child_v], child_v});
           }
       }
   }

}




int main()
{
    int node,edge;
    cin>>node>>edge;
    graph_input(edge);
    dijkstra(1);
    cout<<"short distance from source node is...."<<endl;
    for(int i=1;i<=node;i++)
        cout<<i<<" =>"<<dist[i]<<endl;
    return 0;
}

/*
input
6 9
1 2 1
1 3 5
2 3 2
2 4 2
2 5 1
3 5 2
4 5 3
4 6 1
5 6 2

output...>
distance of node is....
1 =>0
2 =>1
3 =>3
4 =>3
5 =>2
6 =>4

note:
dijkstra is used when source is single and it's find the shortest distance from source.

time complexity -> normally     O(V^2)  -->when priority queue is used
                   in this case O(V + E*log(V) ) -->set used
*/

