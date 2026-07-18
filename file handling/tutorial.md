# File handling

> To make a file in C , you have to create a pointer with its `path` and choose the `mode`(Write,Read,Append...)


## 1. Files & File pointers

> **File pointers** are pointers giving you the possibility to write/read/edit… a file

We're going to use a built-in function `fopen(PATH,MODE)` wich returns a pointer of file we want to edit, the `PATH` is the path of the file we want to access to, the `MODE` means ==Type of operations== we want to apply to the file , examples: 

- 'a' : append, it means you can add text at the end of a file without erasing the old text. (file_content = old_content + new_content)
- 'w' : write new content and erase old + create new file if doesn't exists. (file_content = new_content)
- 'r' : readonly , can only get the text of the file (readonly, no modifications allowed)
- ...etc
```c
// write new file
FILE *pointer_to_file = fopen("path/to/file.ext","w");
```
## 2. Write a file
> To create a new file, or override an existant file, we use the mode `w` (write override) and `a` (append): 
```c
// write new file using the pointer
FILE *new_file_pointer = fopen("new.txt","w");

// add new content to a file (without erasing the old content)
FILE *existant_file_pointer = fopen("exist.txt","a");
```
> To write a string to a file , we use built-in function `fprintf(FILE_POINTER:pointer,CONTENT:string)`
we need the file pointer and the content to write/append :

#### Write new file
```c
// open a file
FILE *file_pointer = fopen("myfile.txt","w"); // w = write + override

// write some text
fprintf(file_pointer,"This is a text");
fprintf(file_pointer,"This is another text "); // this line erase the file content , and create new text : this is another text
```
#### add new text to an existant file
```c
// open a file
FILE *file_pointer = fopen("myfile.txt","a"); // a = append

// write some text
fprintf(file_pointer,"This is a text");
fprintf(file_pointer,"This is another text"); // this line add new text and keep the old one
```
#### Close the file pointer
> We should close the file pointer to keep memory clean
```c
fclose(file_pointer);
```
#### NB : 
##### 💀 The fprintf() take the name of the pointer (without '*')
##### 💀 We should close the file after we finish (to clean the memory)


# 3. Read a file
> 'Before reading a file we should check that the file exists'

### Check if the file exists
> To read a file , we have to know about the function `fgets( VARIABLE:string, N_CHARS:integer, FILE_POINTER:pointer)`
> **VARIABLE** : where to store the value of the line
> **N_CHAR** :  for each line, how much caracters to read
> **FILE_POINTER** : the pointer of the file to read


examples
```c
// create the file pointer
FILE *file_pointer = fopen(file_path,"r"); // r = readonly mode, we can only get the content of the file, no modifications.

// define the variable where to store each line.
char current_line[255]; // 255 => for each line, we want just the first 255 caracters (you can modify it)

// get the value of the current line and store its content in the variable 'buffer'
fgets(current_line,255,file_pointer ); // 255 = how much to read

// print the current line
printf("Line content : %s",current_line);

// close the file pointer
fclose(file_pointer);

```

### Read a full file not just a line
```c
// create the file pointer
FILE *file_pointer = fopen(file_path,"r"); // r = readonly mode, we can only get the content of the file, no modifications.

// define the variable where to store each line.
char current_line[255]; // 255 => for each line, we want just the first 255 caracters (you can modify it)

// read line from the file and read the next one until the last line (where current_line = NULL)
while ( fgets(current_line,255,file_pointer ) != NULL ){
    printf("Line : %s",current_line);
}
```


# 4. Remove a file
> The same thing as 'read' mode , we have to check if that file exists first

==remove(PATH)== is a function take a file path, if file exists it removes and returns 0, if there is an error like file doesn't exists, permissions error… it returns something else

```c
// try to remove the file and get the code return
int error_number = remove("file_to_remove.txt");

if (error_number == 0){ // 0 = no error and file removed successfully
    printf("File removed successfully ");

} else (error_number) { // != 0 => error
    printf("Error : Cannot delete file, File Not found or Permission error... !");
}
```






