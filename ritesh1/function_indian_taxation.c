#include<stdio.h>
void indian_taxation_2022_2023()
{

    printf("enter your income");
    float income;
    scanf("%f", &income);
    if (income < 250000)
    {
        printf(" on income below 250000 no tax is applied");
    }

    if (income > 250000 && income < 500000)
    {
        printf("the tax on the income of %f rupees is%f", income, ((income - 250000) * (0.05)));
    }
    if (income > 500000 && income < 750000)
    {
        printf("the tax on the income of %f rupees is %f", income, (((income - 500000) * (0.1)) + 12500));
    }
    if (income > 750000 && income < 1000000)
    {
        printf("the tax on the income of %f rupees is %f", income, (((income - 750000) * (0.15)) + 37500));
    }
    if (income > 1000000 && income < 1250000)
    {
        printf("the tax on the income of %f rupees is %f", income, (((income - 1000000) * (0.2)) + 75000));
    }
    if (income > 1250000 && income < 1500000)
    {
        printf("the tax on the income of %f rupees is %f", income, (((income - 1250000) * (0.25)) + 125000));
    }

    if (income > 1500000)
    {
        printf("the tax on the income of %f rupees is %f", income, (((income - 1500000) * (0.3)) + 187500));
    }
}
int main(){
    indian_taxation_2022_2023();

    return 0;
}