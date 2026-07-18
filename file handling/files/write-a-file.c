#include <stdio.h>

int main(){
	
	// create file pointer
	FILE *file_pointer = fopen("../newfile.txt","w");

	// write content
	fprintf(file_pointer,"this is a new content");


	// close the pointer
	fclose(file_pointer);

	return 0;
}
