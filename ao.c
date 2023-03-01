#include <stdio.h>
#include <math.h>

int Pow(int x, int n)
{
    return pow(x, n);
}

int Add(int x, int n)
{
    return x + n;
}

int Sub(int x, int n)
{
    return x - n;
}

int Mul(int x, int n)
{
    return x * n;
}

int Div(int x, int n)
{
    return x / n;
}

int main()
{
    int x, n, choice;
    printf("Enter the two operands: ");
    scanf("%d%d", &x, &n);

    printf("Enter your choice:\n");
    printf("1. Pow(x,n)\n");
    printf("2. Add(x,n)\n");
    printf("3. Sub(x,n)\n");
    printf("4. Mul(x,n)\n");
    printf("5. Div(x,n)\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Pow(%d,%d) = %d\n", x, n, Pow(x, n));
        break;
    case 2:
        printf("Add(%d,%d) = %d\n", x, n, Add(x, n));
        break;
    case 3:
        printf("Sub(%d,%d) = %d\n", x, n, Sub(x, n));
        break;
    case 4:
        printf("Mul(%d,%d) = %d\n", x, n, Mul(x, n));
        break;
    case 5:
        printf("Div(%d,%d) = %d\n", x, n, Div(x, n));
        break;
    default:
        printf("Invalid choice\n");
        break;
    }

    return 0;
}
