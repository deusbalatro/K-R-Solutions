#include <stdio.h>
#define IN 1
#define OUT 0

/*
	wc = word's char
	nw = new word
	c = character
	i = for *index (subscript)

*/

int main(){


	int a, wc, nw, c, i, state;
	nw = 0;
	wc = 0;
	state = OUT;

	while ((c = getchar()) != EOF)
	{

		//printf("%d. word: ", nw);
		if (c != ' ' && c != '\n' && c!= '\t' && c!= '\b' && c!= ',' && c!= '.' && c!= '?'){
			++wc;
			if (state == IN)
				printf("▄▄ ");
			else if (state == OUT){
				if(wc <= 9)
					printf("%d. word 	| ▄▄ ", nw+1);
				else
					printf("%d. word | ▄▄ ", nw+1);
				//printf("%d. word	| x  ", nw+1);
				state == IN;
			}
			//putchar(c);
		}

		if (c == ' ' || c == '\n' || c == '\t'){
			wc = 0;
			putchar('\n');
			state = OUT;
		}
		if (c != ' ' && c != '\n' && c != '\t' && c != ',' && c!= '.' && c!= '?' && state == OUT)
		{
			++nw;
			state = IN;
		}

	}

//	printf("\n");
	printf("          	|______________________________________________\n");
//	printf("            	  ");
	printf("Order/Letters     ");
	for (i = 1; i < 15; ++i){
		if ( i <= 9)
			printf("%d  ", i);
		else
			printf("%d ", i);
	}

	printf("\n");
	//printf("Histogram of given word's length:\n");

	//int nlength[wc];
	//printf("%d. word: ", nw);
	//for (i = 0; i <= wc; ++i)
	//	printf("■ ");
	//printf("\n");
	//printf("         ");
	//for (i = 1; i <= wc; ++i)
	//	printf("%d ", i);
	//printf("\n");
	//printf("word amount %d\n", nw);

}
