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
*/

using System;
using System.Collections.Generic;
namespace std{
     class Stack{
      private int[] stack;
      int capacity;
      int TOP;
     public Stack(int size){
       stack=new int[size];
       capacity=size;
       TOP=-1;
     }
     public void print (){
       Console.WriteLine();
    if (TOP == -1)
      Console.WriteLine("\tstack is empty");
    for (int i = TOP; i >= 0; i--)
          Console.WriteLine("\t|{0}|\n\t--",stack[i]);
  }
     public void push (){
    TOP += 1;
    if (TOP == capacity){
	    Console.WriteLine("\tOverflow");
	   TOP -= 1;
	    return;
      }
    Console.WriteLine("\tEnter element to insert in stack");
    int data;
    Console.Write("\t");
    data=Convert.ToInt32(Console.ReadLine());
    stack[TOP] = data;
    Console.Write("\tSucessfully inserted\n");
  }
  public int pop (){
    if (TOP == -1){
	Console.WriteLine( "\tUderflow");
	return 0;
      }
    int temp;
    temp = stack[TOP];
    stack[TOP] = 0;
    TOP -= 1;
    Console.WriteLine("\t{0} poped from stack\n",temp);
    return temp;
  }
  public void stat ()
  {
    Console.WriteLine("\tCapacity : {0}",capacity);
    Console.WriteLine("\tFilled : {0}",TOP+1);
    print();
  }
};

class MainClass {
  public static void Main (string[] args) {
    Console.Write(" \tEnter size of stack\n\t");
    int size=Convert.ToInt32(Console.ReadLine());
          Stack stack=new Stack(size);
     while(true){
         char conferm=Convert.ToChar(Console.Read());
         Console.Clear();
          Console.WriteLine("\t1. Push element in Stack");
          Console.WriteLine("\t2. Pop element from Stack");
          Console.WriteLine("\t3. Show current stat of Stack");
          Console.WriteLine("\t4. Exit");
          int ops=Convert.ToInt32(Console.ReadLine());
          int a=0;
          switch(ops){
            case 1:
            stack.push();
            break;
            case 2:
            stack.pop();
            break;
            case 3:
            stack.stat();
            break;
            case 4:
            a=6;  
            break;
          }
          if(a==6)break;
        }
  }
}
}
