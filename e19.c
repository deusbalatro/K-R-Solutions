#include <stdio.h>

/*
This program tries to replace more than 1 blank characters with only 1 blank character

like:

get = h    ello (4 blank - not TAB)
put = h ello
*/
int main(){



	int c, nb;


	while ((c=getchar()) != EOF){


		if ( c != ' '){
			nb = 0;
			putchar(c);
		}
		if ( c == ' ' && nb == 0){
			putchar(c);
			++nb;
		}
		if (c == ' ' && nb > 0){

			;
		}


	}




}
