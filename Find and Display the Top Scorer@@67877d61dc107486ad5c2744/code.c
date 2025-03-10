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
    scanf("%d", &n);
    struct Student students[n];
    struct Student topScorer; 
    float maxMarks = -1;
    for (i = 0; i < n; i++) {
        scanf("%lf %s %f", &students[i].rollNumber,students[i].name,students[i].marks);
        if (students[i].marks > maxMarks) {
            maxMarks = students[i].marks;
            topScorer = students[i];
        }
    }
    printf("Roll Number: %.0lf\n", topScorer.rollNumber);
    printf("Name: %s\n", topScorer.name);
    printf("Marks: %.2f\n", topScorer.marks);

    return 0;
}
