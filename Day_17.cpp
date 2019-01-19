/*
*INFILE
Takoma_store 2.7 71.3 14.7 23.9 51.2
Bethesda_store 12.7 8.9 17.8 7.8 18.3
Georgia_store 4.7 11.3 10.7 22.9 21.2
Howard_C_store 12.4 0.9 27.8 3.9 28.3
My_Fav_store 3.7 41.3 34.7 23.9 41.2
Campus_Annex 2.7 2.9 47.8 3.9 1.3
The_New_store 2.5 31.3 34.7 33.9 21.2
*/
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
 
//const string filepath="";
void Get_store_data(ifstream&,string[],float[][5]);
float Compute_sales_total(int, float[][5]);
void Display_Store_Data(string[],float [][5],float []);
 
 
int main() {
ifstream infile;
infile.open("infile.txt");
string storeNames[7];
float storeSales[7][5];
float storeTotal[7];
 
Get_store_data(infile,storeNames,storeSales);
for(int i=0;i<7;i++){
storeTotal[i]=Compute_sales_total(i,storeSales);
}
Display_Store_Data(storeNames,storeSales,storeTotal);
return 0;
}
 
void Get_store_data(ifstream& infile,string storeNames[],float storeSales[][5])
{
for(int i=0;i<7;i++)
{
  infile>>storeNames[i];
  for(int j=0;j<5;j++){
 
  infile>>storeSales[i][j];
  }
}
 
}
 
 
float Compute_sales_total(int index, float storeSales[][5])
{
float total=0;
for(int i=0;i<5;i++)
{
total +=storeSales[index][i];  
}
return total;
}
 
void Display_Store_Data(string storeNames[],float storeSales[][5],float storeTotal[]){
cout<<"Store Name\tJAN\tFEB\tMAR\tAPR\tMAY\tTOTAL\n\n";
cout<<fixed<<showpoint<<setprecision(2);
 
for (int i = 0; i < 7; i++){
  cout << storeNames[i] << "\t";
 
  for (int j = 0; j < 5; j++){
    cout << storeSales[i][j] << "\t";
  }
 
  cout << storeTotal[i];
  cout << endl;
}
}
/*
gcc version 4.6.3
    
Store Name  JAN FEB MAR APR MAY TOTAL
 
Takoma_store    2.70    71.30   14.70   23.90   51.20   163.80
Bethesda_store  12.70   8.90    17.80   7.80    18.30   65.50
Georgia_store   4.70    11.30   10.70   22.90   21.20   70.80
Howard_C_store  12.40   0.90    27.80   3.90    28.30   73.30
My_Fav_store    3.70    41.30   34.70   23.90   41.20   144.80
Campus_Annex    2.70    2.90    47.80   3.90    1.30    58.60
The_New_store   2.50    31.30   34.70   33.90   21.20   123.60
   */
