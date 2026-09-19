/*
#include <stdio.h>

int main() {
    printf("Hello World\n");
    return 0;
}*/

/*
#include <stdio.h>

int main(){
    printf("Name: Tejas\n");
    printf("Roll Number: 7141\n");
    printf("Course: BCA\n");
    return 0;
}*/

/* 
#include <stdio.h> 
int main(){
    printf("Tejas\n");
    printf("Jaipur\n");
    printf("Rajasthan\n");
    printf("India\n");
    return 0;}

#include <stdio.h> 
int main(){
    printf("Tejas\nJaipur\nRajasthan\nIndia\n");
    
}*/
//  these both programs gives the identical output   both are correct 

/*
#include <stdio.h>
int main(){
    int a , b , sum;
    printf("Enter two integers: ");
    scanf("%d %d" , &a, &b );
    sum = a + b;
    printf("Sum = %d\n", sum);
    
    return 0; 
}*/




/*
#include <stdio.h>
int main(){
    int a , b , c;
    float average;

    printf("Enter three numbers: ");
    scanf("%d %d %d" , &a , &b , &c);

    average = (a + b + c)/3.0;

    printf("Average = %.2f\n", average);

    return 0;

}*/


#include <stdio.h>
int main() {
    float length , width , area , perimeter;
    printf("Enter length and width: "); 
    scanf("%f %f" , &length , &width);

    area = (length * width);
    perimeter = 2 * (length + width);

    printf("Area = %.2f\n" , area);
    printf("Perimeter = %.2f\n" , perimeter);

    return 0;
    
}