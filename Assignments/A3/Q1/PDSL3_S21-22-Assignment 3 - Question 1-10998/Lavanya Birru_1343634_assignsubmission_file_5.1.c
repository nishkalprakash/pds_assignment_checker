/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
int main()
{int i,j,k,length,flag,flag2,count;
     char name[15];
     char user[20];
     char spl[]=" $*+/@<>?_!";
     char num ="123456789";
printf("enter ur name");
scanf("%s",user);
while(1){
    printf("enter password");
scanf("%s",name);
for ( i = 0; name[i]!='\0'; i++);
length=i;
if ((length>15)&&(length<8))
{
 print("invalid password ");
 continue;
}
for ( i = 0; name[i]!='\0'; i++)
{flag=1;
for (j = 0;user[j]!='\0'; j++)
{
if ( name[i+j]!=user[j])
{
 flag=0;
}

}
if (flag==1)
{
printf("invalid password ");
continue;
}
for ( i = 0;  name[i]!='\0'; i++)
{
    if(name[i]>='a'&&name[i]<='z'){
        flag=0;
    }
    if(name[i]>='A'&&name[i]<='Z'){
        flag2=0;
    }


}

if ((flag=0)&&(flag2=0))
{
 printf("invalid password ");
 continue;
}
for ( i = 0;  name[i]!='\0'; i++){
    for (j = 0;spl[j]!='\0'; j++)
{
 if (name[i+j]=spl[j])
 {
   k++;
 }

}
 if (k<2)
 {
   printf("invalid password ");
 continue;
 }

 for ( i = 0;  name[i]!='\0'; i++){
    for (j = 0;num[j]!='\0'; j++)
{
 if (name[i+j]=spl[j])
 {
   k++;
 }

}
 if (k>5)
 {
   printf("invalid password ");
 continue;
 }
 while (name[i]==name[i+1])
 {
     count++;
     if(i==7){break;}
 }
 if (count>5)
 { printf("invalid password ");
 continue;
 }

}

return(0);}
}
