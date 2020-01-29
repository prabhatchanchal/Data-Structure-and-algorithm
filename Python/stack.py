''' 
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
'''

from os import system
class Stack:
    def __init__(self,size):
        self.stack=[]
        self.top=-1
        self.capacity=size
    def display(self):
        print("Capacity : ",self.capacity)
        print("Filled  : ",self.top+1)
        for i in range(self.top,-1,-1):
            print()
            print("|",self.stack[i],"|\n--")
    def push(self):
        if self.top==self.capacity:
            print("Overflow")
        else:
            data=int(input("Enter number push in stack : "))
            self.stack.append(data)
            self.top+=1
    def pop(self):
        if self.top==-1:
            print("Underflow")
        else:
            return self.arr.pop()
if __name__=="__main__":
    system("clear")
    size=int(input("Enter size of the stack "))
    stack=Stack(size)
    while True:
        system("clear")
        print("\tChoose the options ")
        print("\t1. Push element in stack")
        print("\t2. Pop element from stack")
        print("\t3. Show current stats of stack")
        print("\t4. Exit")
        options=int(input("Choose from 1-4 : "))
        if options==1:
            stack.push()
        elif options==2:
            stack.pop()
        elif options==3:
            stack.display()
        elif options==4:
            break
        else:
            print("Choose right option...")
        input("Press enter to continue...")
