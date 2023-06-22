#include <stdio.h>


int  recursiveGCD(int num1,int num2){

    if(num2==0){
        return num1;
    }
    return recursiveGCD(num2,num1%num2);

}


int recursiveLCM(int num1, int num2 ){

    static int lcm = 1;

    if(lcm%num1==0 && lcm%num2==0){
        return lcm;
    }

    lcm++;
    return recursiveLCM(num1,num2);

}


int main() {

    int num1,num2;

    printf("Enter two numbers:  ");
    printf("\nNum1: ");
    scanf("%d", &num1);

    printf("Num2:");
    scanf("%d", &num2);





    int gcd = recursiveGCD(num1, num2);
    int lcm =recursiveLCM(num1, num2);

    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcm);



    return 0;
}
