/*

        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
 5 6 7 8 9 8 7 6 5

*/
#include <iostream> 
using namespace std;
int main() {
  int rows, count = 0, count1 = 0, k = 0;
    cout << "Enter number of rows: ";
    cin >> rows;
    for(int i=0; i<rows; i++) 
     {

           for(int j=i; j<rows; j++)
           {
                cout<<" ";
           }

           for(int j=0; j<(2*i-1); j++)
           {
                cout<<"*";
           }

           cout<<endl;
     } 

    return 0;

}