#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char input[80];
  char input2[80];
  char output[80];

  int counter = 0;
  
  for (int i = 0; i < 79; i++) {
    input[i] = 0;
    input2[i] = 0;
    output[i] = 0;
  }
  
  cout << "Type in a word to see if it is a palindrome!" << endl;
  cin.get(input, 80);
  cin.get();
  
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
