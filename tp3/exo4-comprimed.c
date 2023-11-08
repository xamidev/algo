#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){double a,b,c,x,x2,z,d;printf("Entrer a,b,c:\n");scanf("%lf%lf%lf",&a,&b,&c);
d=pow(b,2)-4*a*c;if(d==0){x=-b/(2*a);printf("x:%lf\n",x);}else if(d>0){
x=(-b-sqrt(d))/2*a;x2=(-b+sqrt(d))/2*a;printf("x1:%lf\nx2:%lf\n",x,x2);}else{
printf("Pas de solution réelle\n");}return 0;}
