#include <stdio.h>

int main(){
	
	// create file pointer
	FILE *file_pointer = fopen("../myfile.txt","a");

	// write content
	fprintf(file_pointer,"this is a line \n");
	fprintf(file_pointer,"this is a new line");


	// close the pointer
	fclose(file_pointer);

	return 0;
}
