#include <iostream>
#include<string>
#include<list>
#include<conio.h>
#include "passwordInput.h"
#include "registerNewUser.h"
#include "loginuser.h"
//user Class
class authentication
{
private:
    string username;
    string password;
public:
void login()
{  //login function
    int flag=1;
    while (flag!=0)
    {
    cout<<"Enter your username: ";
    cin>>username;
    cout<<"Enter your password: ";
    password=pass();
    flag=log_in(username,password);
    }
    
}
    void register_user()
    {     
         int flag=1;
        while(flag!=0)
        {
            cout<<"Enter username: ";
            cin>>username;
            cout<<"Enter password: ";
            password=pass();
            flag=reg_user(username,password);
          
        }
 }
};
//Structure for order Details
struct orderDetails
{
    string item_code;
    int quantity;
    int price;
};
//Structure for new Entry
struct purchasedetails
{
    string pid;
    string name_of_customer;
    string date;
    list< orderDetails> order;
};
class shop
{
private:
   list<purchasedetails> list_of_purchase;
public:
    void addNewEntry()
    {
    }
    void searching()
    {
        
    }
    void modification()
    {
    }
    void removeRecord()
    {
    }

};
//Driver Code

int main()
{     int choice=1;
     while (choice!=3)
     { 
         cout<<"********Welcome to the Computer Bazaar***********"<<endl;
         cout<<"1.New user(Registered Here)"<<endl;
         cout<<"2.Existing user(Login Here)"<<endl;
         cout<<"3.Exit"<<endl;
         cout<<"Enter your choice"<<endl;
          cin>>choice;
         switch(choice)
         {
             case 1:
             {
                 authentication auth;
                 auth.register_user();
                 choice=3;
                 break;
             }
             case 2:
             {   authentication auth;
                 auth.login();
                 cout<<"Existing User"<<endl;
                 choice=3;
                 break;
             }
             case 3:
             {
                 cout<<"Exit"<<endl;
                 break;
             }
             default:
             {
                 cout<<"Invalid Choice"<<endl;
                 break;
             }
         }
     }
        return 0;   
}
