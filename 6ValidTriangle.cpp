#include <iostream>
using namespace std;
int main()
{
    int side1,side2,side3;
    cout<<"Enter side of the triangle"<<endl;
    cin>>side1>>side2>>side3;
    if(side1+side3>side2  && side1+side2>side3 && side2+side3>side1){
    cout<<"Triangle is Valid triangle"<<endl;
    }else{
    cout << "Triangle is not valid"<<endl;
    }
    return 0;
}