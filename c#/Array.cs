/*
      Author : Prabhat kumar
      date : 15-jan-2020
      
Design, Develop and Implement a menu driven Program for the following Array operations
a. Creating an Array of N Integer Elements
b. Display of Array Elements with Suitable Headings
c. Inserting an Element (ELEM) at a given valid Position (POS)
d. Deleting an Element at a given valid Position(POS)
e. Exit
In addition it is resizeable but not like vector it size gets twice. In this the array size get new user define size
*/

using System;
namespace std{
  class Array{
    private int[] array;
    int size;
    public Array(int si){
      array=new int[si];
      size=si;
    }
    public void Print(){
      for(int i=0; i<size; i++){
        Console.WriteLine("Index : {0} | data : {1}",i+1,array[i]);
      }
    }
    public void Insert(){
      int pos,data;
      char conferm='y';
      while(conferm=='y'){
        Console.WriteLine("Enter data to Insert");
        data=Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Enter position to Insert");
        pos=Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Do you want to Insert more[y/n]");
        array[pos-1]=data;
        conferm=Convert.ToChar(Console.ReadLine());
      }
    }
    public void Delete(){
      int pos;
      char conferm='y';
      while(conferm=='y'){
        Console.WriteLine("Enter position to Delete");
        pos=Convert.ToInt32(Console.ReadLine());
        int i=pos-1;
        for(; i<size-1; i++)array[i]=array[i+1];
        array[i]=0;
        Console.WriteLine("Do you want to Delete more[y/n]");
        conferm=Convert.ToChar(Console.ReadLine());
      }
    }
    public void Size(){
      Console.WriteLine("Size of the array is {0}",size);
    }
    public void Resize(){
        Console.WriteLine("Enter new size of array");
        int newSize=Convert.ToInt32(Console.ReadLine());
        int[] newArray=new int[newSize];
        for(int i=0; i<size; i++)newArray[i]=array[i];
        array=newArray;
        size=newSize;
    }
  }
class MainClass {
  public static void Main (string[] args) {
    Console.WriteLine("Enter the size of the array");
        int size=Convert.ToInt32(Console.ReadLine());
        Array arr=new Array(size);
        while(true){
          Console.WriteLine("\t1. Print the Array");
          Console.WriteLine("\t2. Insert data in Array");
          Console.WriteLine("\t3. Delete data from Array");
          Console.WriteLine("\t4. Display size of Array");
          Console.WriteLine("\t5. Resize the Array");
          Console.WriteLine("\t6. Exit");
          int ops=Convert.ToInt32(Console.ReadLine());
          int a=0;
          switch(ops){
            case 1:
            arr.Print();
            break;
            case 2:
            arr.Insert();
            break;
            case 3:
            arr.Delete();
            break;
            case 4:
            arr.Size();
            break;
            case 5:
            arr.Resize();
            break;
            case 6:
            a=6;  
            break;
          }
          if(a==6)break;
        }
  }
}
}
