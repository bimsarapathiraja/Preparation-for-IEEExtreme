//find missing value of a list of range(1, n)

#include<stdio.h>

int getMissingNo(int a[], int n)
{
    int i;
    int x1 = a[0]; //XOR of array
    int x2 = 1;   //XOR of range

    for(i = 1; i < n; i++){
        x1 = x1^a[i];
    }

    for(i = 2; i <= n+1; i++){
        x2 = x2^i;
    }

    return (x1^x2);
}

int main()
{
    int a[] = {1,2,4,5,6};
    int miss = getMissingNo(a, 5);
    printf("%d", miss);
    getchar();
}
