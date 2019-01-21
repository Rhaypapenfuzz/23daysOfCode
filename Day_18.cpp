#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    int tab = 3;
    int star = 1;

    while (i < 4){
        int j = 0;
        while (j < tab) {
            cout << "\t";
            j++;
        }
        tab--;
        int k = 0;
        while (k < star) {
            cout << "*";
            cout << "\t";
            k++;
        }
        star++;
        i++;
        cout << endl << endl;
    }
	//system("pause");
    return 0;
}
