#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,4,5};

    // max element
    auto ma=max_element(v.begin(),v.end());  //return the pointer of the max element
    cout<<"max element="<<*ma<<endl;

    // min element
    auto mi=min_element(v.begin(),v.end());  //return the pointer of the min element
    cout<<"min element="<<*mi<<endl;

    // count element
    auto c=count(v.begin(),v.end(),4);  //return the count of the given (here 4) element
    cout<<"count="<<c<<endl;

    //reverse
    reverse(v.begin(),v.end());
    for(int ele:v)
        cout<<ele<<" ";
    cout<<endl;
    //all_of --> it ture for all than true(1) other wise false(0)
    cout<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;

     //any_of --> it ture for any one element than true(1) other wise false(0)
     cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;

     //none_of --> it ture for all than false(0) other wise true(1)
     cout<<none_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
    return 0;
}
