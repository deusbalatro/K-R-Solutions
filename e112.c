#include <stdio.h>
#define IN 1
#define OUT 0

int main() {

/*
	c = inputted character
	nb = new blank character
	nl = new line
	nw = new word
	nc = new character
	state = program's state
 */

	int c, nb, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = nb = 0;

	while ((c=getchar()) != EOF){

		++nc;
		if (c== '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
			if (c == ' '){
				putchar('\n');
		}
		else if (state == OUT){
			state = IN;
			++nw;
		}
		if (state == IN){
			putchar(c);

		}

	}
	printf("%d %d %d\n", nl, (nw-nl), (nc-1));

}
