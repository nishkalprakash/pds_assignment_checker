//  delete the item from ascending list
LINK delete_item(int val, LINK ptr) 
 {
 LINK prev, first;
first = ptr;
if (ptr== NULL)  return  NULL;
else  if (val== ptr-> data)
{
//  first node is to be deletedptr= ptr-> next;//  second nodefirst->next = NULL;free(first);//
  free up nodereturn ptr;  
// 2ndnode is new head}else// 
 check rest of list
{    
 prev= ptr;ptr= ptr-> next;
// find node to delete
while (ptr!= NULL && val> ptr->data)
 {
prev= ptr;
ptr= ptr-> next;
}
if (ptr== NULL || val!= ptr->data) 
 {
// NOT found in ascending list
return first;//  original
}else {//  found, delete ptrnode
prev-> next = ptr-> next;
ptr->next = NULL;
free(ptr);//  free node
return first;//  original
}
}
}
