#include "user.h"
#include"string.h"

user::user(char *s1,char *s2,long int p)
{
      strcpy(rocket_id,s1);
      strcpy(password,s2);
      balance=p;
}
void user:: topup(int a)
{
      balance=balance+a;
}
void user:: withdraw(int b)
{
      balance=balance-b;


}
int  user::balance_inquiry()
{
      return balance;
}
