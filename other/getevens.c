#include <stdio.h>

int * get_evens();
void print(int);

int main(){
    int *a;
    int k;

    a = get_evens(); /* get first 5 even numbers */
    for (k=0; k<5; k++)
        printf("%d\n", a[k]);

    print(4);    
    
    return 0;
}

int * get_evens(){
    static int nums[5];
    int k;
    int even = 0;

    for (k = 0; k < 5; k++) {
        nums[k] = even += 2;
    }

    return (nums);
}

void print(int n){
    if (n < 0) return;
    printf("%d", n);
    print (n -1);
}