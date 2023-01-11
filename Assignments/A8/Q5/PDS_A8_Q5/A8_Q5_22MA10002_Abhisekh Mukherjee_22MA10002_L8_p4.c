/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:7
problem:4
topic:2d array and string 
*/
#include<stdio.h>
int main(){
char str[100];
 printf("enter the string\n");
 scanf("%s",str);    // reading the string
printf("\n");
printf("output\n");
int i,j,k,a,b,e,count,c;
 for(i=0;str[i]!='\0';i++){
     e=i;
      for(j=i+1;str[j]!='\0';j++){            // using nested loops
count=0;
    for(k=e;k<=j;k++){
                if(str[k]==str[j-k+e]){     // using if else
                      count++;
                }
    }
 b=j;
     if((count==b-e+1 )&&(count>1)) {
                c=count;
       
            for(a=e;a<=b;a++){
                    printf("%c",str[a]);         // printing the palindrome substrings
       }
       
      printf("\n");
   }
  
}

}



if(c<=1){
     printf("no palindrome substring found\n");
}


return 0;
}
