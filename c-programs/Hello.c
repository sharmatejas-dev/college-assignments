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

/*
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
    
}*/
    
/*
#include <stdio.h>
int main(){
    int a , b , temp;

    printf("Enter two numbers: ");
    scanf("%d %d" , &a , &b);

    printf("Before swap: a = %d , b = %d\n" , a , b);

    temp = a;
    a = b;
    b = temp;
    
    printf("After swap: a = %d, b = %d\n", a , b);

    return 0;
}*/

/*
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;    

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}*/


/*
#include <stdio.h> 
int main (){
    int num , square , cube;
    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    cube   = num * num * num;

    printf("Square = %d\n" , square);
    printf("Cube = %d\n" , cube);
    
    return 0;
}*/


#include <stdio.h>

int main() {
    int totalDays, years, months, days;

    printf("Enter number of days: ");
    scanf("%d", &totalDays);

    years = totalDays / 365;
    months = (totalDays % 365) / 30;
    days = (totalDays % 365) % 30;

    printf("%d years, %d months, %d days\n", years, months, days);

    return 0;
}

