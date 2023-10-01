# include <stdio.h>


/*
int main(){
    int var[5] = {12,34,76,94,29};
    int* ptr = var;
    // we have written just 'var' as variable name holds base address of that array and first element address of that array

    for (int i=0; i<5; i++){
        printf("array's %d element address: %p\n", i, ptr);

        printf("array's %d element value: %d\n", i, *ptr);

        ptr++;

    }
    return 0;
} */


/*
int main(){
    int N = 4;
    int *ptr1, *ptr2;

    ptr1= &N;
    ptr2= &N;

    printf("Pointer ptr2 before Addition: ");
    printf("%p \n", ptr2);

    ptr2 = ptr2 + 3;
    printf("Pointer ptr2 after Addition: ");
    printf("%p \n", ptr2);

    printf("Value being held at ptr1: %d \n", *ptr1);
    printf("Value being held at ptr2: %d \n", *ptr2);

    return 0;
}  */

/* Returning more than one value */
# include <math.h>

void function(int, int*, double*);

int main(){
    int n = 100;
    int sqr;
    double sq_root;

    // function(n, &sqr, &sq_root);
    // above line is regular call of function and passing value by references
    // below line is declaring pointer to whole function

    void (*func_prt)(int, int*, double*);  
    // defining function pointer which can point to any function which returns void and
    // takes int int* and double* pointer as argument respectively
    // in our case that need can be satisfied by our defined function "function"

    func_prt = &function;    // giving address of that function to function to pointer variable

    (*func_prt)(n, &sqr, &sq_root);

    printf("square and square-root of %d is respective: %d, %f \n", n, sqr, sq_root);

    return 0;
}

void function(int n, int* square, double* square_root){ 
    *square = n * n;
    *square_root = sqrt(n);
}