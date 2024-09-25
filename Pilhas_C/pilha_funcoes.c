#include <stdio.h> 
void f1 (int a) {
    printf("entrei na f1: %d\n", a);
    a++;
}
void f2 (int a) {
    printf ("entrei na f2: %d\n", a);
    a++;
    f1(a);
}
void f3 (int *a) {
    printf("valor de a na chegada a f3: %d\n", *a);
    *a = *a + 1;
}
void f4 (int *a) {
    printf("entrei na f4: %d\n", *a);
    *a = *a + 1;
}
int main () {
    int a = 10;
    f1(a);
    f2 (a);
    f3(&a);
    f4(&a);
    printf("terminei tudo, a = %d!\n", a);
    return 0;
}
        
      