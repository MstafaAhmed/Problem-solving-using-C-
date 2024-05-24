// C program to check year is leap year or not

#include <stdio.h>
/*  
	include <stdio.h> library 
	to use printf funcation
*/
  
  
 // define the main funcation
void main()
{
	int year;
	
	  /*
      Input year from user
      */
	printf("Please inter the year :  ");
	scanf("%d",&year);
	
	
    /*
     * If year%4==0 and year%100!=0 then
     *     print leap year
     * else if year%400==0 then
     *     print leap year
     * else
     *     print common year 
     */
	
	
	if((year%4 == 0)&&(year%100 != 0))
	{
		printf("The year %d is a leap year ",year);
	}
	else if (year%400 == 0)
	{
		printf("The year %d is a leap year ",year);
		
	}
	else
	{
		printf("The year %d is commn year ",year);
	}
	
	
	
	
}