#include<iostream>
using namespace std;

int main()
{
    int i=0;
    for(;i<10;i++)
    {
        int x,y;
        cin>>x>>y;
        if(y==0)
        {
        cout<<"Invalid value of Zero";
        continue;
        }
        else 
        cout<<x/y<<endl;
    }
    return 0; 
} 

