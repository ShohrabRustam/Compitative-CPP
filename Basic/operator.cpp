#include <iostream> 
using namespace std;
int main()
{
    int n=17;
    int m=2;
    cout<<"Opertor: "<<endl;
    cout<<"+ Opertor: "<<m+n<<endl;
    cout<<"- Opertor: "<<m-n<<endl;
    cout<<"* Opertor: "<<m*n<<endl;
    cout<<"/ Opertor: "<<m/n<<endl;
    cout<<"% Opertor: "<<m%n<<endl;
    cout<<"Relational Operator : "<<endl;
    cout<<"== Opertor: "<<(bool)(m==n)<<endl;
    cout<<"> Opertor: "<<(bool)(m>n)<<endl;
    cout<<"< Opertor: "<<(bool)(m<n)<<endl;
    return 0;
}