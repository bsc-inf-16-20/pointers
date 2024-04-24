#include<iostream>
#include<string>

using namespace std;

int main(){
  //dynamically allocating an integer

  int* dynamicInt = new int;

  //dynamically allocate a string 

  string* dynamicString = new string;

  //prompting the user to input and assign a value to dynamically allocated integer
   cout<<"Enter an integer value : " << endl;
   cin>> *dynamicInt;

   //prompting the user to input and assign value to dynamically allocated string
   cout<<"Enter a string value : " <<endl;
   cin.ignore();
   getline(cin, *dynamicString) ;

   //outputint thr value of the dynamically allocated integer and string
   cout<<"Dynamically allocated integer value : " <<*dynamicInt <<endl;
   cout<<"Dynamically allocated string value : " <<*dynamicString <<endl;

   //free dynamically allocated memory
   delete dynamicInt;
   delete dynamicString;

   return 0; 
}