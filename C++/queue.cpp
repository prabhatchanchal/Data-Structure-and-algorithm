/* 

    Author : Prabhat kumar
    date : 05 feb 2020
    
    
    
    
    NOTE : For Unix or Unix style OS change cls to clear for clear the screen
  */
#include <iostream>
#include <stdlib.h>
using namespace std;
class Queue{
   
    int front;
    int rear;
    int *queue;
    int size;
    public:
    Queue(int si){
        queue=new int[si];
        front=0;
        rear=-1;
        size=si;
    }
    bool enque(int data){
        rear+=1;
        if(rear==size){
            cout<<"\t Overflow"<<endl;
            rear--;
            return false;
        }
            queue[rear]=data;
            return true;
    }
    int deque(){
        if(front==-1 or front==size)cout<<"\t Underflow"<<endl;
        else{
            int item;
            item=queue[front];
            front+=1;
            return item;
        }
        
    }
    bool isEmpty(){
        if(rear<size)return true;
        return false;
    }
    bool isFull(){
        if(rear==size)return true;
        return false;
    }
    void print(){
        bool check=isEmpty();
        if(!check)
      { cout<<"\t queue is "<<endl<<endl<<"\t Front | ";
        for(int i=front; i<rear+1; i++)cout<<queue[i]<<"<--";
        cout<<" |Rear";}
        else cout<<"\t Queue is empty"<<end;
        
    }
       
};

int main()
{
    cout<<"\t Enter the size of queue "<<endl;
    cout<<"\t ";int siz;cin >> siz;
    Queue queue(siz);
    system("cls");
    while(1){
        getchar();
        system("cls");
        cout<<"\t1. Insert an element in queue "<<endl;
        cout<<"\t2. delete an element from queue "<<endl;
        cout<<"\t3. Check if queue is empty or full "<<endl;
        cout<<"\t4. Print queue "<<endl;
        cout<<"\t5. Exit. "<<endl;
        int options;
        cout<<"\t";cin>>options;
        switch(options){
            case 1:
                {
                    char confermation='y';
                while(confermation=='y'){
                    cout<<"\t Enter data to insert "<<endl<<"\t";
                    int data;
                    cin>>data;
                    bool p=queue.enque(data);
                    if(p)
                    cout<<"\t Successfully inserted"<<endl;
                    else break;
                    cout<<"\t Do you want to insert more [y/n]";
                    cin>>confermation;
                    confermation=(char)tolower(confermation);
                } break;
                }
            case 2:
            {char confermation='y';
            while(confermation=='y'){
                queue.deque();
                cout<<"\t One element is removed from queue "<<endl;
                cout<<"\t Do you want to insert more [y/n]";
                cin>>confermation;
                confermation=(char)tolower(confermation);
            }
            break;
            }
            case 3:
            if (queue.isEmpty())cout<<"\t Queue have space for insertion"<<endl;
            else cout<<"\t Queue is full"<<endl;
            break;
            case 4:
            queue.print();
            break;
            case 5:
            exit(0);
        }
    }

    return 0;
}
