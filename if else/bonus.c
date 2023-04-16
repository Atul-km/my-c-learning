#include<stdio.h>
int main(){
   double numOne,numTwo;
   double result;
   int bonus=10;
   printf("Enter two nos\n");
   scanf("%lf , %lf",&numOne , &numTwo);
   result = numOne * numTwo;
   if(result <= 40 && (numOne>5 && numTwo>5)){
    bonus += 10;
   }
   else{
    bonus -= 10;
   }
  printf("your bonus %d",bonus);
}
