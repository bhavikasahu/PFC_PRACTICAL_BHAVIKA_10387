#include <stdio.h>
int max(int *a, int *b){
    if(*a> *b) return *a;
    else {return *b;}
}
int main(){
    int num1, num2, res;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    res=max(&num1, &num2);
    printf("Maximum number is: %d", res);
    return 0;
}