#include <stdio.h> 
#include<iostream>
int main() 
{ 
    char fname[20], mname[20], lname[20]; /* person's name */ 
      /* accept full name */

     printf("Enter full name (first middle last): "); 
     scanf("%s %s", fname, lname); 
      /* print abbreviated name */ 
     printf("Abbreviated name: "); 
     printf("%c. %c\n", fname[5],lname);
     return 0; 
 }
