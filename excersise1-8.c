/* Program to count blanks, tabs and newlines */

#include<stdio.h>

int main()
{
	int c, n1 = 0, t1 = 0, b1 = 0;

	while(c = getchar() != EOF) {
		/* Check for newline */
		if(c == '\n')
			n1++;
		/* Check for tab */
		if(c == '\t')
			t1++;
		/* Check for blankspace */
		if(c == ' ');
			b1++;
	
	}
	printf("The number of spaces = %d, tabs = %d, newlines = %d\n", b1, t1, n1);
	

}
