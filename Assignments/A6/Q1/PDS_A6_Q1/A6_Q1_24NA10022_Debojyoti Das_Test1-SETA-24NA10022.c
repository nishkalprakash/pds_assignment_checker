//code creater:Debojyoti Das
//lab test 1
//date:10-09-2024
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int  main()
  {
      int randomnumber,bin_a[10],bin_b[10],x,i,j,temp1=0,temp2=0;
      float y=0,filter[10],temp;
      srand(42);
      
      printf("Filter:");
      for(i=0;i<10;i++)
          {
             randomnumber=rand()%100+1;
             x=randomnumber;
             for(j=1;j<=x;j++)
                {
                   y=y+ pow((-1),(j+1))*j*j/(2*j+1);
                }
             y=y+cos(x/3);
             filter[i]=y;
             y=0;
             printf("%f ",filter[i]);
           }
  printf("\n");
              
       for(i=0;;i++)
          {
             randomnumber=rand()%100+1;
             x=randomnumber;
              for(j=1;j<=x;j++)
                {
                   y=y+ pow((-1),(j+1))*j*j/(2*j+1);
                }
             y=y+cos(x/3);
             for(j=0;j<10;j++)
             { 
                 if(y>filter[j])
                  temp=y;
                 else
                 temp=0;
              }
             if(temp!=0)
              {
                bin_a[temp1]=x;
                temp1++;
             }
             if(temp1==10)
             break;
             for(j=0;j<10;j++)
             { 
                 if(y<filter[j])
                  temp=y;
                 else
                 temp=0;
              }
               if(temp!=0)
               {
                bin_b[temp2]=x;
                temp2++;
             }
                  if(temp2==10)
             break;
             
   
             

       printf("\nBin_A:");
       for(i=0;i<10;i++)
       printf("%d ",bin_a[i]);
       printf("\nBin_B:");
       for(i=0;i<10;i++)
       printf("%d ",bin_b[i]);
     }
       
           
           
             
                  
      
              
                       
      
