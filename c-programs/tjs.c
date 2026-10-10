// Q. 1  formula  length*width

/*#include <stdio.h>

int main(){
    int length = 5 , width = 3;
    printf("The Area of rectangle is %d\n", length*width);
    return 0;
}*/

/*#include <stdio.h>

int main(){
    int length , width , area;
    printf("Enter the length:");
    scanf("%d", &length);

    printf("Enter the width:");
    scanf("%d", &width);

    printf("The area of rectangle is %d\n", length*width);
    return 0;
}*/


// Q. 2    formula = area of circle 3.14*r*r, cylinder 3.14*r*r*h

/*#include <stdio.h>

int main(){
    int radius = 3;
    int height = 7;
    printf("The area of circle of radius %d is: %f\n", radius , 3.14*radius*radius);
    printf("The area of cylinder of radius %d and height %d is :%f\n", radius, height , 3.14*radius*radius*height);
    return 0;
}*/


// Q. 3 formula= calsius to fehrenheit. F= ((9/5)*c)+32

/*#include <stdio.h>

int main(){
    float c = 25,f;

    f = ((9.0/5.0)*c)+32;
    printf("The value of Fahrenheit is %f\n", f);
    return 0;
}*/


// Q.4   simple intrest formula= (PRT)/100

/*#include <stdio.h>
 
int main(){
    float p=50000, r=5, t=2, si;

    si= (p*r*t)/100;
    printf("The simple intrest is %f\n " , si);

    return 0;
}*/


#include <stdio.h>

int main(){
    int a = 4; 
    int b = 3; 
    int c = a + b; 
     
    printf ("The value of a is %d and the valur of b is %d and the value of c is %d\n", a, b, c);
    // Modulas operator is used to get the remainder 
    printf ("The remainder is when a is devided by b is :%d\n", a%b);

    return 0;
}