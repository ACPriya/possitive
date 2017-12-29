#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a>0)
        cout<<"positive";
    else if(a<0)
        cout<<"negative";
    else if(a==0)
        cout<<"zero";
    else
        cout<<"invalid input";
    return 0;
}
