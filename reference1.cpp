#include<iostream>

using namespace std;

int main()
{
    int x = 5+5;
    int &a = x; //a is refrence vairable of a (x is orginal vairable)
    a = a+5;
    cout<<"the value of x is "<<x<<endl;
    cout<<"The valu of a is "<<a<<endl;
       x = x+20;
       cout<<"the value of a is "<<a<<endl;

}




