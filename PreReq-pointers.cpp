#include<iostream>
using namespace std;
int x;
void fun();
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
    // fun();

    return 0;  
 
} 


// # define scanf "%s Geeks Quiz"
// int main()
// {
//    printf(scanf, scanf);
//    return 0;


