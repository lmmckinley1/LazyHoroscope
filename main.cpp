//Author: Leah McKinley
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  
        string firstName = " ";
        string lastName = " ";

  //get user input

        cout<<"What is your first name?"<<endl;
        cin>>firstName;
        cout<<"What is your last name?"<<endl;
        cin>>lastName;
        cout<<"Welcome, "<<firstName.at(0)<<"."<<lastName.at(0)<<"."<<", here is your fortune..."<<endl;
  //tell fortune

        cout<<"your lucky number is "<<firstName.length()<<"."<<endl;

  return 0;
}
