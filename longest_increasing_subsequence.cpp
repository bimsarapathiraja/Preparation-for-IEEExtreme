//number sequence and find the length of longest increasing subsequence

#include<stdio.h>
#include<iostream>

int lis(int a[], int n)
{
    //int n = size(a) / sizeof(a[0]);

    int lst[n];

    for(int i = 0; i < n; i++){
        lst[i] = 1;
    }

    int maxx = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(a[i] > a[j] && lst[i] < lst[j]+1){
                lst[i] = lst[j] + 1;
            }
        }
        if(maxx < lst[i]){
            maxx = lst[i];
        }
    }
    return maxx;
}

int main()
{
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
    int longest = lis(arr, 8);
    printf("%d", longest);
}
