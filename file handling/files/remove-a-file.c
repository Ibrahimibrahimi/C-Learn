#include <stdio.h>


int main(){
	
	// remove the file using its path
	int error_code = remove("../myfile.txt");

	// if error == 0 then no errors and file removed
	// else then errors exists
	
	printf("Got error : %d\n",error_code);
	
	if (error_code == 0){
		printf("error 0 => file removed successffully");
	}
	if (error_code == -1){
		printf("error -1 => file not found");
	}
	return 0;
}
