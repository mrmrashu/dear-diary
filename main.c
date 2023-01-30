#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add_entry(){
	printf("\nStart Writting...\n");
}
void help_menu(){
	printf("Welcome to Help Menu\n");
}

int main(int argc, char const *argv[])
{
	// int i = 0;
	if(argc > 1) {
		printf("%d Argument(s) Recieved,\n", argc-1); // Checking the Arguments
		for (int i = 1; i < argc; i++)
		{
			printf("Argument %d : %s\n", i, argv[i]);
			if(! strcmp(argv[i], "-h")) {
				help_menu();
			}
			if(! strcmp(argv[i], "-new")) {
				add_entry();
			}
		}
	}
	if (argc <= 1) {
		printf("Welcome to Dear Diary, Please use '-h' for more information\n");
	}
	return 0;
}
