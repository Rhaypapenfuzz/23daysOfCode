#include <iostream>
using namespace std;
int accumulate(int);

int main() {

  int userInput; 
  //Ask user for int number
  cout<<"Enter any number of your choice: ";
  cin>>userInput; //store input
  cout<<accumulate(userInput); 
  return 0;
}

//function to calculate sum from 1 to userInput
int accumulate(int userInput){
  int sum = 0;
  for(int i = 1;i < userInput + 1 ; i++){
    sum += i;
  }
  return sum;
}
