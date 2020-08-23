#include<iostream>
using namespace std;
void fun(int x)
{
    if(x==0)
    return;
    else
    {
        cout<<"Geeks"<< " ";
        fun(x-1);
        cout<<"For Geeks"<<" "<<x<<" ";
    }
    
    return;
}
int main()
{
    fun(3);
    return 0;
}