#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> &v)
{
cout<<"size="<<v.size()<<endl;
for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
cout<<endl;
}
int main()
{
    int t;
    cout<<"Enter the no of test cases : "<<endl;
    cin>>t;
    while(t--)
    {


    vector<int> v;
    cout<<"enter the no of element :";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    printVector(v);
    }
}
