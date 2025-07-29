#include <stdio.h>
int main(){
        int age ;
        printf("Enter Your Valid Age\n");
        scanf("%d", &age);
        if(age>18){
            printf("You Can Drive A Car\n");
        }else if(age<18){
            printf("You Can Not Drive Becuase You are kid \n");
        }else{
            printf("You Can Drive If You Have A Driving Lincance\n");
        }
        return 0 ;
}
