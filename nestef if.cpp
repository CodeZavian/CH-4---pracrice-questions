#include<stdio.h> 
#include<conio.h> 
int main () 
{ 
int a,b,c; 
printf("Enter 3 values in any order so they can be displayed in ascending order:"); 
printf("\nEnter the first number:"); 
scanf("%d",&a); 
printf("Enter the first number:"); 
scanf("%d",&b); 
printf("Enter the first number:"); 
scanf("%d",&c); 
if(a<b && a<c)  
{ 
 if (b<c) 

 printf("%d %d %d", a,b,c); 
 else 
 printf("%d %d %d", a,c,b); 
 } 
 if(b<a && b<c) 
 { 
 if (a<c) 
 printf("%d %d %d", b,a,c); 
 else 
 printf("%d %d %d", b,c,a); 
 } 
 if (c<a && c<b) 
 { 
 if (b<a) 
 printf("%d %d %d", c,b,a); 
 else 
 printf("%d %d %d", c,a,b); 
 }
}
