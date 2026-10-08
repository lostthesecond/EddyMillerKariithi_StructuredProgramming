# include                               <stdio.h>

int main() {

    double Area;
    const double PI = 3.14;
    double r;

    printf("Enter radius:");
    scanf("%lf", r);

    Area = PI*r*r;
    printf("the area is %lf ... it was obvious, you idiot :( ", Area);
    
    return 0;
}