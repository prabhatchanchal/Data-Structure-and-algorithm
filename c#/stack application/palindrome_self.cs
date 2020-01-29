/* 
        author : Prabhat kumar
        date : 28 jan 2020
        
        check if the string is palindrome or not
 */
 using System;
class stack{
     private char [] st;
     private int size;
     public stack(){
         st=new char[100];
         size=0;
     }
     public void push(char p){
        size++;
        st[size]=p;
        
    }
    public  char top(){
        return st[size];
    }
    public  void pop(){
        size--;
    }
};
class HelloWorld {
  static void Main() {
    Console.WriteLine("Enter the string : ");
    stack  s=new stack();
    string check;
    check=Console.ReadLine();
    int size=0;
    foreach (char c in check){
        s.push(c);
        size++;
    }
    foreach (char c in check){
        // cout<<s.top()<<endl;
        if(c!=s.top())break;
        s.pop();
        size--;
    }
 
    if(size>0)Console.WriteLine("This is not Palindrome");
    else Console.WriteLine("this is Palindrome");
  }
}
