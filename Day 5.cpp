#include <iostream>
using namespace std;
int accumulate(int, string);

int main() {

  int userInput;
  string preferredOperation;
  
  //Ask user for int number
  cout<<"Enter any number you want to calculate the sum or product to: ";
  cin>>userInput; //store input
  
  cout<<"Do you want to compute the sum or product? ";
  cin>> preferredOperation; //store choice of Operation
  
  for(int i = 0; i < preferredOperation.size(); i++){
     /*change all characters of string input to lowercase
     */
     preferredOperation[i] = tolower(preferredOperation[i]);
  }
  cout<<accumulate(userInput, preferredOperation); 
  return 0;
}

//function to calculate product or sum from 1 to userInput
int accumulate(int userInput, string preferredOperation){
  int sum = 0;
  int product = 1;
  int result;

  for(int i = 0; i < userInput + 1 ; i++){
    if(preferredOperation == "sum"){
      sum += i;
      result = sum;
    }
    else if(preferredOperation == "product"){
      product *= i;
      result = product;
    }
  }
  
  return result;
}
