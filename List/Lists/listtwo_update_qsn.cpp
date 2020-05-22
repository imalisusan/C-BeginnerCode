#include<iostream>
using namespace std;

struct Node{
	int number;
	int data;
	Node* ptr;
};
class SingleList
{
public:
	Node *head,*tail;
	SingleList();
	void createnode(Node *value);
	void updatenode(int value, int pos);
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
					int pos,val;
					cout<<"Enter the position you would like to update :";
					cin>>pos;
					cout<<"Enter the value you would like to replace  :";
					cin>>val;
					s1.updatenode(val,pos);
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
	head = nullptr;
	tail = nullptr;
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
void SingleList::updatenode(int value, int pos)
{
    /*This function should have two parameters:
        1. The value you want to enter.
        2. The position in the node that your value should be inserted.
    Instructions:
        1. You should first check whether the Single Linked List is empty (Please use the analogy used in createnode function). If its empty ask the user to add a new node - Just use a cout statement here.
        2. If the Single Linked List is not empty, traverse the list to the position where the value should be inserted (Please check the analogy used
            in the output function ) and insert the data at the position (Please use the analogy used in createnode function).
    */
}
void SingleList::deletenode(int pos)
{
    /*This function should have one parameter:
        1. The position (number) in the node of the value you want to delete.
    Instructions:
        1. You should first check whether the Single Linked List is empty (Please use the analogy used in createnode function). If its empty inform the user no node present in the list - Just use a cout statement here.
        2. If the Single Linked List is not empty you can first check if the position (number) is the head node. If its the head node then make the next value to be the head node.
        3. If its not the head node, then traverse the list to the position to be deleted, then change the pointer of the previous node to be the pointer to the next node (Not the one to be deleted).

}

