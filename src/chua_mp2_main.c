/* COMPRO1 Machine Problem Part 2                                          */
/* CHUA_KYLE MATTHEW C.                      				   */
/* S19A                          					   */
/*                                                                         */
/* This is the main() function for testing the cosine() and sine()         */                          
/*                                                                         */
/* NOTES:                                                                  */
/* 1. Change the word "lastname" in the filename to your own last name.    */
/*    For example, if your last name is SANTOS, then this file should be   */
/*    named as santos_mp2_main.c                                           */ 
/* 2. You are NOT ALLOWED to add new codes other than the implementation   */
/*    of the body of the main() function.                                  */  
/* 3. You have to compile and link this with the object file corresponding */
/*    to your lastname_mp2_math.c in order to produce the executable file. */


#include <stdio.h>
#include "mp2_math.h"

int main(void)
{
  double degree, radian;
 
  printf("11426012\n\n");
  
  for(degree = (-180.0) ; degree <= 180 ; degree += 5.0){
	printf("%.2lf\t\t", degree);
	
	radian = degree * PI / 180;
	printf("%.12lf\t\t", radian);
	
	printf("%.12lf\t  ", cosine(radian));
	printf("%.12lf\n", sine(radian));
  }

  return 0;
}
