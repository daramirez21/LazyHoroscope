//Authors: David Ramirez
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string first_name;
  string last_name;


  //get user input
  cout << "What is your first name?" << endl;
  cin >> first_name;
 
  cout << "What is your last name?" << endl;
  cin >> last_name;

  cout << "Welcome, " <<first_name.at(0) << "." <<last_name.at(0)<< "., here is your fortune...\n";
  //tell fortune
  cout << "your lucky number is " <<first_name.length()<< endl;
  

 int index;

 index = last_name.length()-1;


  first_name.at(0) = toupper(first_name.at(0)); 

  last_name.at(index) = toupper(last_name.at(index));

  if(first_name.at(0) == 'A' || first_name.at(0) == 'E' || first_name.at(0) == 'I' || first_name.at(0) == 'O' || first_name.at(0) == 'U')
 {
 cout << "you are destined to be famous!\n";
 }

 else
 {
 cout << "you should keep a low profile.\n";
 }
 



 if(last_name.at(index) == 'A' || last_name.at(index) == 'E' || last_name.at(index) == 'I' || last_name.at(index) == 'O' || last_name.at(index) == 'U' )
 {
 cout << "you have already met your true love.\n";
 }
 
 cout << "have a good day!\n";

  return 0;
}
