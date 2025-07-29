#include <stdio.h>

void changeValue(int *x){
    *x = 50; //pointer x jis variable par focus karta h uska maan change kar deta hai.
}
int main(){
    int a;
    printf("Enter the value of a is :");
    scanf("%d", &a);
    changeValue(&a);    //address bheja ja rha h
    printf("Updated value is a %d", a);

    return 0;
}

//result : fuction ko varible ke address ko dekar variable ka address change kar skte hain.