#include<stdio.h>  // finding quadratic equation of roots
#include<math.h>
int main()
{
    double a,b,c,x1,x2,d ;
    printf("enter any elements of a b c : ");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=(b*b-4*a*c); //discriminant
    if(d >=0 )
    {
        d=sqrt(d);
     x1=(-b+d)/(2*a);
     x2=(-b-d)/(2*a);
     printf("The root x1= %.2lf\n",x1);
     printf("The root x2= %.2lf\n",x2);
    }
    else
    {
        printf("Real roots are not possible for these values.\n");
    }
    return 0;
}
