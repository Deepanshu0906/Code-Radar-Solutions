// Your code here...
#include <stdio.h>
#include <string.h>

struct Student {
    double rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n, i;
    //printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (i = 0; i < n; i++) {
        scanf("%lf %s %f", &students[i].rollNumber,students[i].name,&students[i].marks);
    }
    for (i = 0; i < n; i++) {
        printf("Roll Number: %.0lf, Name: %s, Marks: %.2f",students[i].rollNumber,students[i].name,students[i].marks);
    }

    return 0;
}