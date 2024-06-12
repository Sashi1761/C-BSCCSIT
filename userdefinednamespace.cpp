#include<iostream>

using namespace std;

namespace A{
    int a = 10; 
}

int main()
{
    cout<<"hello world"<<endl;
    cout <<A::a<<endl;
    return 0;
}