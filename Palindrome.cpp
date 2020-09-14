#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char input[80];
  char input2[80];
  char output[80];

  for (int i = 0; i < 79; i++) {
    input[i] = 0;
    input2[i] = 0;
    output[i] = 0;
  }

  cout << "Type in a word to see if it is a palindrome!" << endl;
  cin.get(input, 80);
  cin.get();
  
  return 0;
  
}
