/****************************************************************************
* Project 7: Calculator.cpp
*
* Programmer: Jelani Fraser
*
* Due Date: 12/9/16
*
* EGRE 246 Fall 2016
*
* I pledge I neither gave nor received unauthorized aid on this program.
*
* Description: C++ code that defines the behavior of the Calculator class.
* 
*
***************************************************************************/
#include "Calculator.h"

using namespace std;

 Calculator::Calculator() : a(0), b(0)
 {
 }
 std::ostream& operator<< (std::ostream &out, const Calculator &calc)
{
	if (calc.answer.top() == 0)
		out << "ANSWER: " << '0' << endl << endl;
    else
		out << "ANSWER: " << calc.answer.top() << endl << endl;
    return out;
}
void Calculator::setInitialState(void)
{
	answer.push(0);
}
int Calculator::getState(void)
{
	if ((answer.top() == 0.0) && (answer.size() == 1.0)){
		state = 0;
		return state;
	}
	else if ((answer.top() == 0.0) && (answer.size() > 1.0)){
		state = 1;
		return state;
	}
	else if ((answer.top() != 0.0) && (answer.size() > 1.0)){
		state = 2;
		return state;
	}
	else if ((answer.top() != 0.0) && (answer.size() == 1.0)){
		state = 3;
		return state;
	}
}
/*void Calculator::operator=(double op) 
{
  if (op != 0){
	answer.push(op);
    cout << " ENTER: " << answer.top() << endl;
   }
   else{
	while(answer.size() > 0){
		answer.pop();
	}
	answer.push(0);
	cout << "CLEARED ANSWER" << endl;
   } 
}
void Calculator::operator+(double op){
	a = answer.top();
	answer.pop();
	answer.push(a + op);
	cout << " ENTER: + " << op << endl;
}
void Calculator::operator-(double op){
	a = answer.top();
	answer.pop();
	answer.push(a - op);
	cout << " ENTER: - " << op << endl;
}
void Calculator::operator/(double op){
	a = answer.top();
	answer.pop();
	answer.push(a / op);
	cout << " ENTER: / " << op << endl;
}
void Calculator::operator*(double op){
	a = answer.top();
	answer.pop();
	answer.push(a * op);
	cout << " ENTER: * " << op << endl;
}*/
 void Calculator::prt(void)
 {
	if (answer.top() == 0)
		cout << "ANSWER: " << '0' << endl << endl;
	else
		cout << "ANSWER: " << answer.top() << endl << endl;
 }
 void Calculator::enter(double op)
 {
   answer.push(op);
   cout << " ENTER: " << answer.top() << endl;
 }
 void Calculator::clear(void)
 {
	while(answer.size() > 0){
		answer.pop();
	}
	answer.push(0);
	cout << "CLEARED ANSWER" << endl;
 }
  void Calculator::add()
 {
	b = answer.top();
	answer.pop();
	a = answer.top();
	answer.pop();
	answer.push(a + b);
	cout << " ENTER: next on stack " << a << " + top of stack " << b << endl;
 }
/* void Calculator::add(double op)
 {
	a = answer.top();
	answer.pop();
	answer.push(a + op);
	cout << " ENTER: + " << op << endl;
 }
 void Calculator::add(double op1, double op2)
 {
	answer.push(op1 + op2);
	cout << " ENTER: " << op1 << " + " << op2 << endl;
 }*/
 void Calculator::sub()
 {
	b = answer.top();
	answer.pop();
	a = answer.top();
	answer.pop();
	answer.push(a - b);
	cout << " ENTER: next on stack " << a << " - top of stack " << b << endl;
 }
/* void Calculator::sub(double op)
 {
    a = answer.top();
	answer.pop();
	answer.push(a - op);
	cout << " ENTER: - " << op << endl; 
 }
 void Calculator::sub(double op1, double op2)
 {
	answer.push(op1 - op2);
	cout << " ENTER: " << op1 << " - " << op2 << endl;
 }*/
 void Calculator::div()
 {
	b = answer.top();
	answer.pop();
	a = answer.top();
	answer.pop();
	answer.push(a / b);
	cout << " ENTER: next on stack " << a << " / top of stack " << b << endl;
 }
/* void Calculator::div(double op)
 {
	a = answer.top();
	answer.pop();
	answer.push(a / op);
	cout << " ENTER: / " << op << endl;
 }
 void Calculator::div(double op1, double op2)
 {
	answer.push(op1 / op2);
	cout << " ENTER: " << op1 << " / " << op2 << endl;
 }*/
 void Calculator::mult()
 {
	b = answer.top();
	answer.pop();
	a = answer.top();
	answer.pop();
	answer.push(a * b);
	cout << " ENTER: next on stack " << a << " * top of stack " << b << endl;
 }
/* void Calculator::mult(double op)
 {
	a = answer.top();
	answer.pop();
	answer.push(a * op);
	cout << " ENTER: * " << op << endl;
 }
 void Calculator::mult(double op1, double op2)
 {
	answer.push(op1 * op2);
	cout << " ENTER: " << op1 << " * " << op2 << endl;
 }*/