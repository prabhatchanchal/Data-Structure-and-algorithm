/* 

      Author : Prabhat kumar
      Date : 12-feb-2020
      
*/
#include <stack>
#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;
bool operand(const char i){
    char a[]={'0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
    'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
    'U', 'V', 'W', 'X', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
    'r', 's', 't', 'u', 'v', 'w', 'x', 'z' };
    for(char p:a){
        if(i==p)return true;
    }
    return false;
}
bool ooperator(const char i){
    if(i=='+' or i=='-' or i=='*' or i=='/' or i=='^')return true;
   return false;
}
int precedence(char symbol)
{
	if(symbol == '^')/* exponent operator, highest precedence*/
		return(3);
	else if(symbol == '*' || symbol == '/')
		return(2);
	else if(symbol == '+' || symbol == '-')    
		return(1);
	else return 0;
}
string infix_to_postfix(string question){
    stack <char> st;
    st.push('(');
    //question="(1+2)*(3-9)";
    string answer;
    question+=")";
    
         for(const char&i:question){
        //check 3:
        if(operand(i))
                 answer+=i; 
        //check 4:
        else if(i=='(')
                 st.push('(');
        //check 5:
        else if (ooperator(i)){
                   while(precedence(st.top())>=precedence(i)){
                       answer+=st.top();
                       st.pop();
                   }
                   st.push(i);
                }
        //check 6:
        else if(i==')'){
                while(st.top()!='('){
                    answer+=st.top();
                    st.pop();
                }
                st.pop();
            }
        }
  
    return answer;
}
string reverse(string s){
    string str;
    int len=s.length();
    for(int i=len-1; i>=0; i--){
        if(s[i]==')'){
            str+='(';
            continue;
        }
        if(s[i]=='('){
            str+=')';
            continue;
        }
        str+=s[i];
    }
    return str;
}
string infix_to_prefix(string que){
    que=reverse(que);
    que=infix_to_postfix(que);
    que=reverse(que);
    return que;
}
int evaluate(string que){
    stack <int> st;
    for(char i:que){
        int num=i-48;
        if(operand(i))st.push(i-48);//',cout<<"num "<<num<<endl;;
        if(ooperator(i)){
            int b=st.top();
            st.pop();
            int a=st.top();
            st.pop();
            int temp=0;
            switch(i){
                case '+':
                    temp=(a+b);
                    break;
                case '-':
                    temp=(a-b);
                    break;
                case '*':
                    temp=(a*b);
                    break;
                case '/':
                    temp=(a/b);
                    break;
                case '^':
                    temp=(pow(a,b));
                    break;
            }
            st.push(temp);
            // cout<<"temp "<<temp<<endl;
        }
    }
    return st.top();
}

int main()
{
    string ans="5+4*(2^3-5)^(1+1*2)-8";
    // cout<<"Postfix "<<infix_to_postfix(ans)<<endl;
    cout<<"Postfix "<<evaluate(infix_to_postfix(ans))<<endl;
    
    return 0;
}
