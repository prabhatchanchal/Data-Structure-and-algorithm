/*
    author : Prabhat kumar
    date : 28 jan 2020
    check if a string is palindrome or not
    this work for numbers too
 */
 
 #include <stack>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{  
    cout<<"Enter the string : ";
    stack <char> s;
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
