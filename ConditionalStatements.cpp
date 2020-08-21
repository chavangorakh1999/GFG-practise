#include<iostream>
#include<string>
using namespace std;

int main()
{
// int number;
    // int sum=0;
    // cin>>number;
    
    // if(number>0)
    // {
    // cout<<number*(number+1)/2<<endl;
    // }
    // else cout<<"Enter Positive Number";

    //Problem 2
    // if(number>=18)
    // {
    //     cout<<"Adult"<<endl;
    // }
    // else cout<<"Not Adult"<<endl;
    //Problem 3

    int age;
    string gender;
    cin>>age;
    cin.get();
    getline(cin,gender);

    if(age<18) cout<<gender<<" "<<"Kid";
    else if(age>=18) cout<<gender<<" "<<"Adult";



    return 0;
}