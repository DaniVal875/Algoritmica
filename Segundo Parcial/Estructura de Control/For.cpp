#include <iostream>

using namespace std;

int main()
{
    int num=0;
    cout<<"Dame un numero: "<<endl;
    cin>>num;
    for (int num2;num2<=10;num2++){
        cout<<num2<<" * "<<num<<" = "<<num2*num<<"\n";
    }


    return 0;
}