#include<bits/stdc++.h>
using namespace std;
/*bool cmp(int a, int b){
 return a>b;
}*/
bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.first!=b.first)
        return a.first<b.first;
    return a.second>b.second;
}
int main()
{
    int n;
    cout<<"Enter the size of list :";
    cin>>n;
   /* vector <int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";*/
    vector<pair<int,int>> v;
     for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
        }

      sort(v.begin(),v.end(),cmp);
      for(int i=0;i<n;i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
        return 0;
}
