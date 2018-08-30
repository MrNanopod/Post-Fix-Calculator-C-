/****************************************************************************
 * Class Name: Calculator.h
 *
 * Description: The Calculator class represents a simple calculator that is able to add, subtract
 * divide, and multiply operands of type double and place the answer in a stack. It can also clear 
 * the previous answers and is able to directly enter a value to the answer stack. 
 *
 * Programmer: Jelani Fraser
 * 
 * Constructors: Calculator()
 * Destructors: N/A
 * 
 * Member Functions
 * public:
 * prt(void)-  				Prints out the calculators last answer. The last answer is at the top
 * 							of the answer stack.
 * enter(double)- 			Takes a single operand and pushes it to the top of the answer
 * 							stack.
 * clear(void)-				Clears the answer stack and sets the top to 0.
 * add()-					Adds the last two values of the answer stack.
 * add(double)-				Adds the passed operand to the last answer at the top of the stack.
 * add(double,double)-		Adds two passed operands and pushes the result to the top of the answer
 *							stack.
 * sub()-					Subtracts the last two values of the answer stack.
 * sub(double)-				Subtracts the passed operand from the last answer at the top of the stack.
 * sub(double, double)-		Subtracts two operands and pushes the result to the top of the answer
 *							stack.
 * div()-					Divides the last two values of the answer stack.
 * div(double)-				Divides the last answer at the top of the stack by the passed operand.
 * div(double, double)-		Divides two operands and pushes the result to the top of the answer stack.
 * mult()-					Multiplies the last two values of the answer stack.
 * mult(double)-			Multiplies the passed operand to the last answer at the top of the stack.
 * mult(double, double)-	Multiplies two operands and pushes the result to the top of the answer stack.
 * operator=(double)-		Overloads the assignment operator to replicate the behavior of the enter()
 *							and clear() member functions.
 * operator+(double)-		Overloads the addition operator to replicate the behavior of the add()
 *							member functions.
 * operator-(double)-		Overloads the subtraction operator to replicate the behavior of the
 *							sub() member functions.
 * operator/(double)-		Overloads the division operator to replicate the behavior of the div()
 *							member functions.
 * operator*(double)-		Overloads the multiplication operator to replicate the behavior mult()
 *							member function.
 * setInitialState(void)-	Sets answer stack to initial state (Top of stack = 0, Size of stack = 1)
 * getState()-				Gets the current state and returns the value to main
 * protected:
 * operator<<()-			Friend class implemented as a member function to overload the insertion
 *							operator.
 * private:
 * N/A
 *
 * Member Variables
 * public:
 * N/A
 * protected:
 * state:			Reperesents the current state of the stack
 * private:
 * a:				Double used to store previous values of the answer stack.
 * b:				Double used to store previous values of the answer stack
 * answer:			Stack of type double that holds the results of the Calculator class.
 * 
 ***************************************************************************/
#include <iostream>
#include <stack>

#ifndef CALCULATOR_H
#define CALCULATOR_H
using namespace std;
class Calculator
{
public:
  Calculator();
  void prt(void);
  void enter(double);
  void clear(void);
  void add();
  //void add(double);
  //void add(double, double);
  void sub();
  //void sub(double);
  //void sub(double, double);
  void div();
  //void div(double);
  //void div(double, double);
  void mult();
  //void mult(double);
  //void mult(double, double);
  //void operator=(double);
  //void operator+(double);
  //void operator-(double);
  //void operator/(double);
  //void operator*(double);
  void setInitialState(void);
  int getState();
  
 
protected:
  friend std::ostream& operator<< (std::ostream &out, const Calculator &calc);
  int state;
 
private:
  double a;
  double b;
  std::stack<double> answer;
};
#endif