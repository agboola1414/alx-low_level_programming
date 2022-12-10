#!/bin/bash


Question #0

What is the size of the char data type?





1 byte  answer





8 bytes





4 bytes





2 bytes



Question #1

Which of the following are valid while or do/while statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int)



Please select all correct answers





a = 0;

while (a < b)

    printf("%d\n", a++);     answer



a = 0;

do {

    printf("%d\n", a);

    a++;

} while (a < b);       answer



a = 0;

while (a < b)

(

    printf("%d\n", a);

    a++;

)                             



a = 0;

while (a < b)

{

    printf("%d\n", a);

    a++;

}                             answer



while (a = 0; a < b; a++)

{

    printf("%d\n", a);

}



a = 0;

do while (a < b)

{

    printf("%d\n", a);

    a++;

}

Question #2

Which of the following are valid if statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int)



Please select all correct answers





if ((((((a > b))))))

{

  return (a);

}



if {a > b}

(

  return {a};

)



if (a > b)

  return (a);   answer



if (a > b)

{

  return (a);

}                  answer



if a > b

{

  return (a);

}

Question #3

Which of the following are valid for statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int)



Please select all correct answers





a = 0;

for (a < b;;)

{

    printf("%d\n", a++);

}



for (int a = 0; a < b; a++)

{

    printf("%d\n", a);

}



a = 0;

for (; a < b;)

{

    printf("%d\n", a++);

}                              answer



for (a = 0; a < b; a++)

    printf("%d\n", a);               answer



for (a = 0; a < b; a++)

{

    printf("%d\n", a);

}                                        answer

Question #4

What is the size of the unsigned int data type?





1 byte





8 bytes





4 bytes      answer





2 bytes



Question #5

What is the size of the float data type?





1 byte





8 bytes





4 bytes      answer





2 bytes



1 error

Please make sure to validate all quiz questions before moving on to project tasks



abd   cd  cde





#include <stdlib.h>                                                                                                                                                       

#include <time.h>                                                                                                                                                         

#include <stdio.h>                                                                                                                                                        

int main (void)                                                                                                                                                           

{                                                                                                                                                                         

   int n;                                                                                                                                                                 

                                                                                                                                                                          

   srand(time(0));                                                                                                                                                        

   n = rand() - RAND_MAX / 2;                                                                                                                                             

   if (n > 0)                                                                                                                                                             

           printf("%i is positive\n", n);                                                                                                                                 

   else if (n < 0)                                                                                                                                                        

           printf("%i is negative\n", n)                                                                                                                                  

   else                                                                                                                                                                   

           printf("%i is zero\n", n);                                                                                                                                     

   return (0);                                                                                                                                                            


