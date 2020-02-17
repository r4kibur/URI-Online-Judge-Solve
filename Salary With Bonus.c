#include<stdio.h>
int main()
{
    char name[30];
    float x;
    double y,TOTAL;
    gets(name);
    scanf("%f %lf",&x,&y);
    TOTAL= x+(y*15)/100;
    printf("TOTAL=TK$%.2lf\n",TOTAL);
    return 0;
}
