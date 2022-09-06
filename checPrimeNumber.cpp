#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag =0; 
    for(int i=1; i<n/2; i++){
        if(n%i==0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<n<<" is Prime "<<endl;
    }else{
        cout<<n<<" is not Prime "<<endl;
    }
}