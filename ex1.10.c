/* A program to copy its input to its output, replacing each tab by \t , each
backspace by \b , and each backslash by \\ . This makes tabs and backspaces visible in an
unambiguous way */

#include<stdio.h>
#include<string.h>

#define SIZE 100


int main(void)
{
	char ip[SIZE], op[SIZE], c;
	/* Loop Variables */
	int i = 0, j = 0, n = 0;


	memset(ip, 0, sizeof(ip));
	memset(op, 0, sizeof(op));
	printf("My escape sequence \\t \\b \\ test\n ");
	puts("Enter any sequence of characters terminated by newline\n");
	/* Accept characters from the terminal until EOF */
	while ((c = getchar()) != '\0') {
		ip[i++] = c;
		n++;
	}
	puts("The entered string is\n");
	puts(ip);
	/* Reset loop variable */
	i = 0;
	/* loop through the input character array */
	while (i < n) {

		/* Check for tab */
		if (ip[i] == '\t') {
			printf("\\t");
			/* increment the loop variables appropriately */
			i++;
			continue;
		} else if (ip[i] == '\\') { /* Check for backslash */
			printf("\\");
			/* increment the loop variables as appropriate */
			i++;
			continue;
		} else if (ip[i] == 127) { /* Check for backspace */
			printf("\\b");
			/* increment the loop variables appropriately */
			i++;

			continue;
		} else {
			/* simply copy the input buffer to the output buffer */
			printf("%c", ip[i]);
			i++;

		}
	}
	printf("\n");
}

