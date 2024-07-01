#include <iostream>
using namespace std;
int main(){
    double num1, num2;
    char opr;

    cout<<"Enter the operator";
    cin>>opr;
    cout<<"Enter 1st value";
    cin>>num1;
    cout<<"Enter 2nd  value";
    cin>>num2 ;

    switch(opr)
    {
        case '+':
             cout<<num1<<opr<<num2<<"="<<num1+num2;
             break;
        case '-':
             cout<<num1<<opr<<num2<<"="<<num1-num2;
             break;
        case '*':
             cout<<num1<<opr<<num2<<"="<<num1*num2;
             break;
        case '/':
             if(num2==0)
            {
                cout<<"error!";
				}
             else
             {
                cout<<num1<<opr<<num2<<"="<<num1/num2;}
              break;
        default:
             cout<<"invalid operator"<<endl;

    }
}

