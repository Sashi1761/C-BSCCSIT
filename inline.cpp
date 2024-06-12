#include<iostream>
#include<conio.h>

using namespace std;
inline int add(int a , int b)
{
   int sum = a+b;
    return(sum);
}
int main()
{
  int a1, b1, s1;
  cout<<"Enter the value of two numbers"<<endl;
  cin>>a1>>b1;
  s1 = add(a1, b1);
  cout<<"The sum of two numbers is"<<s1<<endl;
  return 0;
}