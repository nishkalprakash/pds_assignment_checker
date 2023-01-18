/* 
  NAME - KRISHNA GUPTA
  SECTION -14
  ASSGNMENT -9
  DESCRIPTION - CORRECTING THE DATE */
#include <stdio.h>
    typedef struct date
         {
          int dd;
          int mm;
          int yy;
        }
        date;
    struct date X,Y;
    
   struct date ReadDate1()
     {
       
        struct date X;
        printf("Enter day , month , year :");
        scanf("%d %d %d" ,&X.dd, &X.mm , &X.yy);
        return X;
  
    }        

   struct date ReadDate2()
     {
       
        struct date Y;
        printf("Enter day , month , year :");
        scanf("%d %d %d" ,&Y.dd, &Y.mm , &Y.yy);
        return Y;
  
     }   
  
  void PrintDate(struct date X)
     {

       printf("X = %d/%d/%d \n",X.dd,X.mm,X.yy);     
    
     } 
   int main()
  {
     struct date X,Y;
     X = ReadDate1();
     Y = ReadDate2();
     PrintDate(X);
     PrintDate(Y);
     return 0;
}
  





        
