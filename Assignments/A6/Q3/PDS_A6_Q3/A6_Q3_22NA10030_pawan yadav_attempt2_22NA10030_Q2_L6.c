
/*name= pawan yadav
roll no= 22NA10030
question no =3*/

 #include<stdio.h>
 #include<string.h>
 int palindrome(char str[30]){
     int temp,len, ret;
     char plr[30];
     strcpy(plr,str);
     //printf("%s",plr);
     len=strlen(str);
    // printf("%d",len);
 for(int i=0;i<len/2;i++){
    temp=str[i];
    str[i]=str[len-i-1];
    str[len-i-1]=temp;}
   // printf("%s",str);
   ret=strcmp(str,plr);
    if(ret==0) return 1;
    if(ret!=0) return 0;

 }

 int main(){
 int a[30],n,temp,turn,drome;
 char pl[30];
 printf("Enter the turn:\n");
 scanf("%d",&turn);
 if(turn==1){
 printf("Enter the limit:\n");
 scanf("%d",&n);
 for(int i=0;i<n;i++){
 scanf("%d",&a[i]);
 }
 for(int i=0;i<n/2;i++){
    temp=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=temp;
 }printf("ordering of all element in array are reverse :");
 for(int i=0;i<n;i++){
    printf("%d ",a[i]);
 }}
 if(turn==3){
    printf("Enter the string:\n");
   scanf("%s",pl);
   //strcpy(plr,pl);

   drome= palindrome(pl);
   /*if(str[30]==pl[30]) return 1;
    if(str[30]!=pl[30]) return 0;*/
   if(drome==0) printf("%s is not palindrome :",pl);
    if(drome==1) printf("%s is  palindrome :",pl);
 }
 return 0;}
