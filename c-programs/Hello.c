# include<stdio.h> 
int main()
{
    float  si, ri, time;
    int pa;
    printf ("please enter- Principal Amount:");
    scanf("%d", &pa);
    printf("\n Rate of Intrest:");
    scanf("%f",&ri);
    printf("\n Enter Time:");
    scanf("%f", &time);
    si= (pa*ri*time)/100;
    printf ("\n simple Intrest is %f" , si);
    return 0;

}


