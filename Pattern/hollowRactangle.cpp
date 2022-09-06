/*
* * * * * * * * * *
*                 *
*                 *
* * * * * * * * * *
*/

#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int row,col;
    cout<<"Enter the number of rows and columns for Pattern: "<<endl;
    cin>>row>>col;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            if(i==0 || j==0 ||i==col-1 ||j==row-1){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl; 
    }
    return 0;
}