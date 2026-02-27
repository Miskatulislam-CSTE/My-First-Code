#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, x1, x2, d;

    printf("Enter values for a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0)
    {
        d = sqrt(discriminant);
        x1 = (-b + d) / (2 * a);
        x2 = (-b - d) / (2 * a);
        printf("The roots are real and different.\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }
    else if (discriminant == 0)
    {
        x1 = x2 = -b / (2 * a);
        printf("The roots are real and equal.\n");
        printf("x1 = x2 = %.2lf\n", x1);
    }
    else {
        double realPart = -b / (2 * a);
        double imgPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex and imaginary.\n");
        printf("x1 = %.2lf + %.2lfi\n", realPart, imgPart);
        printf("x2 = %.2lf - %.2lfi\n", realPart, imgPart);
    }

    return 0;
}
