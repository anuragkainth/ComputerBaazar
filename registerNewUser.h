#include<string>
#include<iostream>
#include<fstream>
#include "json.hpp"
using json = nlohmann::json;
using namespace std;
int reg_user(string username, string password)
{   //check if the username is already taken
    fstream file;
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
        }
      if(j.contains(username))
      {
          cout<<endl<<"Username already taken"<<endl;
          return 1;
      }
      else
      {
          cout<<endl<<"Username available"<<endl;
           j[username]=password.c_str();
           remove("users.txt");
            ofstream file;
            file.open("users.txt");
            file<<j.dump();
      }
   }
   else
    {
         cout<<"File not found"<<endl;
    }
    return false;
}