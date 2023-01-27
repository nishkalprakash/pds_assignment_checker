#include<stdio.h> //this is an standerd input output header file
#include<stdlib.h> //this is an header file
int main(){
int data
LINK StrToList (char s[ ]) {
LINK head = NULL, tail;
int i;
if (s[0] != ‘\0’) {
head = (LINK) malloc (10);
head->d = s[0];
tail = head;
for (i=1; s[i] != ‘\0’; i++) {
tail->next = (LINK) malloc(10);
tail = tail->next;
tail->d = s[i];
}
tail->next = NULL;
}
return head;
}