#include<stdio.h>
int main(){
    int numOne , numTwo;

    printf("enter two nos two find hcf and lcm\n");
    scanf("%d %d",&numOne,&numTwo);

    //hcf logic by euclid 
   
    while (numTwo != 0 ){
        int  remainder = numOne%numTwo;
        numOne= numTwo;
        numTwo =  remainder;
        
    }
   printf("HCF is %d \n",numOne);
   
}
