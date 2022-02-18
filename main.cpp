#include <iostream>
#include "user.h"
using namespace std;

int main()
{
   char s1[20],s2[20];
   long int p;
   int a,b;
   cout<<"ENTER YOUR ID\n";
   cin>>s1;
   cout<<"ENTER YOUR PASSWORD\n";
   cin>>s2;
   cout<<"ENTER YOUR AMOUNT\n";
   cin>>p;
   user u1(s1,s2,p);
   cout<<"BALANCE : "<<p<<endl;
   cout<<"ADD AMOUNT\n";
   cin>>a;
   u1.topup(a);
   cout<<"BALANCE : "<<u1.balance_inquiry()<<endl;
   cout<<"RECEIVE AMOUNT\n";
   cin>>b;
   u1.withdraw(b);
   if(u1.balance_inquiry()<500)
      cout<<"INSUFFICIENT BALANCE\n";
   else
      cout<<"BALANCE : "<<u1.balance_inquiry()<<endl;

}
