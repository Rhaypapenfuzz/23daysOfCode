#include <iostream>
using namespace std;
int accumulate(int);

int main() {

  int userInput; 
  //Ask user for int number
  cout<<"Enter any number you want to calculate the sum to: ";
  cin>>userInput; //store input
  cout<<accumulate(userInput); 
  return 0;
}

//function to calculate sum from 1 to userInput
int accumulate(int userInput){
  int sum = 0;
  for(int i = 1;i < userInput + 1 ; i++){
    //check if number is a multiple of 3 or 5
    if( i%3 == 0 || i%5 == 0) {
    sum += i;
    } 
  }
  return sum;
}
