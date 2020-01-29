'''
            author : Prabhat kumar
            date : 28 jan 2020
        Fully dynamic array implemented in python
        Design, Develop and Implement a menu driven Program for the following Array operations
a. Creating an Array of N Integer Elements
b. Display of Array Elements with Suitable Headings
c. Inserting an Element (ELEM) at a given valid Position (POS)
d. Deleting an Element at a given valid Position(POS)
e. Exit
'''
from os import system
class Array:
    def __init__(self,size):
        self.size=size;
        self.arr=[0 for i in range(size)]
    def print_all(self):
        for i in range(len(self.arr)):
            print("Index ",i+1,"| data : ",self.arr[i])
    def insert(self):
        data=int(input("Enter the data to insert : "))
        pos=int(input("Enter position to insert : "))
        if self.arr[pos-1]!=0:
            print("Already filled! do you want to replace[y/n] : ",end="")
            confermation=input()
            if confermation=="y":
                self.arr[pos-1]=data
                return
        self.arr[pos-1]=data
    def delete(self):
        pos=int(input("Enter position to delete"))
        if pos-1>=size or self.arr[pos-1]==0:
            print("Cannot delete position out of bound or there is no data")
        else:
            self.arr[pos-1]=0
    def resize(self):
        num=int(input("Enter new size of arr "))
        if num<len(self.arr):
            self.arr=self.arr[:num]
        else:
            self.arr=self.arr+[0 for i in range(num-len(self.arr))]
        
if __name__=="__main__":
    size=int(input("Enter the size of array "))
    array=Array(size)
    while True:
        print("\t1. Print the Array ")
        print("\t2. Insert data in Array ")
        print("\t3. Delete data in Array ")
        print("\t4. Show the size of the array")
        print("\t5. Resize the Array ")
        print("\t6. Exit ")
        options=int(input("Choose from above(1-6) : "))
        if options==1:
            array.print_all()
        elif options==2:
            array.insert()
        elif options==3:
            array.delete()
        elif options==5:
            array.resize()
        elif options==4:
            print("Size of arra is ",array.size)
        elif options==6:
            break
        else:
            print("Wrong options selected \n Choose right option")
        input("Press Enter to continue")
        system("clear")
    
