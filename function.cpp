#include<iostream>
using namespace std;
// void fun(int x)
// {
//     if(x==0)
//     return;
//     else
//     {
//         cout<<"Geeks"<< " ";
//         fun(x-1);
//         cout<<"For Geeks"<<" "<<x<<" ";
//     }
    
//     return;
// }
// int summ()
// {   int sum=0;
//     return sum;
// }
int main()
{
    // fun(3);
    int n;

    cin>>n;
    static int sum=0;
    for(int i=1;i<=n;i++)
    {   
       
        if((i%3==0) && (i%5==0))
        {
            sum+=i;
        }
       cout<<sum<<endl;
    }
    
    return 0;
}