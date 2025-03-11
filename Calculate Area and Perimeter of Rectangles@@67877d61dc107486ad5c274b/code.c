#include<stdio.h>
struct Rectangle {
    int length;
    int breadth;
};
int main() {
    int num;
    scanf("%d", &num);
    struct Rectangle ap[num];
    for (int i = 0; i < num; i++) {
        scanf("%d", &ap[i].length);
        scanf("%d", &ap[i].breadth);
    }
    for (int i = 0; i < num; i++) {
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n", i + 1,
               (float)(ap[i].length * ap[i].breadth),
               (float)(2 * (ap[i].length + ap[i].breadth)));
    }
    return 0;
}
