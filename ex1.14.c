/* A Program to print a histogram of the frequencies of different characters in its input */
#include<stdio.h>

#define SIZE 1000

/* function prototype */
int draw_horizontal_histogram(int *, int);

int main(void)
{
	char ip[SIZE], c, temp;
	int count[SIZE] = {0};
	/* loop variables */
	int i = 0, n = 0, k = 0;

	printf("Enter an arbitary string \n");
	while ((c = getchar()) != '\n') {
		ip[i++] = c;
		n++;
	}
	ip[n] = '\0';
	/* reset loop count variable */
	i = 0;
	/* loop through the character array */
	while (i < n) {
		temp = ip[i];
		for (k = 0; k < n; k++) {
			/* compare each element with other elements */
			if (ip[k] == ' ')
				count[k] = 0;
			else if ((temp == ip[k]) || (temp == (ip[k] - 32)) || (temp  == (ip[k] + 32)))
				count[i]++;
		}
		i++;
	}
	printf("The count for each character is: \n");
	/* print count for each character */
	for (i = 0; i < n; i++) {
		if (count[i] == 0)
			continue;
		printf(" %c : %d\n", ip[i], count[i]);
	}
	printf("The desired horizontal histogram is \n");
	draw_horizontal_histogram(count, n);

	return 0;
}

int draw_horizontal_histogram(int *array, int length)
{
	int i = 0, j = 0;

	for (i = 0; i < length; i++) {
		/* reset loop variable */
		j = 0;
		while (j < *array) {
			printf("%c", '*');
			j++;
		}
		if (*array != 0)
			printf("\n");
		array++;
	}
}
