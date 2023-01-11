/* SECTION :14
 NAME:GAURAV MEENA
 ROLL NO:22CE10025
 DESCRIPTION:NO OF TIME OF REAPEATATION OF STRING*/

 #include<stdio.h>
 #include<stdlib.h>
#define size 100

int main()
{
	char a[100];
        char b[100];
	printf("ENTER STRING:");
	scanf("%s",a);

	printf("ENTER SUBSTRING:");
        scanf("%s",b);

int i=0; int j=0; 
int flag=0;
int count =0;
while(b[i]='\0')
{
   if(b[i]=a[0])
       {
        for (j=1;a[j]!='\0';j++){
         if(b[i+j]=a[j]){
           flag=0; 
           break; }
   else{
       flag=1;
      }
    }
}
       if(flag==1){
          count++;}
         }
         i++; 
        printf("COUNT:%d\n",count);
        return 0;
}

        
           
      
  
    
        
	

