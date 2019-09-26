//Author: Leah McKinley
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  
        string firstName = " ";
        string lastName = " ";
        char c;
        int lowercaseVowel;
        int uppercaseVowel;
        lowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
        uppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

  //get user input

        cout<<"What is your first name?"<<endl;
        cin>>firstName;
        cout<<"What is your last name?"<<endl;
        cin>>lastName;
        cout<<"Welcome, "<<firstName.at(0)<<"."<<lastName.at(0)<<"."<<", here is your fortune..."<<endl;
  //tell fortune

        cout<<"your lucky number is "<<firstName.length()<<endl;
        
        if (firstName.at(0) == 'a' || firstName.at(0) == 'e' || firstName.at(0) == 'i' || firstName.at(0) == 'o' || firstName.at(0) == 'u' || firstName.at(0) == 'A' || firstName.at(0) == 'E' || firstName.at(0) == 'I' || firstName.at(0) == 'O' || firstName.at(0) == 'U')

        {   
            cout<<"you are destined to be famous!"<<endl;
        }
        else
        {
            cout<<"you should keep a low profile."<<endl;
        }
      
        if (lastName.at(lastName.length()-1) == 'a' || lastName.at(lastName.length()-1) =='e' || lastName.at(lastName.length()-1) == 'i' || lastName.at(lastName.length()-1) =='o' ||lastName.at(lastName.length()-1) == 'u' || lastName.at(lastName.length()-1) == 'A' || lastName.at(lastName.length()-1) == 'E' || lastName.at(lastName.length()-1) == 'I' || lastName.at(lastName.length()-1) == 'O' || lastName.at(lastName.length()-1) == 'U')
       { 
            cout<<"you have already met your true love."<<endl;
        }

        cout<<"have a good day!"<<endl;

  return 0;
}
