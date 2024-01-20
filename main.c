#include<stdio.h>
int main(void){
    printf("Hello World\n");
    system("Pause");
    printf("Please select one mode:\n1 for plus\n2 for minus\nPlease choose your mode:");
    int a,b,c,d;
    
    scanf("%d",&a);

    printf("Please input 2 numbers:");
    scanf("%d%d",&b,&c);

    switch(a){
        case 1:d=b+c;break;
        case 2:d=b-c;break;
        default:d=0;break;
    }
    printf("%d",d);

    return 0;
}