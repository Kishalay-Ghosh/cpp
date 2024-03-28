#include<bits/stdc++.h>
using namespace std;
vector<string> valid;
void generate(string &s,int open,int close)
{
    //cout<<s<<endl;
    if(open==0 and close==0){
        valid.push_back(s);
        return;
    }
    if(open>0){
         s.push_back('(');
         generate(s,open-1,close);
         s.pop_back();    //back tracking
         //cout<< "open"<<endl;
    }
    if(close>0)
    {
        if(open<close)
        {
            s.push_back(')');
            generate(s,open,close-1);
            s.pop_back();  //back tracking
            //cout<<"close"<<endl;
        }
    }

}
int main()
{
    int n;
    cout<<"Enter the no of parenthesis :";
    cin>>n;
    string s;
    generate(s,n,n);
    for(auto ele: valid)
        cout<<ele<<endl;
    return 0;
}

