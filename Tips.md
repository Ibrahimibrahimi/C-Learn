# Tips in C


### 1. No variable pointers in function params 
> Unlike java and other programming languages, C variables passed in parameter of a function, are passed as 'values' not 'addresses' like in Java.

Example : 
```c
// function that make variable value to 0
void clear(int var){
    var = 0;
}

int main(){
    int test = 15;
    clear(text);
    printf("%d",text); // 15 , because 'clear' took the value 15 not the variable
}
```
Example (JAVA) ☕
```java

public void clear(int var){
    var = 0;
}

public static void main(){
    int test = 15;
    clear(text);

    System.out.print("New value : %d",text); // 0 , because Java passes the full variable address not the value
}
```



### 3. Pointers in C

#### Table pointers
> A table pointer is a pointer to the first element, so a pointer `*p` to ==arr== , has a value of ==arr[0]==, and `*(p+1)` has the value of `arr[1]`

Examples :
```c
int main(){
    int A[] = {12,23,34,45,56,67,78,89,90};

    // create table pointer
    int *P = A;

    // *P =  A[0]
    // *(P + 1) = A[1]
    // P[2] = A[2]

    
    // 1. what is the value of *(P + *(P + 8) - A[7]) ?
    
}

```
### ☠️ About table pointers 

```c

int main(){
    int arr[3] = {11,65,23};

    int *p = arr; // pointer to array

    
    
}

```


## 4. Switch case
Case withouth break => still executes

### 5. 

















