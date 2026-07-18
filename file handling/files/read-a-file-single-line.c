#include <stdio.h>

int main(){
	// create a file pointer
	FILE *file_pointer = fopen("../myfile.txt","r");

	// create the variable where to store the value of current line
	char current_line[255];

	// read the first line
	fgets(current_line,255,file_pointer);

	// print the line
	printf("Line : %s",current_line);

	// close the pointer
	fclose(file_pointer);

	return 0;
}
