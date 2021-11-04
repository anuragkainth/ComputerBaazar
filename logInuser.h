#include<string>
#include<iostream>
#include<fstream>
#include "json.hpp"
using json = nlohmann::json;
using namespace std;
int log_in(string username, string password)
{    fstream file;
    file.open("users.txt");
    string content;
    char temp;
   if(file.is_open())
   {  
      while(file>>temp)
      {
         content.push_back(temp);
      }
      json j;
      try
       {  j = json::parse(content);
       }
        catch(exception e)
        {
             cout<<endl<<"error"<<endl;
             return 0;
        }
      if(!j.contains(username))
      {
          cout<<endl<<"User does not exists"<<endl;
          return 1;
      }
      else
      {
            if(strcmp(j[username].get<string>().c_str(),password.c_str())==0)
            {
                cout<<endl<<"Logged in successfully"<<endl;
                return 0;
            }
            else
            {
                cout<<endl<<"Wrong password"<<endl;
                return 1;
            }
      }
   }
   
   else
    {
         cout<<"File not found"<<endl;
    }
    return 0;
}