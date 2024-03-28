#include<bits/stdc++.h>
using namespace std;

    //print maps valus
void print(map<int,string> &m)
{
    cout<<"Size="<<m.size()<<endl;
    for(auto &it :m)
        cout<<it.first<<" "<<it.second<<endl;
}
int main()
{
    //declare the map
map<int,string> m;

    //insert value in map
m[1]="abc";  //O(log(n)) --> n is the size of map
m[5]="cdc";
m[3]="acd";
m.insert({4,"afg"});
m.insert(make_pair(7,"akl"));
//print(m);

    //m.find() function--> O(log(n))
auto it=m.find(3);
if(it==m.end())
    cout<<"value is not exist in maps.."<<endl;
else
    cout<<it->first<<" "<<it->second<<endl;

    //m.erase() function-->O(log(n))
if(it !=m.end())
    m.erase(it);
print(m);

    //m.clear()
m.clear();
print(m);
}
