#include<stdio.h>
int main(){
    float si,p,n,r;
    printf("Please enter the p,n,r:\n");
    scanf("%f%f%f",&p,&r,&n);
    si=p*n*r/100;
    printf("si=%f",si);
    return 0;