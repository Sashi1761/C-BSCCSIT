#include<iostream>

using namespace std;

inline float area( int l, int b)
{
    float area = l*b;
    return(area);
}

int main()
{
    float l,b,a;
    cout<<"Enter the length and breath of rectange"<<endl;
    cin>>l>>b;
    a = area(l, b);
    cout<<"The area of rectangel is"<<a<<endl;
}