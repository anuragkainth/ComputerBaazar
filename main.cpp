#include <iostream>
#include<string>
#include<list>
using namespace std;
//user Class
class authentication
{
private:
    string username;
    string password;
public:
    //Return True if password and username are correct
    bool authenticate()
       {
           return true;
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
{
     cout<<"Welcome to the shop"<<endl;
     
    return 0;
}
