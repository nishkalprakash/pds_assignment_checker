# include<stdio.h>
# include<string.h>
int main() {
   int n=0;
   char line[100];
   scanf("%s", line);
   for(int i=0; i<100; i++) {
       if((line[i] >='A' && line[i] <='Z')||(line[i] >='a' && line[i] <='z')) {
        n++;
   } 

   if(line[i] == ' ') {
        n++;
   } 

   if(line[i] == '.' && line[i+1] == ' ') {
        n++;
   }
   } printf("The length of string is : %d\n", n+1);
     printf("Length of string by strlen() is : %ld\n", strlen(line));
     int y=0;
     for(int j=0;j<100;j++) {
      if(line[j] == '.') {
         y = y+1;
}
}
     int x=0;
     for(int j=0;j<100;j++) {
      if(line[j] == ' ' ) {
         x = x+1;
}
}   printf("Number of words is : %d\n", x-y);
    printf("Number of sentences is : %d\n", y);
    return 0;
   }
