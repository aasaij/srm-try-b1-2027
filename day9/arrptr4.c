#include <stdio.h>

int main(){ 
    int arr[10] = {10,2,3,4,5,600,7,8,22};
    int *ptr = arr;
    printf("%p\n", arr+5);
    printf("%d\n", *arr+5);
    printf("%d\n", *(arr+5));
    return 0;
}