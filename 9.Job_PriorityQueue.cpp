# include<bits/stdc++.h>
using namespace std; 
  
struct node{  
    int priority;  
    int info;  
    struct node *next;  
};  

struct node *front = NULL;  
  
void insertQueue(int data,int priority)  
{  
    struct node *temp,*q;  
    temp = (struct node*)malloc(sizeof(struct node));  
    temp->info = data;  
    temp->priority = priority;  

    if(front==NULL||priority<front->priority){  
        temp->next = front;  
        front = temp;  
    }  
    else  
    {  
        q=front;  
        while( q->next!=NULL && q->next->priority<=priority)  
        q=q->next;  
        temp->next = q->next;  
        q->next = temp;  
    }  
}  

int isEmpty(struct node* front){
    if(front == NULL){  
       return 1; 
  }
  return 0; 
}
  
void delQueue(){  
    struct node *temp;  
    if(isEmpty(front)){
         cout<<"Queue Underflow";  
    }
    
    else{  
        temp = front;  
        cout<<"Deleted item is: "<<temp->info<<endl;  
        front = front->next;  
        free(temp);  
    }
}
  
  
void displayQueue(){  
    struct node *ptr;  
    ptr=front;  
    if(isEmpty(front)){
         cout<<"Queue Underflow";  
    }
    else  
    {  
        while(ptr!=NULL){  
            cout<<"Job Info: "<< ptr->info<<endl; 
            cout<<"Priority: "<<ptr->priority<<endl;   
            ptr = ptr->next;  
        }  
    }  
}  

int main(){  

    int info, priority; 
    int choice;
    do{
    cout<<"1)Insert\n2)Delete\n3)Display\n"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    
        switch(choice){
        case 1:
                cout<<"Enter Job:";
                cin>>info;
                cout<<"Enter time: ";
                cin>>priority;
                insertQueue(info,priority);
                break;
        case 2:
                delQueue();
                break;
            
        case 3:
                displayQueue();
                cout<<endl;
                break;
        default:
            cout<<"Please enter 1,2, or 3"<<endl;
        }
    } while(choice!= 4);
    return 0; 
}
