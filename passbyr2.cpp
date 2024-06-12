#include<iostream>
using namespace std;

void rectangle(int l, int b, int &a, int &p)//  int &a = a1 int &b = b1
{
    a = l*b;
    p = 2*(l+b);

}

int main()
{
    int l, b, a1,p1;
    cout<<"Enter the value of length and breath of rectangle"<<endl;
    cin>>l>>b;
    rectangle(l,b,a1,p1);//funcution call
    cout<<"The area is "<<a1<<endl<<"the perimeter is "<<p1<<endl;
    return 0;

}

//write a program to calculate the tsa, csa, volume of cylinder in a funcution and display the result in main