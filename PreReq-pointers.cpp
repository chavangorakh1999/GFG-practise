#include<iostream>
using namespace std;
int x;

int main()
{
    static int x=50;
    int a=15,*b;
    cout<<a<<endl;
    b=&a;
    //this  $  is used to disclose the adress of the variable stored.

    cout<<*b<<endl;

    //This * is used to reterviews value stored at that particular address.
    

    cout<<sizeof(int)<<endl;

    cout<<sizeof(char)<<endl;

    cout<<x<<endl;
    



    return 0;

}


