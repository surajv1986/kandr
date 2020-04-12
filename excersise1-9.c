/* Program to copy input to string to output and replace multiple spaces by a single space */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

#define SIZE 100

int main()
{
	char ip[SIZE];
	char op[SIZE], c;
	int i = 0, j = 0, k = 0, n1 = 0, n2 = 0;
	int n = 0;
	bool inWord = true, hasMSpace = false;

	memset(ip, 0, sizeof(ip));
	memset(op, 0, sizeof(op));
	printf("Enter a string\n");
	/* Accept input string upto newline*/
	while ((c = getchar()) != '\n') {
		ip[i++] = c;
		n++;
	}
	//ip[n] = '\0';
	printf("The string entered is\n");
	puts(ip);
	i = 0;
	while (i <= n) {
		/* if space is found */
		if (ip[i] == ' ') {
			/* If there is only a single space*/
			if( k == 1) {
				/* copy the single space to the output string */
				op[j] = ' ';
				/* increment output buffer index */
				j++;
			}
			/* count the number of spaces*/
			k++;
			if ( k > 1) {
				i++;
			}
			continue;				
		} else if ( k > 1) { /* If the number of spaces is more than one */		
			op[j] = ip[i - 1];
		} else {		
			op[j] = ip[i];
		}	      	
		/* Increment loop variables */
		i++;
		j++;
	}
	puts("The truncated string is \n");
	puts(op);	
}
