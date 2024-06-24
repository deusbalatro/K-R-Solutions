#include <stdio.h>

/*
This program replaces the keypunches into their language equivalents.
Like \t for TAB, \b for BACKSPACE, \\ for \
*/

int main(){



	int c, nb;


	while ((c=getchar()) != EOF){


		if ( c != '\t' && c != '\b' && c != '\\'){

			putchar(c);
		}
		if ( c == '\t'){
			printf("\\t");

		}

		if (c == '\b') //it can be tested with CTRL+BACKSPACE keys
			printf("\\b");

		if (c == '\\')
			printf("\\\\");




	}




}
