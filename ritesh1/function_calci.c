#include <stdio.h>
#include <math.h>
#define pi 3.141592
void additon_subtraction()
{
    int i, n, x;
    int sum = 0;
    printf("hoe many numbers you wnat to add\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        sum = sum + x;
    }
    printf(" the sum of %d entered numbers is  =  %d", n, sum);
}

void multiplication()

{
    int i, n;
    int x;
    int multiply = 1.0;
    printf("hoe many numbers you wnat to multiply");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        multiply = multiply * x;
    }
    printf(" the product of %d entered numbers is   %d   ", n, multiply);
}
void division()
{

    int i, n;
    int x;
    int divide;
    scanf("%d", &divide);
    printf("how many numbers you wnat to divide");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        divide = 1.0 * divide * (1.0 / x);
    }
    printf(" the divisin of %d entered numbers is   %f   ", n, (float)divide);
}
void modulo()
{

    int a, b;
    printf("enter the value of A");
    scanf("%d", &a);
    printf("enter the value of B");
    scanf("%d", &b);
    printf("multiplication of A and B is %d", a / b);
}
void power()
{

    double a, b;
    printf("enter the value of  number  A");
    scanf("%lf", &a);
    printf("enter the degree  B upto which the number  will be raised");
    scanf("%lf", &b);
    printf(" A raise to the power  B is %lf", pow(a, b));
}
void exponent()
{
    double e, x;
    e = 2.718281;
    printf("enter the degree  X upto which the euler number   will be raised");
    scanf("%lf", &x);
    printf(" A raise to the power  B is %lf", pow(e, x));
}
void natural_log()

{
    double x;
    printf("enter the number of which you want to gind natural log");
    scanf("%lf", &x);
    if (x > 0)
    {
        printf("ln(%lf)    is    %lf   ", x, log(x));
    }
    else
    {
        printf("please enter a value which is greater than zero ");
    }
}
void log_base_10()
{

    double x;
    printf("enter the number of which you want to find  log ");
    scanf("%lf", &x);
    if (x > 0)
    {
        printf("ln(%lf)    is    %lf   ", x, log10(x));
    }
    else
    {
        printf("please enter a value which is greater than zero ");
    }
}
void log_base_any_number()
{

    double x, y;
    printf("enter X ");
    scanf("%lf", &x);
    printf("enter Y");
    scanf("%lf", &y);
    if (x > 0 && y > 0)
    {
        printf("ln(%lf)    is    %lf   ", x, log(x) / log(y));
    }
    else
    {
        printf("please enter a value which is greater than zero ");
    }
}
void nth_root()
{

    double a, b;
    printf("enter the value of  number  A");
    scanf("%lf", &a);
    printf("enter the   B upto which the number  will be rooted");
    scanf("%lf", &b);
    printf(" nth root of a to power 1 by b is %lf", pow(a, 1.0 / b));
}

void factorial()
{
    int n;
    int factorial = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf(" the factorial of %d  is %d  ", n, factorial);
}

int ncr_fact(int n)
{
    int i;
    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int npr_fact(int n)
{
    int i;
    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

void matrix_sum_diff()
{
    int n;

    printf("enter how many terms will be in the array");
    scanf("%d", &n);
    int a[n][n], b[n][n];
    int sum[n][n], diff[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &a[i][j]);
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &b[i][j]);
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            diff[i][j] = a[i][j] - b[i][j];
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            printf("  %d", sum[i][j]);
        }
    printf("\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            printf("  %d", diff[i][j]);
        }
}
void matrix_multiply()
{

    int a[3][3], b[3][3], c[3][3];
    int i, j, k;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            printf("enter the elements if matrix a\n ");
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            printf("enter the elements if matrix b \n");
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("  %d\t", c[i][j]);
        }
        printf("\n");
    }
}
void matrix_to_symmetric_skew_symmetric()
{

    int a[3][3], b[3][3], c[3][3];
    int i, j, k;
    printf("enter the elements if matrix a\n ");
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            b[i][j] = a[i][j] + a[j][i];
            c[i][j] = a[i][j] - a[j][i];
        }
    }
    printf("\n");
    printf("symmetric matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("skew symmetric matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}

