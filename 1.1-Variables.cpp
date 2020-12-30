// This is a SINGLE LINE COMMENT

// Note: any comments will not be read by the compiler
// simply used for documentation/clarity purposes

/*
  This is a BLOCK COMMENT
  - useful for multi-line comments
*/

#include <iostream>

using namespace std;

int main() { // BEGINNING OF MAIN 
  

  // VARIABLES:
  // A temporary space in memory that 
  //  is allocated in order to hold data
  // In C++, the type of variable must be specified:
  // note: different data types require more memory.
  
  /*
      TYPE      DEF           
      char:     a single charater
      string:   set of characters
      
      bool:     a boolean, holds TRUE or FALSE value 
      int:      a whole number

      float:    a decimal number
      double:   also a decimal, but can hold greater numbers
  */

  // Variable Declaration: reserving space for data
  int age; 

  // cout = "console output"      used to print
  cout << "Age: " << age << endl;    // endl = "endline"
  cout << "Name: " << name << "\n";  // \n   = "newline"


  // Variable Assignment: assigning a value
  //  if a variable has been declared, we no longer have to
  //   specify the type 
  age = 23;
  cout << "Age is now " << age << endl;

  // expressions can also be used to assign a value to a var.
  age = 23 + 2;
  cout << "After two years, age is " << age << endl;



  // What if we want user to assign a variable's value?
  // "console input"
  cin >> age;      //
  cout << "Time travelled where age is " << age << endl; 


  // CHALLENGE 1: 
  // Declare a string variable called "name".
  // Assign the variable as your name. 
  

  // CHALLENGE 2: Declare another string variable. 
  // Use cin statement to allow for user input.



  return 0;
  // END OF MAIN
}


