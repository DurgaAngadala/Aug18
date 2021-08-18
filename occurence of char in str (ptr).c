/*Write a Cprogram to count the occurence of a character in a string(user input) using pointers.*/

#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],c; 
    char *p=s;
    int i,count=0;
    printf("Enter  the string : ");
    gets(p);
    printf("Enter character to be searched: ");
    c=getchar();
    for(i=0;s[i];i++)  
    {
    	if(p[i]==c)
    	{
          count++;
		}
 	}
    printf("character '%c' occurs %d times \n ",c,count);
    return 0;
}