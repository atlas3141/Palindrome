/* September 10, Palindrome, Josh Howell
   asks for input and tells you if its a palindrome */

#include <iostream>

using namespace std;

int main(){
  char inputstr[81]; 
  char cleanstr[81];
  cin.get(inputstr,81); //get the string
  int j = 0;
  for (int i = 0; i < 81; i++){ //removes punctuation and junk
    if (isalpha(inputstr[i])){
      cleanstr[j] = tolower(inputstr[i]);
      j++;
    }
    if (inputstr[i+1] == '\0'){
      i=82;
      cleanstr[j] = '\0';
    }
  }
  bool isPalindrome = true; // checks to see if its a palindrome
  for (int i = 0; i < j/2; i++){
    if (cleanstr[i] != cleanstr[j-1-i]){
      isPalindrome = false;
    }
  }
  if (isPalindrome){ //tells you if its a palindrome
    cout << inputstr << " is a palindrome" << endl;
  }
  else{
    cout << inputstr << " is not a palindrome" << endl;
  }
}
