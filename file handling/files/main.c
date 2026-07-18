#include <stdio.h>



void write_to_file(char file_path[] , char mode[] , char content[]){
	// FILE pointer
	FILE *file_pointer = fopen(file_path,mode);

	// write content
	fprintf(file_pointer,content);
	
	// close the pointer
	fclose(file_pointer);

	printf("File '%s' created Successfully",file_path);
}

int main(){
	// define the file path variable
	char file_path[] = "myfile.txt";
	
	

	// using the function we created
	write_to_file(file_path,"w","this is a new file ");

	return 0;
}
