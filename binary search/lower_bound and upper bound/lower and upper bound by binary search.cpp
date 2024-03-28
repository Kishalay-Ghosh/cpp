#include<bits/stdc++.h>
using namespace std;
int upperBound(vector<int> v,int ele)
{
    int l=0,h=v.size()-1,mid;
    while(h-l>1)
    {
        mid=(l+h)/2;
        if(v[mid]<=ele)
            l=mid+1;
        else
            h=mid;
    }
    if(v[l]>ele)
        return l;
    if(v[h]>ele)
        return h;
    return -1;
}
int lowerBound(vector<int> v,int ele)
{
    int l=0,h=v.size()-1,mid;
    while(h-l>1)
    {
        mid=(l+h)/2;
        if(v[mid]<ele)
            l=mid+1;
        else
            h=mid;
    }
    if(v[l]>=ele)
        return l;
    if(v[h]>=ele)
        return h;
    return -1;
}
int main()
{
    int n,ele;
    cout<<"Enter the size of the list :";
    cin>>n;

    vector <int> v(n);
    cout<<"\nEnter the sorted list for binary search ....> :\n";
    for(int i=0;i<n;i++)
        cin>>v[i];
    cout<<"\nEnter the element which you want to search  :";
    cin>>ele;
    //int option;
    //cout<<"\nPress 0 for lower bound , 1 for upper bound :";
    //cin>>option;


            //lower bound
        int index_lowerBound=lowerBound(v,ele);
        if(index_lowerBound==-1)
            cout<<"\nLower bound not present.....";
        else
            cout<<"\nLower bound of "<<ele<<" is...>"<<v[index_lowerBound];

            //upper bound
        int index_upperBound=upperBound(v,ele);
        if(index_upperBound==-1)
            cout<<"\nUpper bound not present.....";
        else
            cout<<"\nUpper bound of "<<ele<<" is...>"<<v[index_upperBound];



    return 0;
}
