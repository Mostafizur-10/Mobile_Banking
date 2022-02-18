#ifndef USER_H
#define USER_H


class user
{
   char rocket_id[20];
      char password[20];
      long int balance;
      public:
            user(char *,char *,long int);
            void topup(int);
            void withdraw(int);
            int balance_inquiry();

};

#endif // USER_H
