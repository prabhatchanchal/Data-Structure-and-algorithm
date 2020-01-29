/*
      author : Prabhat kumar
      date :28 jan 2020
      
      Check if string is palindrome or not 
      stack is self made
 */

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <limits.h>
using namespace std;
class stack{
    public:
    char st[100];
    int size;
    stack(){size=0;}
    void push(char p){
        size++;
        st[size]=p;
        
    }
    char top(){
        return st[size];
    }
    char pop(){
        size--;
    }
} ;
int main()
{
   cout<<"Enter the string : ";
    stack  s;
    string check;
    getline(cin, check);
    int size=0;
    for(char &c:check){
        s.push(c);
        size++;
    }
    for(char &c:check){
        // cout<<s.top()<<endl;
        if(c!=s.top())break;
        s.pop();
        size--;
    }

    if(size)cout<<"This is not Palindrome\n";
    else cout<<"this is Palindrome\n";
    return 0;
}
