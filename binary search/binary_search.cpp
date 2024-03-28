#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ele;
    cout<<"Enter the size of the list :";
    cin>>n;
    int l=0,h=n-1;
    vector <int> v(n);
    cout<<"\nEnter the sorted list for binary search ....> :\n";
    for(int i=0;i<n;i++)
        cin>>v[i];
    cout<<"\nEnter the element which you want to search :";
    cin>>ele;
    while(h-l>1)
    {
        int mid=(h+l)/2;
        if(v[mid]>ele)
            h=mid-1;
        else
            {
                l=mid;

            }
    }
    if(v[h]==ele)
        cout<<"\nThe element is found in "<<h+1<<"th positions";
    else if(l==ele)
         cout<<"\nThe element is found in "<<l+1<<"th positions";
    else
        cout<<"\nElement is not found .....";
    return 0;
}
