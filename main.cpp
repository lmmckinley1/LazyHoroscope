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

        cout<<"What is your first name? ";
        cin>>firstName;
        cout<<"What is your last name? ";
        cin>>lastName;
        cout<<"Welcome, "<<firstName.at(0)<<"."<<lastName.at(0)<<"."<<", her is your fortune... "<<endl;

  //tell fortune

        cout<<"you lucky number is "<<firstName.length()<<"."<<endl;

  return 0;
}
