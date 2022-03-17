#include <stdio.h>

int main() {
    double a,b,c;
    printf("qeymat khane ra vared Konid : ");
    scanf("%lf",&a);
    printf("makharej ra vared konid : ");
    scanf("%lf",&b);
    printf("maliat ra vared konid :");
    scanf("%lf",&c);
    printf("hazine kol %f ", (5 * ( b + (a*c) ))+a);
    return 0;
}