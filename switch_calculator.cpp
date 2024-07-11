#include<iostream>
using namespace std;
int main() {
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"       WELCOME TO MY CALCULATOR"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  float a , b;
  cout<<"Use symbols for operations and x for exit "<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"Enter  the first number: ";
cin>>a ;
  cout<<"Enter  the second number:";
cin>>b;
char op;
while (1){
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"Enter the operation-> ";
cin>>op;
switch(op)
{
  case 'x': 
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"<   Thankyou for using our calculator   >"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  exit(0);
  
  case '+': cout<<"sum = "<<a+b<<endl;
  break;
  case '-': cout<<"difference = "<<a-b<<endl;
  break;
  case '*': cout<<"product = "<<a*b<<endl;
  break;
  case '/': cout<<"division = "<<a/b<<endl;
  break;
  default: cout<<"please enter a valid operation"<<endl;
  break;
}
}
return 0;
}