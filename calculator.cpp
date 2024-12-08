#include<iostream>
using namespace std;


int main() 
{
double num1, num2;
char operation;
bool keepRunning = true;

cout<<"Simple Calculator\n";
cout<<"Enter two numbers and an operator (+, -, *, /).\n";
cout<<"Type 'q' to quilt.\n\n";


while(keepRunning) {
    cout<< "Enter first number (or 'q' to quit): ";
    cin>>num1;

    if(cin.fail()){
        cin.clear();

        string input;
        cin >> input;
        if(input == "q" || input == "Q"){
keepRunning = false;
break;
        }
        else{
            cout<<"Invalid input! Try again.\n";
            continue;
        }
    }
    cout<<"Enter an operator(+, -, *, /)";
    cin>>operation ;
    cout<<"Enter Second Number: ";
    cin>>num2;

    switch(operation){
        case '+':
        cout<<"Result: "<<num1+num2<<endl;
        break;
         case '-':
        cout<<"Result: "<<num1-num2<<endl;
        break;
         case '*':
        cout<<"Result: "<<num1+num2<<endl;
        break;
         case '/':
         if(num2==0){
            cout<<"Error: Division by zero is not allowed.\n";
         }
      else{
          cout<<"Result: "<<num1+num2<<endl;
      }
        break;
        default: 
        cout<<"invalid operator! Please use +, -, *, or /.";
        break;

        cout<<"--------------------------------\n";


    }
    cout <<"Goodbye!\n";
    return 0;

}





}