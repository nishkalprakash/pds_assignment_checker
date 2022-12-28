/* NAME - LUCKY PANWAR
   ROLL NO. - 22CE30016
   DATE - 28 DECEMBER , 2022
   ASSIGNMENT - 6 
   QUESTION NO. - 1
   DECRIPTION -   */


#include<stdio.h>

int print_term(int n)
{
	int t[n];
	
              for(n; n>=3 ; n--)		
	     {
		 t[n] = 3*t[n-1]*t[n-2] - 2*t[n-2]*t[n-3] + 1 ;
         
                }
 
                return t[n] ;            
}

int main()
{
	int k,i,m; 
	printf("Enter the the no. of terms\n");
	scanf("%d",&k);

	int t[k];
	t[0] = 0;
	t[1] = 1;
	t[2] = 2;
	t[3] = 7;
	t[4] = 39;
	t[5] = 792;


 
 	if(k<0 || k ==0 ){ printf("Invalid input\n");}  
         
        else {
                    switch(k){

                         case 1 :{
                                   printf("%d,", t[0]); 
                                   break;
                                     }		
                         case 2 :{
                                   printf("%d,", t[0]); 
                                   printf("%d,", t[1]); 
                                   break;
                                     }	
                         case 3 :{
                                   printf("%d,", t[0]); 
                                   printf("%d,", t[1]); 
                                   printf("%d,", t[2]); 
                                   break;
                                     }
   			 case 4 :{
                                   printf("%d,", t[0]); 
                                   printf("%d,", t[1]); 
                                   printf("%d,", t[2]); 
                                   printf("%d,", t[3]);
                                   break;
                         case 5 :{
                                   printf("%d,", t[0]); 
                                   printf("%d,", t[1]); 
                                   printf("%d,", t[2]); 
                                   printf("%d,", t[3]);
                                   printf("%d,", t[4]);
                                   break;
	                            }
			case 6 :{
                                   printf("%d,", t[0]); 
                                   printf("%d,", t[1]); 
                                   printf("%d,", t[2]); 
                                   printf("%d,", t[3]);
                                   printf("%d,", t[4]);
                                   printf("%d,", t[5]);
                                   break;
			            }
                         
                        default :{
                                   printf("%d,", t[0]); 
                                   printf("%d,", t[1]); 
                                   printf("%d,", t[2]); 
                                   printf("%d,", t[3]);
                                   printf("%d,", t[4]);
                                   printf("%d,", t[5]);
   	       			    while(k>=7)
	                                                                    					          {
				            m = print_term(k) ;
				            printf("%d,", m); 
				            k--; 
                                             }	
                                   break;
			                       	}      
			          }
                   }
 
             }
	return 0;
}
