#include<iostream>
using namespace std;
void rev(int a)
{
int rem,rev=0;
while(a!=0)
{
rem=a%10;
rev=rev*10+rem;
a/=10;
}
Cout<<”\n reversed number : ”<<rev;
}
int main()
{
int n;
cout<<"\nenter the number to reverse : ";
cin>>n;
rev(n);
return 0;
}
