#include<stdio.h>
#define MinWage 100
#define PerDaySalary 15
#define Absentfine 100
#define OverTimeFactor 0.25

int main(){
    int AbsentDays,overtime ,workDays;
    int wage; 
    printf("Enter your workdays AbsentDays and overtime\n");
    scanf("%d %d %d", &AbsentDays,&overtime,&workDays);
    if(AbsentDays > 15){
        wage = PerDaySalary*workDays - Absentfine + overtime*OverTimeFactor + MinWage;
        printf("%d", wage);
    }
    else{
        wage = PerDaySalary*workDays + overtime*OverTimeFactor + MinWage;
        printf("%d", wage);
    }

}
