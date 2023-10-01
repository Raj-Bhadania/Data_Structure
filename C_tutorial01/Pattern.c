# include <stdio.h>

void Right_Half_Pyramid_Pattern(void);
void Left_Half_Pyramid_Pattern(void);
void Full_Pyramid_Pattern(void);
void Inverted_Right_Pyramid_Pattern(void);
void Inverted_Left_Pyramid_Pattern(void);
void Inverted_Full_Pyramid_Pattern(void);
void Rhombus_Pattern(void);
void Diamond_Pattern(void);
void Hourglass_Pattern(void);
void Hollow_Square_Pattern(void);
void Hollow_Full_Pyramid(void);
void Hollow_Inverted_Full_Pyramid(void);
void Hollow_Diamond_Pyramid(void);
void Hollow_Hourglass_Pattern(void);
void Floyds_Triangle(void);
void Pascals_Triangle(void);

int main(){
    void (*function_array[])(void) = {Right_Half_Pyramid_Pattern, Left_Half_Pyramid_Pattern, Full_Pyramid_Pattern, 
                                    Inverted_Right_Pyramid_Pattern, Inverted_Left_Pyramid_Pattern, Inverted_Full_Pyramid_Pattern, Rhombus_Pattern, Diamond_Pattern, 
                                    Hourglass_Pattern, Hollow_Square_Pattern, Hollow_Full_Pyramid, Hollow_Hourglass_Pattern, Floyds_Triangle, Pascals_Triangle};


    for (int i=0; i< 14; i++){
        (*function_array[i])();
        printf("\n");
    }
    return 0;
}

void Right_Half_Pyramid_Pattern(void){
    for (int i=0; i<5; i++){
        for (int j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void Left_Half_Pyramid_Pattern(void){
    int rows = 5;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < 2*(rows - (i+1)); j++){
            printf(" ");       // here we have used 1 blank spaces
        }
        for (int j=0; j<=i; j++){
            printf("* ");       // here is one * mark with one balnk space
        }
        printf("\n");
    }
}

void Full_Pyramid_Pattern(void){
    int rows = 5;
    for (int i=0; i<rows; i++){
        for (int j=0; j<(rows-i-1); j++){
            printf(" ");
        }
        for (int j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void Inverted_Right_Pyramid_Pattern(void){
    int rows = 5;
    for (int i=0; i<rows; i++){
        for (int j=rows-i; j>0; j--){
            printf("* ");
        }
        printf("\n");
    }
}

void Inverted_Left_Pyramid_Pattern(void){
    int rows=5;
    for (int i =0; i<rows; i++){
        for (int j=0; j<2*i; j++){
            printf(" ");
        }
        for (int j=rows-i; j>0; j--){
            printf("* ");
        }
        printf("\n");
    }
}

void Inverted_Full_Pyramid_Pattern(void){
    int rows=5;
    for (int i =0; i<rows; i++){
        for (int j=0; j<i; j++){
            printf(" ");
        }
        for (int j=rows-i; j>0; j--){
            printf("* ");
        }
        printf("\n");
    }
}

void Rhombus_Pattern(void){
    int rows=5;
    for (int i =0; i<rows; i++){
        for (int j=0; j<=i; j++){
            printf(" ");
        }
        for (int j=rows; j>0; j--){
            printf("* ");
        }
        printf("\n");
    }
}

void Diamond_Pattern(void){
    int rows=5;
    for (int i=0; i<2*rows-1; i++){
        int count;
        if (i<rows){
            count = (rows-i)-1;
        }
        else {
            count = (i-rows)+1;
        }
        for (int j=count; j>0; j--){
            printf(" ");
        }
        for (int j=0; j<rows-count; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void Hourglass_Pattern(void){
    int rows=5;
    for (int i=0; i<2*rows-1; i++){
        int count;
        if (i<rows){
            count = (rows-i)-1;
        }
        else {
            count = (i-rows)+1;
        }
        for (int j=0; j<rows-count-1; j++){
            printf(" ");
        }
        for (int j=count; j>=0; j--){
            printf("* ");
        }
        printf("\n");
    }
}

void Hollow_Square_Pattern(void){
    int rows = 5;
    for (int i = 0; i<rows; i++){
        for (int j=0; j<rows; j++){
            if(i>0 && i<rows-1 && j>0 && j<rows-1){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
}

void Hollow_Full_Pyramid(void){
    int rows = 5;
    for (int i=0; i<rows; i++){
        for (int j=0; j<rows-i; j++){
            printf(" ");
        }
        for (int k=0; k<=i; k++){
            if (k==0 || k==i || i==rows-1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

void Hollow_Inverted_Full_Pyramid(void){
    int rows =5;
    for (int i =0; i<rows; i++){
        for (int k=0; k<=i; k++){
            printf(" ");
        }
        for (int j=0; j<rows-i; j++){
            if (j==0 || j==rows-i-1 || i==0){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

void Hollow_Diamond_Pyramid(void){
    int rows=5;
    int count;
    for (int i=0; i< (2*rows)-1; i++){
        if (i<rows) {
            count = rows-i-1;
        }
        else {
            count = (i-rows)+1;
        }
        for (int k=0; k<count; k++){
            printf(" ");
        }
        for (int j=0; j<rows-count; j++){
            if (j==0 || j== rows-count-1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

void Hollow_Hourglass_Pattern(void){
    int rows=5;
    int count;
    for (int i=0; i< (2*rows)-1; i++){
        if (i<rows) {
            count = rows-i-1;
        }
        else {
            count = (i-rows)+1;
        }
        for (int k=0; k<rows-count; k++){
            printf(" ");
        }
        for (int j=0; j<=count; j++){
            if (j==0 || j==count || count==4){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

void Floyds_Triangle(void){
    int rows=5;
    int a=1;
    for (int i=0; i<rows; i++){
        for (int j=0; j<=i; j++){
            printf("%d ", a++);
        }
        printf("\n");
    }
}

void Pascals_Triangle(void){
    int rows=5;
    for (int i=1; i<=rows; i++){
        for (int j=0; j<rows-i; j++){
            printf(" ");
        }
        int c=1;
        for (int k=1; k<=i; k++){
            printf("%d ",c);
            c = c * (i - k) / k;
        }
        printf("\n");
    }
}