//https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true

//A pointer in C++ is used to share a memory address among different contexts (primarily functions). They are used whenever a function needs to modify the content of a variable, but it does not have ownership.
//In order to access the memory address of a variable, , prepend it with  sign. For example, &val returns the memory address of .


#include <stdio.h>

void update(int *a,int *b) {
    int sum = *a + *b;
    int diff = (*a > *b) ? (*a - *b) : (*b - *a);
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
