#include <stdio.h>

// signatures
void exampleOne();
void exampleTwo();
void exampleTree();

// auxiliary functions
long long PowTwo(long long base, long long exponent);
int RecursiveSearch(int *a, int x, int start, int end);
int max(int x, int y);
int ValueMaxTwo(int a[], int init, int end);


int main()
{
    int option;

    do
    {
        printf(" === Menu do Aluisio Rego ===\n");
        printf("1 - View Example One\n");
        printf("2 - View Example Two\n");
        printf("3 - View Example Tree\n");
        printf("0 - Exit\n");
        printf("Option:\n");
        scanf("%i", &option);

        switch (option)
        {
        case 1:
            exampleOne();
            break;

        case 2:
            exampleTwo();
            break;
        case 3:
            exampleTree();
            break;

        case 0:
            printf("Leaving the System...\n");
            break;

        default:
            printf("This option does not exist, Aluisio...\n");
            break;
        }
    } while (option != 0);

    return 0;
}

void exampleOne()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 3;
    int idx = RecursiveSearch(a, x, 0, n - 1);
    printf("---------------------------\n");
    printf("You are in example one - ex01\n");
    printf("Index of %d: %d\n", x, idx);
    printf("-----------------------------\n");
}

int RecursiveSearch(int *a, int x, int start, int end)
{
    if (start > end)
        return -1;

    int middle = (start + end) / 2;

    if (a[middle] == x)
        return middle;
    else if (a[middle] < x)
        return RecursiveSearch(a, x, middle + 1, end);
    else
        return RecursiveSearch(a, x, start, middle - 1);
}

void exampleTwo()
{
    long long base, exponent;
    printf("---------------------------\n");
    printf("You are in example two - ex02\n");
    printf("-----------------------------\n");

    printf("Please enter the value of base:\n");
    scanf("%lld", &base);

    printf("Please enter the value of exponent:\n");
    scanf("%lld", &exponent);

    long long result = PowTwo(base, exponent);

    printf("Results:\n");
    printf("%lld raised to %lld: %lld\n", base, exponent, result);
}

long long PowTwo(long long base, long long exponent)
{
    if (exponent == 0)
        return 1;

    long long half = PowTwo(base, exponent / 2);

    if (exponent % 2 == 0)
        return half * half;
    else
        return half * half * base;
}

void exampleTree()
{
    int a[] = {3, 7, 2, 9, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int maxValue = ValueMaxTwo(a, 0, n - 1);
    printf("---------------------------\n");
    printf("You are in example tree - ex03\n");
    printf("-----------------------------\n");
    printf("The largest value in the vector is %d\n", maxValue);
}

int max(int x, int y) {
    return (x > y) ? x : y;
}

int ValueMaxTwo(int a[], int init, int end)
{
    if (end - init <= 1)
        return max(a[init], a[end]);
    else
    {
        int m = (init + end) / 2;
        int value1 = ValueMaxTwo(a, init, m);
        int value2 = ValueMaxTwo(a, m + 1, end);
        return max(value1, value2);
    }
}