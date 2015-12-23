#include <stdio.h>
#include <ctype.h>

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[]) {
	if(argc > 1) {
		for(int i=1; i<argc; i++) {
			print_letters(argv[i]);
		}
	} else {
		printf("ERROR: needs at least one argument.\n");
	}
}

void print_letters(char arg[]) {
	for(int i=0; arg[i]!='\0'; i++) {
		char ch = arg[i];
		
		if(can_print_it(ch)) {
			printf("'%c' == %d ", ch, ch);
		}
	}
	
	printf("\n");
}

int can_print_it(char ch) {
	return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[]) {
	print_arguments(argc, argv);
	return 0;
}
