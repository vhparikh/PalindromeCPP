//Created by Vatsal Parikh
//Date 9/17/20
//The computer checks to see if a word is a palindrome

//imports
#include <iostream>
#include <cstring>

using namespace std;

//main method
int main()
{
  //create char arrays to store the word
  char input[80];
  char input2[80];
  char output[80];

  int counter = 0;
  //set all the slots in the arrays to NULL  
  for (int i = 0; i < 79; i++) {
    input[i] = 0;
    input2[i] = 0;
    output[i] = 0;
  }
  
  cout << "Type in a word to see if it is a palindrome!" << endl; //prints intro
  cin.get(input, 80); //gets the users input
  cin.get(); //removes the null terminating character

  //goes through the user input removes punctuation and makes everything lowercase
  for (int i = 0; i < 79; i++) {
    if (input[i] >= 97 && input[i] <= 122) {
      input2[counter] = input[i];
      counter++;
    }
    else if (input[i] >= 65 && input[i] <= 90) {
      input2[counter] = input[i] + 32;
      counter++;
    }
  }

  counter = 0;

  //goes through input2 and feeds its characters backward to output
  for (int i = 79; i >= 0; i--) {
    if (input2[i] != 0) {
      output[counter] = input2[i];
      counter++;
    }
  }
  
  if (strcmp(input2, output) == 0) { //if the two strings are equal then:
    cout << "Palindrome!" << endl; //print palindrome
  }
  else { //else:
    cout << "Not a palindrome" << endl; //print not palindrome
  }
}
