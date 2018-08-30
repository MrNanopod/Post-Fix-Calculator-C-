/****************************************************************************
* Project 7: pgm7.cpp - Program 7 uses updated versions of our calculator.h
* 						and calculator.cpp files from projects 5 & 6
*						to create a post-fix calculator.
*
* Programmer: Jelani Fraser 
*
* Due Date: 12/9/16
*
* EGRE 246 Fall 2016
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description:  Below is the driver program, main.cpp, that generates a 
*				user-interface for the post-fix calculator.
*
* Inputs: User inputs operands for the calculator
*
* Output: 	Program outputs the results of the operations and detects syntax
*			errors, or unsupported operands.
*
***************************************************************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include "Calculator.h"

bool str2double(string&, double&);

int main(void)
{
	Calculator calc;
	string s;
	double d;
	int state = 0;
	
	calc.setInitialState();
	cout << "RPN calculator using postfix notation" << endl;
	while(state != 4){
		cout << "Next: ";
		cin >> s;
		cout << endl;
		if(str2double(s, d)){
			calc.enter(d);
			calc.prt();
		}
		else{
			state = calc.getState();
			if (state == 0){
				//supportedChars = {"=", "c", "C", "x", "X"};
				if (s.length() == 1){
					if (s == "=")
						calc.prt();
					else if (s == "+" || s == "-" || s == "/" || s == "*")
						cout << "Empty Stack!" << endl << endl;
					else if (s == "c" || s == "C"){
						calc.clear();
						cout << endl;
					}
					else if (s == "x" || s == "X"){
						state = 4;
					}
					else
						cout << "Syntax Error!" << endl << endl;
				}
				if (s.length() > 1){
					cout << "Syntax Error!" << endl << endl;
				}
			}
			if (state == 1){
				//supportedChars = {"+", "-", "*", "=", "c", "C", "x", "X"};
				if (s.length() == 1){
					if (s == "+"){
						calc.add();
						calc.prt();
					}
					else if (s == "-"){
						calc.sub();
						calc.prt();
					}
					else if (s == "*"){
						calc.mult();
						calc.prt();
					}
					else if (s == "/")
						cout << "Divide by Zero!" << endl << endl;
					else if (s == "=")
						calc.prt();
					else if (s == "c" || s == "C"){
						calc.clear();
						cout << endl;
					}
					else if (s == "x" || s == "X"){
						state = 4;
					}
					else
						cout << "Syntax Error!" << endl << endl;
				}
				if (s.length() > 1){
					cout << "Syntax Error!" << endl << endl;
				}
			}
			if (state == 2){
				//supportedChars = {"+", "-", "*", "/", "=", "c", "C", "x", "X"};
				if (s.length() == 1){
					if (s == "+"){
						calc.add();
						calc.prt();
					}
					else if (s == "-"){
						calc.sub();
						calc.prt();
					}
					else if (s == "*"){
						calc.mult();
						calc.prt();
					}
					else if (s == "/"){
						calc.div();
						calc.prt();
					}
					else if (s == "=")
						calc.prt();
					else if (s == "c" || s == "C"){
						calc.clear();
						cout << endl;
					}
					else if (s == "x" || s == "X"){
						state = 4;
					}
					else
						cout << "Syntax Error!" << endl << endl;
				}
				if (s.length() > 1){
					cout << "Syntax Error!" << endl << endl;
				}
			}
			if (state == 3){
				//supportedChars = {"=", "c", "C", "x", "X"};
				if (s.length() == 1){
					if (s == "+" || s == "-" || s == "/" || s == "*")
						cout << "Only One Answer on Stack!" << endl << endl;
					else if (s == "=")
						calc.prt();
					else if (s == "c" || s == "C"){
						calc.clear();
						cout << endl;
					}
					else if (s == "x" || s == "X"){
						state = 4;
					}
					else
						cout << "Syntax Error!" << endl << endl;
				}
				if (s.length() > 1){
					cout << "Syntax Error!" << endl << endl;
				}
			}
			if (state == 4){
				cout << "Goodbye!" << endl;
			}
		}
	}
}


bool str2double(string& term, double& operand)
{
  char* ptr;
  operand = strtod(term.c_str(), &ptr);
  return (ptr == (term.c_str()+term.length()));
}