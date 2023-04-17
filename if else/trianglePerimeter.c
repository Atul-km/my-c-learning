#include<stdio.h>
int main(){
    double sideOne,sideTwo,sideThree;
    double perimeter;

    printf("please enter three sides of triangle\n");
    scanf("%lf %lf %lf",&sideOne,&sideTwo,&sideThree);
    perimeter = sideOne +sideTwo + sideThree;

    if(sideOne <= 0 || sideTwo <= 0 || sideThree <= 0){
      printf("not a triangle");
    }
    else if ( (sideOne >= sideThree + sideTwo) || (sideTwo>=sideOne+sideThree)|| (sideThree>=sideOne+sideTwo)){
        printf("not a triangle");    
    }
    else{
        printf("%lf",perimeter);
    }
    
}
