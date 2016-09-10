#include <iostream>

using namespace std;

int main(){
  char inputstr[80];
  char cleanstr[80];
  cin.get(inputstr,80);
  cout << inputstr << endl;
  int j = 0;
  for (int i = 0; i < 80; i++){
    if (isalpha(inputstr[i])){
      cleanstr[j] = tolower(inputstr[i]);
      j++;
    }
    if (inputstr[i+1] == '\0'){
      i=81;
      cleanstr[j] = '\0';
    }
  }
  cout << cleanstr << endl;
}
