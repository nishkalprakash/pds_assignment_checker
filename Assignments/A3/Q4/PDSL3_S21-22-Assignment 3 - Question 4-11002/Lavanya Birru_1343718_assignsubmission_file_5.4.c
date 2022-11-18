/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
int sorted ( int list[19]);
int linear ( int list[19],int value);
int main()
{ int list[19],value,m,i,flag;
 while(1){
 printf("enter the sorted list of 20 distinct integers");
scanf("%d",&list);
flag=sorted(list[19]);
if (flag==1)
{
   printf("invalid list");
   break;
}
printf("enter the value to be searched");
scanf("%d",&value);
printf("choose the method to be searched" );
scanf("%c",&m);
if(m=='l'||m=='L'){
i= linear(list[19],value);
}
if(m=='b'||m=='B'){
 i=binary(list[19],value);
}
return(0);}
}
int sorted ( int list[19]){ int i,flag=0;
    for ( i = 0; list[i]!='\0'; i++)
    {

if(list[i]>list[i+1]){
    printf("invalid list");
    flag=1;
    return flag;
}
  return;  }

}
int linear ( int list[19],int value){ int i;
    for ( i = 0; i < 20; i++)
    {
        if (list[i]==value)
        {
            return i;
linear
    }
    return (-1);
}
int binary ( int list[19],int value){
    if (k==list[9])
    {
     return 9;
    }
     else if (k==list[10])
    {
     return 10;
    }
    else if (k<list[9]){

         for ( i = 0; i < 9; i++)
         {
             if (list[i]==value)
             {
                 return i;
             }

         }}
         else if (k>list[10])
         {
              for ( i = 11; i < 19; i++)
         {
             if (list[i]==value)
             {
                 return i;
             }

         }
         }



     }
}
