#include <iostream>
using namespace std;
//@return 0 
//input int P,T,R  S.I = P*T*R/100 
int main()
{
    int P;
    cout << "Enter Principal : "<<endl;
    cin >> P;
    cout << "Enter Time : "<<endl;
    int T;
    cin >> T;
    int R;
    cout << "Enter Rate : "<<endl;
    cin >> R;
    float SI;
    SI= (float)(P*T*R)/100;
    cout<<"S.I. is : "<<SI<<endl;
    return 0;
}