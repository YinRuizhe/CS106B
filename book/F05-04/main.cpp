/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
#include <cctype>
#include <string>
#include <iostream>
#include "stack.h"
#include "error.h"
#include "strlib.h"


using namespace std;

void applyOperator(char op,Stack<double> &operandStack);
void helpCommand();
int main()
{
    cout<<"RPN Calculator Simulation (type H for help)"<<endl;
    Stack<double> operandStack;
    while(true){
        string line=getLine("> ");
        if(line.length()==0) line="Q";
        char ch =toupper(line[0]);
        if(ch=='Q'){
            break;
        } else if (ch=='C'){
            operandStack.clear();
        } else if (ch=='H'){
            helpCommand();
        } else if(isdigit(ch)){
            operandStack.push(stringToReal(line));
        } else {
            applyOperator(ch,operandStack);
        }
    }
    return 0;
}
void applyOperator(char op,Stack<double> &operandStack){
    double result;
    double rhs=operandStack.pop();
    double lhs=operandStack.pop();
    switch(op){
    case '+': result=lhs+rhs;break;
    case '-': result=lhs-rhs;break;
    case '*': result=lhs*rhs;break;
    case '/': result=lhs/rhs;break;
    default: error("Illegal operator");
    }
    cout <<result<<endl;
    operandStack.push(result);
}

void helpCommand(){
    cout<< "Enter expressions in Reverse Polish Notation," <<endl;
    cout<< "in which operators follow the oprands to which"<<endl;
    cout <<"they apply. Each line consists of a number, an"<<endl;
    cout <<"operator, or one of the following commands:"<<endl;
    cout <<" Q -- Quit the program"<<endl;
    cout <<" H -- Display this help message"<<endl;
    cout <<" C -- Clear the calculator stack"<<endl;
}
