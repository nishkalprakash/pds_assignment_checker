/*section 14 Roll no:22MA10040 Name:P.Sri Harsha vardhan Assignment no:2 desc: To expand the number in words*/
#include<stdio.h>
int main()
{
             int a,b,c;
            printf("Enter a number between 20 andd 99");
            scanf("%d",&a);
           b=a/10;
           c=a%10;
           switch(b)
           { case 1:printf("      ");
                          break;
            case 2:printf("Twenty");
                         break;
            case 3:printf("Thirty");
                          break;
            case 4:printf("Fourty");
                          break;
            case 5:printf("Fifty");
                          break;
              case 6:printf("Sixty");
                          break;
              case 7:printf("Seventy");
                          break;
              case 8:printf("Eighty");
                          break;
              case 9:printf("Ninghty");
                          break;
}
             switch(c)
            {
               case 1:printf("one");
                           break;
                case 2:printf("Two");
                           break;
                case 3:printf("Three");
                           break;
               case 4:printf("Four");
                           break;
              case 5:printf("Five");
                           break;
             case 6:printf("Six");
                           break;
             case 7:printf("Seven");
                           break;
             case 8:printf("Eight");
                           break;
             case 9:printf("NIne");
                           break;}
              return 0;}


