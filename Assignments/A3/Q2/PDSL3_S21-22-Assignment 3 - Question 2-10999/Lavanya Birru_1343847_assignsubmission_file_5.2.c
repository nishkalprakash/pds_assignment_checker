/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
int main()
{ int s1[20],s2[20],i,j,sum[20],pen,min, sum1=0;
printf("enter first sequence");
scanf("%s",s1);
printf("enter second sequence");
scanf("%s",s2);
for ( i = 0;s1[i]!='\0'; i++);
for ( j = 0;s2[j]!='\0'; j++);
if(i==j){
for ( i = 0;s1[i]!='\0'; i++){
    if (s1[i]==s2[j])

    {
        pen=0;
    }
    else{ pen=1;}
    printf("%d",pen);
    sum1+=pen;
}
printf(" similarity score is %d",sum1);
}

else{
    if (i==j+1)
    {
     for ( i = 0; i < 20; i++)
     {
         s2[i]='-';
         for ( j = 0; j< 20; j++)
         {
             if (s1[i]==s2[j])

    {
        pen=0;
    }
    if (s2[j]=='-')

    {
        pen=2;
    }
    else{ pen=1;}
    printf("%d",pen);
    sum[i]+=pen;
}
    min =sum[0];
for ( i = 0; i < 20; i++)
{ if (sum[i]<min)
{
    min=sum[i];
}

printf(" similarity score is %d and the corresponding position of '-'is ",min,i);
         }

     }

    }
}
}

return(0);
}
