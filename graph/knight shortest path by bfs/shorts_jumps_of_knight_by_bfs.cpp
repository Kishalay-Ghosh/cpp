#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
const int INF = 1e9+10;


int visited[8][8],level[8][8];

int getX(string s){
    return s[0] - 'a';
}

int getY(string s){
    return s[1]-'1';
}

void reset()
{
    for(int i =0;i<8;i++)
        for(int j=0;j<8;j++)
    {
        level[i][j] = INF;
        visited[i][j] = 0;
    }
}
bool isValid(int x, int y)
{
    return x>= 0 && y>=0 && x<8 && y<8;
}
vector<pair<int,int>> movements = {
    {2,1},{2,-1},
    {-2,-1},{-2,+1},
    {1,2},{-1,2},
    {-1,-2},{1,-2}
};
int bfs(string src, string dest)
{
    int srcX = getX(src);
    int srcY = getY(src);
    int destX = getX(dest);
    int destY = getY(dest);

    queue<pair<int,int>> q;
    q.push({srcX,srcY});
    visited[srcX][srcY] = 1;
    level[srcX][srcY] = 0;

    while(!q.empty()){
        pair<int,int> curVertex = q.front();
        q.pop();
        int x = curVertex.first;
        int y = curVertex.second;

        for(auto movement : movements)
        {
            int childX = movement.first + x;
            int childY = movement.second + y;

            if(!isValid(childX , childY)) continue;
            if(!visited[childX][childY])
            {
                q.push({childX,childY});
                level[childX][childY] = level[x][y] +1;
                visited[childX][childY] = 1;
            }

        }

        if(level[destX][destY] != INF)
            return level[destX][destY];


    }

    return level[destX][destY];

}




int main()
{
   int t; cin>>t;
   while(t--)
   {
       string src,dest; cin>>src>>dest;
       reset();
        int val = bfs(src,dest);
       cout<<val<<endl;
       reset();


   }
}

/*

Q.//there is a knight in chess board. the source and destination is given.
    find the shortest path to move to source to destination by the knight.
input
3
a1 h8
a1 c2
h8 c3

//output
6
1
4

*/

