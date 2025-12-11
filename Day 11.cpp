//A pointer in C++ is used to share a memory address among different contexts (primarily functions). They are used whenever a function needs to modify the content of a variable, but it does not have ownership.
//In order to access the memory address of a variable, , prepend it with  sign. For example, &val returns the memory address of .
//This memory address is assigned to a pointer and can be shared among functions. For example,  assigns the memory address of  to pointer . To access the content of the memory pointed to, prepend the variable name with a *. For example, *p will return the value stored in  and any

#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = abs(*a - *b);

    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    update(&a, &b);

    printf("%d\n%d", a, b);

    return 0;
}