void matrix_detrminent()
{
    int a[3][3];

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }
    int determinent, x, y, z;
    x = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2]));
    y = a[0][1] * ((a[1][0] * a[2][2]) - (a[2][0] * a[1][2]));
    z = a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1]));
    determinent = x - y + z;
    printf("the determinent will be %d", determinent);
}
void matrix_symmetric()
{
    int a[3][3];
    int i, j, f1;
    printf("enter the elements if matrix a\n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] != a[j][i])
            {
                f1 = 1;
                break;
            }
        }
    }
    if (f1 == 1)
    {
        printf("the matrix  is not  a  symmetric matrix");
    }
    else
    {
        printf("the matrix  is  a symmetric matrix");
    }
    printf("\n");
}
void matrix_skew_symmetric()
{
    int a[3][3];
    int i, j, f1;
    printf("enter the elements if matrix a\n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] != -a[j][i])
            {
                f1 = 1;
                break;
            }
        }
    }
    if (f1 == 1)
    {
        printf("the matrix  is not a skew  symmetric matrix");
    }
    else
    {
        printf("the matrix  a skew symmetric matrix");
    }
    printf("\n");
}
void matrix_transpose()
{
    int a[3][3];
    int i, j;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("the transpose of the matrix is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}
void matrix_inverse()
{

    int a[3][3], c[3][3];
    int e[3][3], d[3][3];
    int i, j;
    int det, x, y, z;
    det = (a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2]))) - (a[0][1] * ((a[1][0] * a[2][2]) - (a[2][0] * a[1][2]))) + (a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1])));
    if (det > 0)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        c[0][0] = (a[1][1] * a[2][2]) - (a[2][1] * a[1][2]);
        c[0][1] = -(a[1][0] * a[2][2]) + (a[2][0] * a[1][2]);
        c[0][2] = (a[1][0] * a[2][1]) - (a[2][0] * a[1][1]);
        c[1][0] = -(a[0][1] * a[2][2]) + (a[2][1] * a[0][2]);
        c[1][1] = (a[0][0] * a[2][2]) - (a[2][0] * a[0][2]);
        c[1][2] = -(a[0][0] * a[2][1]) + (a[2][0] * a[0][1]);
        c[2][0] = (a[0][1] * a[1][2]) - (a[1][1] * a[0][2]);
        c[2][1] = -(a[0][0] * a[1][2]) + (a[1][0] * a[0][2]);
        c[2][2] = (a[0][0] * a[1][1]) - (a[1][0] * a[0][1]);

        for (i = 0; i < 3; i++)

        {
            for (j = 0; j < 3; j++)
            {
                d[i][j] = c[j][i];
            }
        }

        printf("the determinent will be %d\n", det);
        printf("the inverse of the matrix will be \n");

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%f\t", 1.0 * d[i][j] / det);
            }
            printf("\n");
        }
    }
    else
    {
        printf("because determinent is less than or equal to zero inverse of input matrix is not possible");
    }
}
void quadratic_roots()
{

    float a, b, c, root1, root2, d;
    printf("enter the values of a  b  and c");
    scanf("%f%f%f", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    root1 = (-b + sqrt(d)) / (2 * a);
    root2 = (-b - sqrt(d)) / (2 * a);
    if (d >= 0)

    {
        printf("roots of the equation are%.2f   %.2f", root1, root2);
    }
    else
    {
        printf(" roots are imaginary");
    }
}
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
void digit_count_sum()
{
    int x, n, sum = 0;
    printf("enter the value of number ");
    scanf("%d", &n);
    x = n;
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        n = n / 10;

        count++;
         if(n==0)
        break;
    }
    printf("total number of digits are %d\n", count);
    for (int i = 0; i < count; i++)
    {

        sum += x % 10;
        x = x / 10;
    }
    printf("total sum of digits are %d", sum);
}
void currency_notes()
{

    int one, two, five, ten, twenty, fifty, hundred, twohundred, fivehundred, twothousand, amount;
    scanf("%d", &amount);
    twothousand = amount / 2000;
    fivehundred = (amount % 2000) / 500;

    hundred = (amount % 500) / 100;
    fifty = (amount % 100) / 50;
    ten = (amount % 50) / 10;
    five = (amount % 10) / 5;
    two = (amount % 5) / 2;
    one = (amount % 5) % 2;
    printf("  number of two thousand is %d\n five hundred is %d\n  hundred is %d\n fifty is %d\n and ten is %d\n five is %d\n two is%d\n one is %d\n :  ", twothousand, fivehundred, hundred, fifty, ten, five, two, one);
    printf("total numbner of notes are%d", twothousand + fivehundred + hundred + fifty + ten + five + two + one);
}
void table()
{
    int x, y, i;
    printf("enter the number of which the table will be printed\n");
    scanf("%d", &x);
    printf("enter a number to print how many terms will there be in the table  \n");
    scanf("%d", &y);

    for (int i = 1; i <= y; i++)
    {
        printf("  %d  X  %d  =  %d\n", x, i, i * x);
    }
}
void linear_equation_two_variable()
{
    int a, b, c, p, q, r;
    int x, y;
    int m, k, l;
    printf(" for the  1st linear equation ax+by=c,enter the value of the a ,b and  c \n");
    printf("enter the value of a \n");
    scanf("%d", &a);
    printf("enter the value of b \n");
    scanf("%d", &b);
    printf("enter the value of c \n");
    scanf("%d", &c);
    printf(" for the  2nd linear equation px+qy=r,enter the value of the p ,q and  r  \n");
    printf("enter the value of p \n");
    scanf("%d", &p);
    printf("enter the value of q \n");
    scanf("%d", &q);
    printf("enter the value of r \n");
    scanf("%d", &r);
    m = (b * r) - (c * q);
    k = (p * c) - (a * r);
    l = (b * p) - (q * a);
    if (((a / p) == (b / q)) && ((b / q) != (c / r)) && ((a / p) != (c / r)))
    {
        printf("no sloution for this set of linear equations ! \n ");
    }
    if (((a / p) == (b / q)) && ((b / q) == (c / r)) && ((a / p) == (c / r)))
    {
        printf(" infinite sloutions  for this set of linear equations ! \n ");
    }
    if ((b * p) != (q * a))
    {
        printf("unique  sloution for this set of linear equations ! \n ");
        printf(" the value of x = %d/%d\n", m, l);
        printf(" the value of y = %d/%d\n", k, l);
    }
}
void simple_interest()
{
    float p, t, r;
    printf("enter the value of principle amount\n ");
    scanf("%f", &p);
    printf("enter the rate of interest at which the loan was charged\n ");
    scanf("%f", &r);
    printf("enter the time in years for which the loan was given \n ");
    scanf("%f", &t);
    printf("the simple interest   is %f\n ", (p * r * t) / 100);
    printf("the priniple amount after the loan period is %f\n ", p + ((p * r * t) / 100));
}
void compound_interest()
{
    float p, t, r;
    printf("enter the value of principle amount\n ");
    scanf("%f", &p);
    printf("enter the rate of interest at which the loan was charged\n ");
    scanf("%f", &r);
    printf("enter the time in months  for which the loan was given \n ");
    scanf("%f", &t);
    float x, y;
    x = pow((1 + (r / 100)), (t / 12));
    y = p * (x - 1);
    printf("the compound interest is %f\n", y);
    printf("the total amount after  compound interest is  %f\n", y + p);
}
int main()
{
    int X;
    printf("*****************************************************************************************************************************\n");
    printf("1.addition and subtraction|| 2.multiplication|| 3.divide|| 4.remainder|| 5.power|| 6.exponent|| 7.natural log|| 8.lag base 10\n");
    printf("9.log base with any number|| 10.nth root|| 11.factorial|| 12.ncr|| 13.npr||\n");
    printf(" 14.matrix sum and difference || 21.matrix multiply|| 22.matrix to symmetric and skew symmetric\n");
    printf("23.matrix detrminent || 24.matrix symmetric|| 25.matrix skew symmetric|| 26.matrix transpose || 27.matrix inverse || 28.quadratic roots\n");
    printf("29.indian income tax 2022-2023|| 30.counting digits and sum|| 31.counting currency notes|| 38.table || 39.linear equation two variable\n");
    printf("40.simple interest|| 41.compound interest||\n ");
    printf("*****************************************************************************************************************************\n");
    printf("enter what function you want to pefornm\n");
    scanf("%d", &X);
    switch (X)
    {
    case 1:

        additon_subtraction();

        break;
    case 2:

        multiplication();

        break;
    case 3:

        division();

        break;
    case 4:

        modulo();

        break;
    case 5:

        power();

        break;
    case 6:

        exponent();

        break;
    case 7:

        natural_log();

        break;
    case 8:

        log_base_10();

        break;
    case 9:

        log_base_any_number();

        break;
    case 10:

        nth_root();

        break;
    case 11:
        factorial();

        break;

    case 12:
        break;

    case 13:

        matrix_sum_diff();

        break;
    case 14:

        matrix_multiply();

        break;
    case 15:

        matrix_to_symmetric_skew_symmetric();

        break;
    case 16:

        matrix_detrminent();

        break;
    case 17:

        matrix_symmetric();

        break;
    case 18:

        matrix_skew_symmetric();

        break;
    case 19:

        matrix_transpose();

        break;
    case 20:

        matrix_inverse();

        break;
    case 21:

        quadratic_roots();

        break;
    case 22:

        indian_taxation_2022_2023();

        break;
    case 23:

        digit_count_sum();

        break;
    case 24:

        currency_notes();

        break;
    case 25:

        table();

        break;
    case 26:

        linear_equation_two_variable();

    case 27:

        simple_interest();

    case 28:

        compound_interest();

        break;

    default:
        break;
    }

    return 0;
}

