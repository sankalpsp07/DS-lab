#include<bits/stdc++.h>
using namespace std; 

struct node{
	int coeff;
	int expon;
	struct node *next;
	
};

void print(struct node *head3){
	struct node * temp =head3;

	while(temp!=NULL){ 
        cout<< temp->coeff<<"x^"; 
        cout<< temp->expon;
        
		temp=temp->next;

		if(temp!=NULL){
			cout<<"+";
		}
		else{
		cout<<endl;
        }
	}
}

struct node *insert(struct node *head,float coeff,int expon){
	
	struct node *temp;
	struct node *newp=(struct node *)malloc(sizeof(struct node));
	newp->coeff=coeff;
	newp->expon=expon;
	newp->next=NULL;
	
	if(head==NULL || expon >head->expon)
	{
	newp->next=head;
	head=newp;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL && temp->next->expon>=expon)
		{
			temp=temp->next;
		}
		newp->next=temp->next;
		temp->next=newp;
	
	}
		return head;
	
}


struct node *create(struct node *head){
	int n,coeff,expon; 
    cout<<"Enter no. of terms in poly: "; 
    cin>>n; 
    for(int i=0;i<n;i++){
        
        cout<<"Enter the coeff: "<<endl;
        cin>>coeff; 
        
        cout<<"Enter the expon: "<<endl;
        cin>>expon;
        
        
        head= insert(head,coeff,expon);
    }
    return head; 
}
	
void addPolynomial(struct node *head1,struct node *head2){
	struct node *ptr1=head1;
	struct node *ptr2=head2;
	struct node *head3=NULL;
	
	while(ptr1!=NULL && ptr2!=NULL){

      if(ptr1->expon==ptr2->expon){
			head3=insert(head3,ptr1->coeff+ptr2->coeff,ptr1->expon);
			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}
		else if(ptr1->expon>ptr2->expon){
			head3=insert(head3,ptr1->coeff,ptr1->expon);
			ptr1=ptr1->next;
		}
		else if(ptr2->expon>ptr1->expon){
			head3=insert(head3,ptr2->coeff,ptr2->expon);
			ptr2=ptr2->next;
		}	
	}

	while(ptr1!=NULL){
		head3=insert(head3,ptr1->coeff,ptr1->expon);
		ptr1=ptr1->next;
	}
		while(ptr2!=NULL){
		head3=insert(head3,ptr2->coeff,ptr2->expon);
			ptr2=ptr2->next;
	}
 
    cout<<"Resultant Polynomial after addition: "; 
	print(head3);
	
}

void mulPolynomial(struct node *head1,struct node *head2){
	struct node *ptr1=head1;
	struct node *ptr2=head2;
	struct node *head3=NULL;

    while(ptr1!=NULL){
     ptr2=head2;
 
    while(ptr2!=NULL){

       head3=insert(head3,ptr1->coeff*ptr2->coeff,ptr1->expon+ptr2->expon);
       ptr2=ptr2->next;
    }
 
       ptr1=ptr1->next;
 
 }
 
 cout<<"Resultant Polynomial after multiplication:";
 print(head3); 
}

int main()
{
   struct node* head1=NULL;
   cout<<"For first poly- "<<endl;
   head1=create(head1);
   
   cout<<"For Second poly- "<<endl;
   struct node* head2=NULL;
   head2=create(head2);
  
  addPolynomial(head1,head2); 
  mulPolynomial(head1, head2); 
    

	return 0;
}
