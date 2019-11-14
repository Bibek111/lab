/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "Stack.h"
using namespace std;
Stack::Stack()
{
  topp =-1;
}

Stack::~Stack(){}

void Stack::push(int element){
if(topp >= MAX_STACK_SIZE -1)
{
  std::cout <<"cannot push"<<element<<"stack is full";
}
else
{
  topp++;
  this->elements[topp]=element;
}
}

int Stack::pop()
{
  if(topp<0)
  {
    std::cout <<"cannot pop an element from ana empty stack";
  }
  else{
    return elements[topp--];
  }
}

int main()
{

}
