#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void averageScore(int[][2], ofstream&);

int main() {

  ifstream infile;
  infile.open("Lab01222019.txt");
  ofstream outfile;
  outfile.open("lab0122201_output.txt");

	int myArray[50][2];

  //check if file was succesfully opened
  if(!infile.is_open()){
    cout<<"File could not be opened.\n";
    return 1;
  }
  //check if content is good
  if(!infile.good()){
    cout<<"File contains some bad content";
    return 1;
  }

  //loop to store info from infile into myArray
	for (int student = 0; student < 50; student++) {

		for (int score = 0; score < 2; score++) {
			infile>> myArray[student][score];
		}

	}
   /*
   *Called function will calculate average score and read to outfile 
   */ 
  averageScore(myArray, outfile);

  //close files
  infile.close();
  outfile.close();
	//system("pause");
	return 0;
}

/*
*function to calculate student average Score and 
*also output the students' scores and average to outfile
*/
void averageScore(int myArray[][2], ofstream& outfile){

  float average;
  
  for (int unsigned student = 0; student < 50; ++student) {    
    int totalScore = 0 ;

		for (int unsigned score = 0; score < 2; ++score) {
			totalScore += myArray[student][score];
      cout<<myArray[student][score]<<" ";
      outfile<<myArray[student][score]<<" ";
		}

    average = float(totalScore)/2;
    //cout << fixed << setprecision(1);
    cout<<"Average: "<<average<<endl;
    outfile<<average<<endl; //outputs history scores average to outfile directory
	}

}
/*
*This is how infile looks
37	18
31	7
6	16
48	36
50	17
23	23
16	46
4	15
43	49
41	37
7	32
12	16
28	11
1	15
31	30
33	46
34	39
44	1
37	4
9	11
36	13
24	4
14	32
1	48
22	19
16	50
29	31
33	8
21	13
10	29
12	39
29  32
41  9
34	26
43	17
7	37
46	4
34	33
12	43
33	43
41	11
8	14
17	6
10	5
24	23
29	28
4	28
25	33
20	23
31	36
*/
