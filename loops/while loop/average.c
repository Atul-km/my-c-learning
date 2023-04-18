#include<stdio.h>
int main(){
    int num,sum=0,n=0;
    printf("Enter nos you want to sum and find average(O for execute)\n");
    scanf("%d",&num);
    while(num!=0){
        scanf("%d",&num);
        n += 1;
        sum += num;
    }
    if(n==0){
        printf("no nos added");
    }
    else{
        printf("nos added %d\n",n);
        printf("sum is %d\n",sum);
        printf("average is %d\n",sum/n);
    }

}
    
