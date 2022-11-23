# include<stdio.h>

int main()
{
int SS, MM, HH;
scanf("%d %d %d",&SS,&MM,&HH);
if( SS<60 && MM<60 && HH<24 )
{
printf(" Valid time - %d:%d:%d \n",HH,MM,SS);
}
else
{
printf("Invalid time \n");
}
return 0;
}




