#include<bits/stdc++.h>
using namespace std;
void print(queue<pair<string,int>> &q)
{
    while(!q.empty()) {//return if the stack is empty(1) or not(0)
        cout<<q.front().first<<" "<<q.front().second<<endl; //front() function return the front element from queue
        q.pop();    //pop() function remove the rear most element from the queue
    }
}

int main()
{
    queue<pair<string,int>> q;
    while(true)
    {
        int n;
        cout<<"press 0 for continue : ";
        cin>>n;
        if(n)
            break;
        else
        {
            string name;
            int marks;
            cin>>name>>marks;
            q.push({name,marks});
        }

    }
print(q);
}

