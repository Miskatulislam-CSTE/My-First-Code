#include<stdio.h>
int main()
{
    float physics_gpa,cste_gpa,math_gpa,phy_cradit,cste_cradit,math_cradit;
    float total_cradit,wighted_sum,CGPA ;
    printf("Enter physics cradit: ");
    scanf("%f",&phy_cradit);
    printf("Enter physics gpa: ");
    scanf("%f",&physics_gpa);
    printf("Enter cste cradit: ");
    scanf("%f",&cste_cradit);
    printf("Enter cste gpa: ");
    scanf("%f",&cste_gpa);
    printf("Enter math cradit: ");
    scanf("%f",&math_cradit);
    printf("Enter math gpa: ");
    scanf("%f",&math_gpa);
    total_cradit= (phy_cradit+cste_cradit+math_cradit) ;
    wighted_sum = (physics_gpa*phy_cradit)+(cste_cradit*cste_gpa)+(math_cradit*math_gpa);
    if(total_cradit>0)
    {
    CGPA= (wighted_sum)/(total_cradit);
    printf("your CGPA=%.2f\n",CGPA);
    }
    else
    {
        printf("CGPA Calculate impossible(total_cradit zero)");
    }
    return 0;
}
