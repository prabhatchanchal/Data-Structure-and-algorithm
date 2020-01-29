/*
        author : Prabhat kumar
        date : 28 jan 2020
Design, Develop and Implement a menu driven Program for the following operations on
STACK of Integers (Array Implementation of Stack with maximum size MAX)
a. Push an Element on to Stack
b. Pop an Element from Stack
c. Demonstrate how Stack can be used to check Palindrome
d. Demonstrate Overflow and Underflow situations on Stack
Display the status of Stack
f. Exit
Support the program with appropriate functions for each of the above operations
*/

import java.util.*;
import java.util.*;  
class Stack{
      private int[] stack;
      private int capcity;
      private int top;
    public Stack(int si){
         stack=new int[si];
           capcity=si;
           top=-1;
           }
    public void display(){
         System.out.println("Capacity : "+capcity);
            System.out.println("Filled : "+(top+1));
        for(int i=top; i>=0; i--){
           
        System.out.println("|"+stack[i]+"|"+"\n--");
        }
    }
    public void push(){
        char conferm='y';
        while(conferm=='y'){
            int data;
        System.out.println("\t Enter data to insert ");
        Scanner sc = new Scanner(System.in);
        data=sc.nextInt();
        top++;
        stack[top]=data;
        System.out.println("Do you want to insert more [y/n]");
        conferm=sc.next().charAt(0);
        }
    }
    public int pop(){
         
            int data;
        System.out.println("\t Enter pos to Delete ");
        Scanner sc = new Scanner(System.in);
        data=sc.nextInt();
        int temp=stack[top];
        stack[top]=0;
        top--;
        return temp;
      
    }
}
public class Main
{
   
	public static void main(String[] args) {
		int num;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the Capacity of the stack");
		num=sc.nextInt();
		Stack stack=new Stack(num);
		System.out.print("\033\143");
		while(true){
		System.out.println("\n\t1. Push data the Stack");
		System.out.println("\t2. Pop data in Stack");
		System.out.println("\t3. Print Stack");
		System.out.println("\t4. Exit");
		    int options=sc.nextInt();
		    switch(options){
		        case 1:
		            stack.push();
		            break;
		        case 2:
		            stack.pop();
		            break;
		        case 3:
		            stack.display();
		            break;
		        case 4:
		            System.exit(0);
		        default: System.out.println("Invalid options");
		    }
		}
		
	}


}
