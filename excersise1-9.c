/* Program to copy input to string to output and replace multiple spaces by a single space */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

#define SIZE 100

int main(void)
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
			/* count the number of spaces*/
			k++;
			/* if the number of spaces are more than one */
			if (k > 1) {
				/* skip the spaces in the input buffer */
				i++;
			}
			continue;
		} else if (k > 1) { /* If the number of spaces is more than one */
			/* replace the multiple space by a single space in the output buffer */
			op[j] = ' ';
			/*increment op buffer index */
			j++;
			op[j] = ip[i];
			/* reset the space count 'k' */
			k = 0;
		} else {
			op[j] = ip[i];
		}
		/* Increment loop variables */
		i++;
		j++;
	}
	puts("The truncated string is");
	puts(op);
}
