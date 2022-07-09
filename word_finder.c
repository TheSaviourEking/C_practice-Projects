#include <string.h>
#include <stdio.h>
/*
 * Program to find a word from a longer word(strings). 
 * This code is Open-source
 * (c)2022, TheSaviourEking.
 */


int main()
{
    char s1[50];
    char s2[50];

    printf("whats your parent word: \n");//ask for the long string
    gets(s1);
    printf("what word or letter are you searching for: \n");//asks for second string
    /* getting info for s2, scanf() kept giving errors, working for ways
    * to fix it */
      gets(s2);
	if (strstr(s1, s2))//searches through the first string for second string
	{
		printf("%s is found in %s\n", s2, s1);
	}
	else
	{
		printf("%s doesn't exist in %s\n", s2, s1);
	}


   return (0);
}

