/*
* Section- 02
* Name - Rahul kumar
* Roll no. - 22GG10032
* Assignment - 06
* Question Number - 03
*/
#include<stdio.h>
void function1(){
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
       printf("Enter the element %d : ",i+1);
       scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return;
}
void function2(){
    int i,l1=0,l2=0;
    char str1[20],str2[20];
     printf("Enter the first string : \n");
      scanf("%s", str1);
      for (i=0; str1[i]!='\0'; i++)
       l1++;
     printf("Enter the second string : \n");
     scanf("%s", str2);
     for (i=0; str2[i]!='\0'; i++)
       l2++;
       if(l1==l2) printf("Length of strings are equal\n");
      else if (l1!=l2) printf("Length of strings are not equal\n");
   return;
}
void function3(){
  int i, flag, len = 0;
  char str[20];
  printf("Enter the string : \n");
  scanf ("%s", str);
   len = 0;
   while (str[len]) len++;
   flag = 0;
  for (i = 0; i < len; i++) {
  if (str[i] != str[len-1-i]) flag = 1;
}
    if (flag == 0) printf ("%s is a Palindrome\n", str);
     else printf ("%s is NOT a Palindrome\n", str);

}
int main(){
    int n;
    printf("Enter the function number : ");
    scanf("%d",&n);
    if(n==1)
        function1();
    if(n==2)
        function2();
    if(n==3)
        function3();


  return 0;
}
