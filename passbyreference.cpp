#include <iostream>

using namespace std;
void swap(int &a, int &b) //a and b is reference vairable
{
 int  temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    cout<<"Enter the value of x and y "<<endl;
    cin>>x>>y;
    cout<<"THE value of  x before swapping is "<<x<<endl;
    cout<<"THE value of  y before swapping is "<<y<<endl;
    swap(x, y);//these x and y is original vairable.
     cout<<"THE value of  x after swapping is "<<x<<endl;
    cout<<"THE value of  y  after swapping is "<<y<<endl;
   return 0;
}
