#include<bits/stdc++.h>
using namespace std;
void printBinary(int num)
{
    for(int i=10;i>=0;i--)
        cout<<( (num>>i) & 1);
    cout<<endl;
}
int count_set_bit(int num)
{
    int ct=0;
    for(int i=31;i>=0;i--)
    {
        if((num &(1<<i))!=0)
            ct++;
    }
    return ct;
}
int main()
{
    printBinary(9);
    int a=9;
    int i=0;

    //set bit --> the bit is 1
    //unset bit-> the bit is 0

    //  check bit is set or not

    if( (a & (1<<i) ) !=0)
        cout<<"set bit"<<endl;
    else
        cout<<"not set bit"<<endl;

    // change ith   bit into set bit

    int a_setBit= (a|(1<<2) );
    printBinary(a_setBit);

    // change ith   bit into unset bit

    int a_unSetBit= (a&(~(1<<3)) );
    printBinary(a_unSetBit);

    //count set bit
    cout<<"\nThe no of set bit is->"<<count_set_bit(16)<<endl;

    //odd and even check using bit manupulation
    if(a&1)
        cout<<"odd\n";
    else
        cout<<"even\n";

    //multiplication of 2 using bit operation(left shift 1)
    cout<<(5<<1)<<endl;

    //integer division of 2 using bit operation(right shift 1)
    cout<<(5>>1)<<endl;

    //upper case to lower case (change the 5 th bit 0 to 1)
     char A='A';
     char small_a=(A |(1<<5));
     cout<<"Converted to lower case->"<<small_a<<endl;

     char B='B';
     char b=(B | ' '); //here upper case char ,space used (upper case char | space)
     cout<<"Converted to lower case using space->"<<b<<endl;

     //lower case to upper case (change the 5 th bit 1 to 0)
     char c='c';
     char C= (c & (~(1<<5)));
     cout<<"Converted to upper case->"<<C<<endl;

     char d='d';
     char D= (d & '_'); //(upper_case_char & ubderscore)
     cout<<"Converted to upper case using underscore->"<<D<<endl;

     //unset LSB ith bit
     cout<<"\n\n";
     a=59;
     cout<<"binary of 59 is--->";
     printBinary(59);
     cout<<"Unset LSB 4th bit->";
     printBinary((a & (~((1<<5)-1))));

     //unset msb ith bit
     a=59;
     cout<<"binary of 59 is--->";
     printBinary(59);
     cout<<"Unset MSB 3th bit->";
     printBinary((a & ((1<<(3+1))-1)));

    return 0;
}
