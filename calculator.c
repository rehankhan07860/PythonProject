#include <stdio.h>
#include <stdlib.h>

int main()
{
    while (1)
    {
        int choise, a, b;
        float x, y;
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. multiplaction");
        printf("\n4. divison");
        printf("\n5. cheak odd-even");
        printf("\n6. N natural number");
        printf("\n7. Exit");
        printf("Enter your choise\n");
        scanf("%d", &choise);

        switch (choise)
        {
        case 1:
            printf("enter any two number");
            scanf("%d%d", &a, &b);
            printf("the sum of your two numbers is %d", a + b);
            break;
        case 2:
            printf("enter any two number");
            scanf("%d%d", &a, &b);
            printf("the subtraction of your numbers is %d", a - b);
            break;
        case 3:
            printf("enter any two number");
            scanf("%d%d", &a, &b);
            printf("multiplaction of your numbers is %d", a * b);
            break;
        case 4:
            printf("enter any two numbers");
            scanf("%f%f", &x, &y);
            printf("divison of your numbers is %f", x / y);
            break;
        case 5:
            printf("enter any number");
            scanf("%d", &a);
            if (a % 2 == 0)
                printf("the number is even");
            else
                printf("the number is odd");
            break;
        case 6:
            printf("enter any number for n natural number ");
            scanf("%d", &a);
            for (b = 1; b <= a; b++)
            {
                printf("%d", b);
            }
        case 7:
            exit(0);

        default:
            printf("invalid choise");
        }
    }

    return 0;
}