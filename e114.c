#include <stdio.h>
#define MIN 65
#define MAX 90
#define DIFF 32

int main()
{

	int i, c, j;
	int array[MAX+DIFF];

	for (i = 0; i < MAX + DIFF; i++)
		array[i] = 0;

	while ((c = getchar()) != EOF){

		if (c > MIN && c < MAX){
			++array[c];
		}
		else if (c > MAX){
			++array[c-DIFF];
		}

	}

	for (i = MIN; i <= MAX; i++){
		printf("%c-%c|", i, i + DIFF);
		//printf("	|%d times used\n", array[i]);
		for (j = 1; j <= array[i]; j++)
			printf("  ▄");
		printf("\n");
	}

	printf("_____________________________\n");
	printf("    ");
	for (i = 1; i < 20; i++)
		if (i <= 9)
			printf("  %d", i);
		else
			printf(" %d", i);

	printf("\n");
}
