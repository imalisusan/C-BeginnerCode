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
