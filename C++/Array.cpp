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

#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
using namespace std;

class Array{
  public:
  int *arr;
  int size;
  Array(int si=10){
    arr=new int[si];
    size=si;
  }
  void print(){
    for(int i=0; i<size; i++)
    cout<<"index : "<<i<<" | data : "<<arr[i]<<endl;
  }
  void insert(){ 
    int pos=0, data=0;
    char confermation='y';
    while(confermation=='y'){
      cout<<"Enter data to insert : ";
      cin>>data;
      cout<<"Enter position to insert : ";
      cin>>pos;
      if(pos>size)cout<<"Invalid position"<<endl;
      else arr[pos]=data;
      cout<<"do you want to insert more[y/n] : ";
      cin>>confermation;
      confermation=tolower(confermation);
    }
  }
  void Delete(){
    int pos=0;
    char confermation='y';
    while(confermation=='y'){
      cout<<"Enter position to Delete : ";
      cin>>pos;
      int i=0;
      for(i=pos; i<size-1; i++)arr[i]=arr[i+1];
      arr[i]=0;
      cout<<"do you want to Delete more[y/n] : ";
      cin>>confermation;
      confermation=tolower(confermation);
    }
  }
  void resize(){
    cout<<"Enter the size of an Array "<<endl;
    size_t new_size;
    cin>>new_size;
     int* newArr = new int[new_size];
    memcpy( newArr, arr, new_size * sizeof(int) );
   delete[] arr;
   arr = newArr;
  for(int i=size; i<size+3; i++)arr[i]=0;
   size=new_size;
  }
  void Size(){
    cout<<"size of Array is : "<<size<<endl;
  }
};
void switch_case(int n,Array* b){
   switch(n){
     case 1:
     b->print();
     break;
     case 2:
     b->insert();
     break;
     case 3:
     b->Delete();
     break;
     case 4:
     b->Size();
     break;
     case 5:
     b->resize();
     break;
     case 6:
     exit(0);
     default: cout<<"Enter a valid number "<<endl;
   }
}

int main() {
  int size;
  cout<<"Enter size of array : ";
  cin>>size;
  Array arr(size);
  while(1){
    int options;
    cout<<"\t1. Print the Array "<<endl;
    cout<<"\t2. Insert data in Array "<<endl;
    cout<<"\t3. Delete data in Array "<<endl;
    cout<<"\t4. Show the size of the array"<<endl;
    cout<<"\t5. Resize the Array "<<endl;
    cout<<"\t6. Exit "<<endl;
    cout<<"Enter the option : ";cin>>options;
    switch_case(options, &arr);
    getchar();
    getchar();
    system("clear");
  }
}
