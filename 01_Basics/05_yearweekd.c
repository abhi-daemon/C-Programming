/* 0-3. WAP in c where user will input number of days. program should convert and 
print given number of days into number of years, number of weeks, and number of days left.
for Ex: user enter 766 days output should be 2 years, 5 weeks, and 1 days.*/

#include <stdio.h>
int main(){
int n;
printf("Enter number of days:");
scanf("%d",&n);
int year=n/365;
   n=n%365;
int weak=n/7;
n=n%7;
int day=n;
printf("%d years, %d weaks, %d days \n", year, weak, day);
return 0;
 }