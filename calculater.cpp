#include <iostream>
using namespace std;
int main(){
 char op;
 int num1, num2;
 cout<<"choose the operation you want ";
 cin>>op;
 cout<<"enter two number ";
 cin>>num1>>num2;
 switch(op)
 {
 case '+' :
  cout<<num1+num2;

  break;
  case '-':
  cout<<num1+num2;
  
  break;
  case '*':
  cout<<num1+num2;
  
  break;
  case '/':
  cout<<num1+num2;
  
  break;
 
 default:
  break;
  }


}