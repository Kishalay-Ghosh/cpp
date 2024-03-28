#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> s;
void generate(vector<int> &subset,int i,vector<int> &nums)
{
    if(i==nums.size())
    {
        s.push_back(subset);
        return;
    }
    //ith element not in subset
    generate(subset,i+1,nums);

    //ith element in subset
    subset.push_back(nums[i]);
    generate(subset,i+1,nums);
    subset.pop_back();

}
int main()
{
   int n;
   cout<<"Enter the value of the list:";
   cin>>n;
   cout<<endl;
   vector<int> nums(n);
   for(int i=0;i<n;i++)
    cin>>nums[i];
    vector<int> empty_subset;
    generate(empty_subset,0,nums);
   for(auto subset: s)
   {
       cout<<"[";
       for(auto ele: subset)
            cout<<ele<<",";
       cout<<"]"<<endl;

   }
    return 0;
}

