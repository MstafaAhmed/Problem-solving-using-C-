// C program to check input is an alphabets or not 

#include <stdio.h>
/*  
	include <stdio.h> library 
	to use printf funcation
*/
  
 // define the main funcation
void main()
{
	char ch;
	
    //  Input character from user
    
	printf("Inter any character : ");
	scanf("%c",&ch);
	
	/*
      If (ch>'a' and ch<'z') or (ch>'A' and ch<'Z') then
          print alphabet
      else
          print not alphabet
     */
	
	if(( ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
		printf("The character %c is alphapet ",ch);
		
	}
	else
	{
			printf("The character %c is not alphapet ",ch);
	}
	
	
	
	
}