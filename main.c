#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// The Text buffer that user will input
char text[100];

// Create a new Entry
void add_entry(){
	printf("\nStart Writting...\n");
    fgets(text,20,stdin);
}

// Displaying Help Menu
void help_menu(){
	printf("\nWelcome to Help Menu\n");
}

// Handling invalid arguments
void invalid_args()
{
	printf("Invalid Argument(s), Please use '-h' for more information\n");
}

int main(int argc, char const *argv[])
{
	// int i = 0;
	if(argc > 1) {
		printf("%d Argument(s) Recieved,\n", argc-1); // Checking the Arguments
		for (int i = 1; i < argc; i++)
		{
			printf("Argument %d : %s\n", i, argv[i]);
			// Redirecting to help menu
			if(! strcmp(argv[i], "-h")) {
				help_menu();
			}
			// Redirecting to New Entry
			else if(! strcmp(argv[i], "-new")) {
				add_entry();
			}
			// Handling any other argument entered other than above
			else {
				invalid_args();
			}
		}
	}
	// Handling no arguments passed
	if (argc <= 1) {
		printf("Please use '-h' for more information\n");
	}
	return 0;
}
