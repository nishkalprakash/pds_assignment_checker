#include<stdio.h>
int main()
/*section 14
roll no:22ag10041
name:satya [prakash nanda
asignment no:3
description:q2*/

{
  int sec, min, hour;// declaration of variables
  printf("enter time in the format second:minute:hours\n");
  scanf("%d %d %d", &sec, &min, &hour);
  printf("entered time is %d:%d:%d\n",sec,min,hour);
  

  if(0<=sec && sec<=60 ){
        if(0<=min && min<=59){
                              if(0<=hour && hour<=23){
                                                        printf("valid time-%d:%d:%d\n",sec,min,hour); 
                                                      }
                               else{
                                     printf("invalid time");     
                                   }
                              }
        else{
             printf("invalid time");
            }
                          }

  else{
       printf("invalid time\n");
       }



return 0;
}
