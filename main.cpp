#include <iostream>
#include<string>
#include<list>
#include<conio.h>
#include "passwordInput.h"
#include "loginuser.h"
#include "registerNewUser.h"
#include "constant.hpp"

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

     while (choice!=3 && isloggedin==false)
     { 
        system("cls");
         cout<<"**************\e[1mWelcome to the Computer Bazaar\e[0m*****************\n";
         cout<<"1.New user(Registered Here)"<<endl;
         cout<<"2.Existing user(Login Here)"<<endl;
         cout<<"3.Exit"<<endl;
         cout<<"Enter your choice:";
          cin>>choice;
         switch(choice)
         {
             case 1:
             {
                 authentication auth;
                 auth.register_user();
                  isloggedin=true;
                 break;
             }
             case 2:
             {   authentication auth;
                 auth.login();
                 cout<<"Existing User"<<endl;
                 isloggedin=true;
                 break;
             }
             case 3:
             {
                 cout<<"Exit"<<endl;
                 exit(0);
                 break;
             }
             default:
             {
                 cout<<"Invalid Choice"<<endl;
                 break;
             }
         }
     }
          
        if(isloggedin==true)
        {        choice=1;
                while(choice!=6)
                {
                 system("cls");
                cout<<"***************\e[1mWelcome to the Computer Bazaar\e[0m*****************\n";
                cout<<"1.New Entry"<<endl;
                cout<<"2.add new item in product list"<<endl;
                cout<<"2.List of all product"<<endl;
                cout<<"4.Preview Bill of Existing Record"<<endl;
                cout<<"3.Searching"<<endl;
                cout<<"4.Modification"<<endl;
                cout<<"5.Remove Record"<<endl;
                cout<<"6.Exit"<<endl;
                cout<<"Enter your choice:";
                cin>>choice; 
                }
               
        }
        }

        return 0;   
}
