# include <stdio.h>
# include <string.h>

/*
asking user to enter 5 elements of the defined array
use for loop to perform addition operation of those elements

int main(){
    int arry[5], i;

    for(i=0; i<5; i++){
        printf("Enter value for array's %d element: ", i);
        scanf("%d", &arry[i]);
    }

    int sum = 0;
    for(i=0; i<5; i++){
        sum = sum + arry[i];
    }
    printf("\nsum of all the array elements is: %d", sum);

    return 0;
}
*/

/*
take pre-defined array and find max elements of that array

int main(){
    int arry[7] = {7,13,21,16,9,31,24}, max, i;
    max = arry[0];

    for(i=1; i<7; i++){
        if (max < arry[i]){
            max = arry[i];
        }
    }
    printf("Max element of array is: %d", max);

    return 0;
}
*/

/*
define max length of array
enter how many elemnets you want to have
ask user to enter elements of array
insert specified element in to specified positioned only

int main(void){
    int arry[50], n, i, key, position;

    printf("Enter the size of array you want to create, it should be no larger than 50: ");
    scanf("%d", &n);

    for (i=0; i<n; i++){
        printf("Enter %d element of array:", i);
        scanf("%d", &arry[i]);
    }

    printf("Enter the element you want to enter:\t");
    scanf("%d", &key);

    printf("Enter the position you want to enter at:");
    scanf("%d", &position);

    printf("Elements of arrays are:");
    for (i=0; i<n; i++){
        printf("\t%d", arry[i]);
    }

    for (i=n; i>=position; i--){
        if(i== position)
        {
            arry[position] = key;
        }
        else
        {
        arry[i] = arry[i-1];
        }    
    }

    printf("\nModified Elements of array are: ");
    for (i=0; i<=n; i++){
        printf("\t%d", arry[i]);
    }

}
*/

/* insert whole array into  another array 

int main(void){
    
    int arry[50], n, i, arry_2[4], key;

    printf("Enter the size of array you want to create, it should be no larger than 50: ");
    scanf("%d", &n);

    for (i=0; i<n; i++){
        printf("Enter %d element of array:", i);
        scanf("%d", &arry[i]);
    }

    printf("Enter the elements of second array:\n");
    for(i=0; i<4; i++)
    {
        printf("Enter %d element of array:", i);
        scanf("%d", &arry_2[i]);
    }

    printf("Enter the position from where you want to insert array:");
    scanf("\t%d", &key);

    for(i=n-1; i>=key; i--){
        arry[i+4]= arry[i];
        printf("\t%d",arry[i+4]);
    }

    for(i=0; i<4; i++){
        arry[key+i]= arry_2[i];
    }

    printf("Modified array after insertion:");
    for(i=0; i<n+4; i++){
        printf("\t%d", arry[i]);
    }

} */


/*

catch string and print length of that string with/without using in-biult function

int length_of_string(char[]);

int main(void){
    char str[30];
    int len;

    printf("Enter the string: ");
    gets(str);

    printf("Entered string is: %s", str);

    printf("\n");

    len = length_of_string(str);

    printf("Length of string using inbuilt function is: %lu", strlen(str));
    printf("Length of string is: %d", len);

}

int length_of_string(char x[]){
    int count = 0;

    while(x[count] != '\0'){
    
        printf("%c\t", x[count]);
        count++;

    }
    return count;
} 
*/

/* string character swapping irespective to odd/even length 

void StringReverse(char *str);

int main(void){

    char AnyString[100];

    printf("Enter odd length string: \t");

    fgets(AnyString, sizeof(AnyString), stdin);

    StringReverse(AnyString);

    printf("Reversed string: %s\n", AnyString);

    return 0;
}

void StringReverse(char *str){

    int n = strlen(str)-1;
    int i = 0;
    char temp;

    while (i < n){
        temp = str[i];
        str[i] = str[n];
        str[n] = temp;
        n--;
        i++;
    }
}   */

