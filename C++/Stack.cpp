/*
              author : Prabhat kumar
              date : 25 jan 2020
              
Design, Develop and Implement a menu driven Program for the following operations on
STACK of Integers (Array Implementation of Stack with maximum size MAX)
a. Push an Element on to Stack
b. Pop an Element from Stack
c. Demonstrate how Stack can be used to check Palindrome
d. Demonstrate Overflow and Underflow situations on Stack
Display the status of Stack
f. Exit


Note : for window cls is used for clear screen
       so while running this program on unix or
       unix style oprating system change cls to
       clear
*/
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
class Stack
{
public:
  int *stack;
  int capacity;
  int TOP;
    Stack (int size) {
    stack = new int[size];
      capacity = size;
      TOP = -1;
  }
  void print (){
	cout<<endl;
    if (TOP == -1)
      cout << "\tstack is empty\n";
    for (int i = TOP; i >= 0; i--)
      cout << "\t|" << stack[i] << "|\n\t--" << endl;
  }
  void push (){
    TOP += 1;
    if (TOP == capacity){
	cout << "\tOverflow\n";
	TOP -= 1;
	return;
      }
    cout << "\tEnter element to insert in stack\n";
    int data;
    cout << "\t";
    cin >> data;
    stack[TOP] = data;
    cout << "\tSucessfully inserted\n";
  }
  int pop (){
    if (TOP == -1){
	cout << "\tUderflow \n";
	return 0;
      }
    int temp;
    temp = stack[TOP];
    stack[TOP] = 0;
    TOP -= 1;
    cout<<"\t"<<temp<<" poped from stack\n";
    return temp;
  }
  void stat ()
  {
    cout << "\tCapacity : " << capacity << endl;
    cout << "\tFilled : " << TOP+1 << endl;
    print();
  }

};

int main ()
{
  int size;
  cout << "\tEnter size of stack\n\t";
  cin >> size;
  Stack stack (size);
  system ("cls");
  while (1)
    {
      system ("cls");
      cout << "\tChoose the options\n";
      cout << "\t1. Push element in stack\n";
      cout << "\t2. Pop element from stack\n";
      cout << "\t3. Show current stats of stack\n";
      cout << "\t4. Exit\n";
      int options;
      cout << "\t";
      cin >> options;
      switch (options)
	{
	case 1:
	  stack.push ();
	  cout << "\t";getch();
	  break;
	case 2:
	  stack.pop ();
	  cout << "\t";getch();
	  break;
	case 3:
	  stack.stat ();
	  cout << "\t";getch();
	  break;
	case 4:
	  exit (0);
	default:
	  cout << "\tYou enterd wrong option\n";
	  cout << "press enter to continue....";
	  getch();
	}
    }
  return 0;
}
