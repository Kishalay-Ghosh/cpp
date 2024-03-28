#include<bits/stdc++.h>
using namespace std;
void print(stack<char> &s)
{
    while(!s.empty()) {//return if the stack is empty(1) or not(0)
        cout<<s.top()<<endl; //top() function return the top elemrnt
        s.pop();    //pop() function remove the top most element from the stack
    }
}
unordered_map<char,int> m={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
string isBlance(string str)
{
    stack<char> s;
    for(auto bracket : str)
    {
        if(m[bracket]<0)
            s.push(bracket);
        else{
            if(s.empty())
                return "NO";
            char top=s.top();
            s.pop();
            if(m[top]+m[bracket]!=0)
                return "NO";
        }
    }
    //print(s);
    cout<<s.empty()<<endl;
    if(!s.empty())
        return "NO";
    return"YES";
}

int main()
{
    int t;
    cout<<"Enter the test cases :";
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;

        cout<<isBlance(str)<<endl;
    }
}
