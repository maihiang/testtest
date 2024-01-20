#include<stdio.h>
int times(int b,int c);
int main(void){
    printf("Hello World\n");
    system("Pause");

    int a,b,c;
    scanf("%d %d",&b,&c);
    a=times(b,c);
    printf("%d",a);
    return 0;
}