#include<iostream>

using namespace std;

inline int add(int a, int b)

 {
    int sum = a+b;
    return(sum);
 }

 int main()
 {
    int x, y, s;
    cout<<"Enter two numbers you want to add"<<endl;
    cin>>x>>y;
    s = add(x,y);
    cout<<"The sum of two numbers is "<<s<<endl;
 }