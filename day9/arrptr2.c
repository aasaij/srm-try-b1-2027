#include <stdio.h>

int main(){ 
    int arr[10] = {1,2,3,4,5,6,7,8,22};
    int *ptr;
    ptr = arr; // ptr = &arr[0]
    printf("%p\n", ptr++);
    ptr = ptr + 5;//valid
    arr = arr+5;//invalid
    printf("%p\n", ptr++);;;;
    printf("%p\n", ptr++);
    printf("%d\n", *ptr);
    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[-1]);
    return 0;
}