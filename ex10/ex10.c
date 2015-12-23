#include <stdio.h>

int main(int argc, char *argv[]) {
	int i = 0;
	
	// go through each string in argv
	// but not the first since it's just the function name.
	for(i=1; i<argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}
	
	// let's make our own array of strings.
	char *states[] = {"Massachusetts", "New York", "New Hampshire", "Maryland"};
	int num_states = 4;
	
	for(i=0; i<num_states; i++) {
		printf("state %d: %s\n", i, states[i]);
	}
	
	return 0;
}
