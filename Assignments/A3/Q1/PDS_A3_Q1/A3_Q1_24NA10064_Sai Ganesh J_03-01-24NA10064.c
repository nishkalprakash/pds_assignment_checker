#include<stdio.h>
int main()
{
   int d, m, y;
   printf("Enter the date in DD MM YYYY format:\n");
   scanf("%d %d %d", &d, &m, &y);
   if(m==1 && d>31 && d<1) {
     printf("Invalid Date"); }
   else if(m==2 && (d>=28 || d<=1 || y%4 != 0)) {
     printf("Invalid Date"); }
   else if(m==1 && d>31 && d<1) {
     printf("Invalid Date"); }
   else if(m==3 && d>31 && d<1) {
     printf("Invalid Date"); }
   else if(m==5 && d>31 && d<1) {
     printf("Invalid Date"); }
   else if(m==8 && d>31 && d<1) {
     printf("Invalid Date"); }
   else if(m==10 && d>31 && d<1) {
     printf("Invalid Date"); }
   else if(m==12 && d>31 && d<1) {
     printf("Invalid Date");}
   else if(m==4 && d>30 && d<1) {
     printf("Invalid Date");}
   else if(m==6 && d>30 && d<1) {
     printf("Invalid Date");}
   else if(m==9 && d>30 && d<1) {
     printf("Invalid Date");}
   else if(m==11 && d>30 && d<1) {
     printf("Invalid Date");}
   else{
      printf("Valid Date");}
}
