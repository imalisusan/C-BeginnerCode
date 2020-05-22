#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
	int number;
	int data;
	Node* ptr,*next;
};
class SingleList
{
public:
	Node *head,*current,*tail,*prev;
	SingleList();
	void createnode(Node *value);
	void updatenode(int pos, int value);
	void deletenode(int pos);
	void output();
};

int main()
{
	SingleList s1;
	int num,dat,numb,choice;

	do
	{
		Node* n1 = new Node;

		start:
			cout<<"Please choose an option :\n 1 To add a new node \n 2 To update a node \n 3 Delete a node \n";
			cin>>choice;

			switch(choice)
			{
				case 1:
					cout<<"Enter the number :";
					cin>>num;
					cout<<"Enter the value :";
					cin>>dat;

					n1->number = num;
					n1->data = dat;
					s1.createnode(n1);
					s1.output();
					break;
				case 2:
					int pos,val,updated_value;
					cout<<"Enter the position you would like to update :";
					cin>>pos;
					cout<<"Enter the value you would like to replace  :";
					cin>>val;
					s1.updatenode(pos,val);
					s1.output();
					break;
				case 3:
					int position;
					cout<<"Enter the position you would like to delete :";
					cin>>position;
					s1.deletenode(position);
					s1.output();
					break;
				default:
					cout<<"You have not selected any option :"<<endl;
					goto start;
			}

		cout<<endl;
		cout<<"Do you want to insert / update / delete another node ? If yes, enter any number. To exit press 0 :";
		cin>>numb;
		if (numb == 0)
		{
			break;
		}
	}while(true);

	return 0;
}
SingleList::SingleList()
{
	head = NULL;
	tail = NULL;
}
void SingleList::createnode(Node *value)
{
	if(head)
	{
		Node *pt = head;
		while(pt->ptr)
		{
			pt = pt->ptr;
		}
		pt->ptr = value;
	}
	else
	{
		head = value;
	}
}
void SingleList::output()
{
	if(head)
	{
		cout<<"The single list values are :"<<endl;
		Node *hold = head;
		while (hold!= NULL)
        {
            cout<<"[" <<hold->number<<","<<hold->data <<"]"<<"->";
            hold = hold->ptr;
        }
	}
	else
	{
		cout<<"No nodes present in the Single Linked List";
	}
}
void SingleList::updatenode(int pos, int value)
{
   
   if(head==NULL) {
      cout<<"Linked List not initialized";
      return;
   } 

   current = head;
   while(current->next!=NULL) {
      if(current->data == value) {
         current->data = pos;
         cout<<value<<" replaced with "<<pos;
         return;
      }
      
      current = current->next;
      pos++;
   }
   
   cout<<value<<" does not exist in the list";
}
void SingleList::deletenode(int data)
{
	int pos=0;
    if(head==NULL) {
      cout<<"Linked List not initialized";
      return;
   } 
    
   if(head->data == data) {
      if(head->next != NULL) {
         head = head->next;
         return;
      } else {
         head = NULL;
         cout<<"List is empty now";
         return;
      }
   } else if(head->data != data && head->next == NULL) {
      cout<<data<<"d not found in the list\n";
      return;
   }

   current = head;
   
   while(current->next != NULL && current->data != data) {
      prev = current;
      current = current->next;
   }        

   if(current->data == data) {
      prev->next = prev->next->next;
      free(current);
   } else
      cout<<data<<" not found in the list.";

}

