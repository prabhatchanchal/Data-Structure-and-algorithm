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


import java.util.*;
class Array{
      private int[] arr;
      private int size;
    public Array(int si){
         arr=new int[si];
           size=si;
           }
    public void print(){
        for(int i=0; i<size; i++){
        System.out.print("index : "+(i+1));
        System.out.println(" | data : "+arr[i]);
        }
    }
    public void insert(){
        char conferm='y';
        while(conferm=='y'){
            int pos,data;
        System.out.println("\t Enter data to insert ");
        Scanner sc = new Scanner(System.in);
        data=sc.nextInt();
        System.out.println("\nEnter position to insert ");
        pos=sc.nextInt();
        arr[pos-1]=data;
        System.out.println("Do you want to insert more [y/n]");
        conferm=sc.next().charAt(0);
        }
    }
    public void delete(){
         char conferm='y';
        while(conferm=='y'){
            int pos;
        System.out.println("\t Enter pos to Delete ");
        Scanner sc = new Scanner(System.in);
        pos=sc.nextInt();
        int i=pos-1;
        for(; i<size-1; i++)arr[i]=arr[i+1];
        arr[i]=0;
        System.out.println("Do you want to delete more [y/n]");
        conferm=sc.next().charAt(0);
        }
    }
    public void Show_size(){
        System.out.println("Size of the array is "+size);
    }
    public void resize(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter new size of array");
        int newsize=sc.nextInt();
        int newItems[] = new int[newsize];
        for(int i=0; i<size; i++){newItems[i]=arr[i];}
        arr = newItems;
        size=newsize;
    }
}
public class Main
{
   
	public static void main(String[] args) {
		int num;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the size of the array");
		num=sc.nextInt();
		Array ar=new Array(num);
		System.out.print("\033\143");
		while(true){
		System.out.println("\n\t1. Print the Array");
		System.out.println("\t2. Insert data in Array");
		System.out.println("\t3. Delete data from Array");
		System.out.println("\t4. Size of the Array");
		System.out.println("\t5. Resize the Array");
		System.out.println("\t6. Exit");
		    int options=sc.nextInt();
		    switch(options){
		        case 1:
		            ar.print();
		            break;
		        case 2:
		            ar.insert();
		            break;
		        case 3:
		            ar.delete();
		            break;
		        case 4:
		            ar.Show_size();
		            break;
		        case 5:
		            ar.resize();
		            break;
		        case 6:
		            System.exit(0);
		        default: System.out.println("Invalid options");
		    }
		}
		
	}


}
