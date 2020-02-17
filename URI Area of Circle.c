#include<stdio.h>
#include<math.h>
#define N 3.14159
double A(int R)
{
        return N*pow(R^2,2);
}
int main()
{
    printf("A=%f",A(5));
    return 0;
}
