/*
Jacob G. Yamin Y. Aishwarya R.
9/20/2018
This Lab was to practice arrays and cstrings.
inputs: user strings
outputs: the count of characters seen 

this code parses user strings and finds how many  of each character was input, and displays that information back to the user
*/
#include <cstring>
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main () {
  void countChar (char [], int [], int); //forward casting the method

  //this two arrays run in parrallel, and they are the alphabet characters, and others, plus an array for their int counter reference for how many times it is used
  int  letterCount [37] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  char letterLiteral [37] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1','2','3','4','5','6','7','8','9','-'};
  //this records the length of the reference arrays for the characters and the int counters of them
  int lCountLength = 37;

  // this is the cString that the user will input a string to, hard cast to 256 for a full cin getline
  char count[256];

  //while loop to enter the loop of recording user strings and their content
   while(true){
      cout<<"Enter String, when you want to exit the program, enter null"<<endl;
      cin.getline(count,256);

      //this variable is to account for the user wanting to exit the program
      string nullCase ="";

      //calculates the string to make sure if it equals null the program will be exited.
      for (int index = 0; index < 4; index++) {
        nullCase += count [index];
      }
      if (nullCase == "null") {
        break;
      }// end for loop

      //this loop and variable find the length of the user inputted string to properly execute charCount
      int length = 0;
      for( int index = 0; count[index] != '\0'; index++) {
        length++;
       }//end for loop

       //charCount call
       countChar(count,letterCount, length );

       //this loop prints out the results of the charCount method
       for (int index =0; index < lCountLength; index++) {
        
        //if statements to print out the incremented characters
        if (letterCount [index]>0) {

          //if statement to see if the character qualifies as "other"
          if ( letterLiteral [index] == '-'){
            cout << "Character: " << "Other" << " occurred " << letterCount[index] << " Times." << endl;            
          }// end nested if
          else {
            cout << "Character: " << letterLiteral [index] << " occurred " << letterCount[index] << " Times." << endl;
          }// end else
        }// end big if
          
      }// end for loop 

      // for loop to flush out the incremented letters
      for ( int index = 0; index < lCountLength; index++) {
        letterCount [index] =0;
      }//end for loop


  }// end while loop  

  //statement to show the program was completed succesfully
  cout << "completed satisfactorily" << endl;
  return 0;
}// end method main

/*
@param letters: the array thats contents will be analysed

@param counts: the array that contains the values to incremented

@param length: the length of the letters array
*/
void countChar( char letters[], int counts[], int length) {

  //forward casts the method so its usable in the function
  int letterIndex (char);
  
  //for loop to increment all values of counts neccesary
	for (int i =0; i < length; i++) {

    // the charIndex is the reference of the character to be incremented
    int charIndex = letterIndex(letters[i]);
    counts [charIndex]+=1; 
  }// end for loop

}//end method countChar

/*
@param findIndex: the character whose index will be found
*/
int letterIndex(char findIndex ) {

  // the value of the index
  int realIndex=0;

  //statements to parse the value of the index
  if (!(isalnum(findIndex))  ) {
   realIndex = 36;
  }//end if
  else {
    realIndex = toupper (findIndex)-'A';
  }// end else
  return realIndex;
  
}// end method letterIndex
