/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of matrix : "<<endl;
    cin>>n;
    for(int i=0; i<n; i++)  {
        for(int j=0; j<n; j++) { 
            cout<<j+1<<" ";   
        }
        cout<<endl;
    }
}