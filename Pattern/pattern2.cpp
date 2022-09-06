/* 
1 1 1 
2 2 2 
3 3 3 
*/
#include <iostream>
using namespace std;
 int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the length of the pattern to be matched"<<endl;
    cin >> n ;
    for(int i=0; i<n; i++)  { 
        for(int j=0; j<n; j++) {
            cout<<i+1<<" ";
        }   
        cout<<endl;
    }
    return 0;
}
