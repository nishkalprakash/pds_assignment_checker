//Name:Ranga Kiranmai
//Roll No:23EE30017
#include <stdio.h>
#include <string.h>
char str[20],arr[10];
void create() {
  int n,i;
      printf("Enter the no of words(<10) you want to print:\n");
      scanf("%d",&n);
      for(i=0;i<n;i++) {
      printf("Enter the string:\n");
      scanf("%s",str);
      strcpy(arr,str);
      printf("The strings are:%s\n",arr);
}
void lengthStat() {
  int i,count1=0,count2=0,count3=0;
  for(i=0;i<n;i++) {
    if(strlen(arr)>=1 && strlen(arr)<=2) count1++;
    if(strlen(arr)>=3 && strlen(arr)<=5) count2++;
    if(strlen(arr)>5) count3++;
    printf("The no of words having length between 1-2 are:%d\n",count1);
    printf("The no of words having length between 3-5 are:%d\n",count2);
    printf("The no of words having length greater than 5 are:%d\n",count3);
  }
  void letterStat() {
    int count=0,i,j;
    for(i=0;i<n;i++) {
      for(j=0;arr[j]!='\0';j++) {
	if(arr[j]=='a' || arr[j]=='e' || arr[j]=='i' || arr[j]=='o' || arr[j]=='u') count++;
      }
    }
    printf("The total no of occurences of vowels:%d\n",count);
  }
  void search() {
    int i,j,count=0;
    char string[20];
    printf("Enter a string:\n");
    scanf("%s",string);
    for(i=0;i<n;i++) {
      if(strlen(arr)==strlen(string)){
    for(j=0;string[j]!='\0';j++) {
      if(string[i]==arr[i]) count++;
	}
    }
      if(count==strlen(arr)) printf("The word is found\n");
    }
  }
int main()
{
  int N;
  while(1) {
    printf("Choose from the following Menu:\n");
    printf("0->exit the loop\n");
    printf("1->Create\n");
    printf("2->lengthStat\n");
    printf("3->letterStat\n");
    printf("4->search\n");
    printf("5->RemoveDuplicate\n");
    printf("6->searchReplace\n");
    printf("7->arrange\n");
    printf("User choice: ");
    scanf("%d",&N);
    if(N==0) break;
    if(N==1) create();
    if(N==2) lengthStat();
    if(N==3) letterStat();
    if(N==5) search();
  }
}
    
