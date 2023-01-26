void print_list(LINK head)
{
LINK temp;
temp = head;
while(temp!=NULL)
{
if(temp->next ==NULL) 
printf("%d. END OF LIST \n", temp->data);  

else printf("%d -> ", temp->data); 
temp = temp->next;
}
}
