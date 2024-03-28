#include<bits/stdc++.h>
using namespace std;
double spe=1e-6;
double mul(double mid, int n)
{
    double ans=1;
    for(int i=0;i<n;i++)
        ans*=mid;
    return ans;
}
int main()
{
    double x;
    int n;
    cout<<"Enter the vlaue and the  nth value :";
    cin>>x>>n;

double h=x,l=1,mid;
while(h-l>spe)
{
    mid=(h+l)/2;
    if(mul(mid,n)<x)
        l=mid;
    else
        h=mid;
}
cout<<h<<"  "<<l;
return 0;
}
