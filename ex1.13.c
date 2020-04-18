/* A C Program to print the histogram of the length of words in its input */
#include<stdio.h>
#include<string.h>

#define SIZE 1000
/* Function prototypes */
int draw_horizontal_histogram(int *count, int n);
int draw_vertical_histogram(int *count, int n);

int main(void)
{
	char ip[SIZE], c;
	/* loop variables */
	int i = 0, j = 0, count[SIZE] = {0};
	/* index variables */
	int n = 0, k = 1;

	puts("Enter an arbitary string terminated by a new line");
	while ((c = getchar()) != '\n') {
		ip[i++] = c;
		n++;
	}
	ip[n] = '\0';
	puts(ip);
	/* reset loop variable */
	i = 0;
	/* For each element in string */
	while (i < n) {
		if (ip[i] == ' ') {
			j++;
			k++;
		} else
			count[j]++;
		i++;
	}
	for (j = 0; j < k; j++) {
		printf("%d\n", count[j]);
	}
	draw_horizontal_histogram(count, k);
	draw_vertical_histogram(count, k);

	return 0;
}

int draw_horizontal_histogram(int *count, int n)
{
	int i = 0, j = 0;

	puts("The required horizontal histogram is");
	/* loop through the histogram array */
	while (i <  n) {
		/* reset loop variable j */
		j = 0;
		/* draw '*' until count */
		while (j < *count) {
			printf("*");
			j++;
		}
		printf("\n");
		i++;
		count++;
	}

	return 0;
}

int draw_vertical_histogram(int *count, int n)
{
	int i = 0, j = 0;

	puts("The required vertical histogram is ");
	/* loop through the histogram array */
	while (i < n) {
		/* reset loop variable */
		j = 0;
		/* draw '*' until count */
		while (j < *count) {
			printf(" %s","*\n");
			j++;
		}
		i++;
		count++;
	}
}
