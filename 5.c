#include <stdio.h>
#include <stdlib.h>

struct University {
    char* name;
    int numberOfStudents;
    int rating;
};

float averageStudents(struct University data[], int n) {
    int totalStudents = 0;
    for (int i = 0; i < n; i++) {
        totalStudents += data[i].numberOfStudents;
    }

    return (float) totalStudents / n;
}

int main() {
        struct University universities[3] = {
        {"Sirius", 5000, 4},
        {"Agrarniy", 7000, 5},
        {"Cambridge", 10000, 8}
    };

    float avg = averageStudents(universities, 3);
    printf("Среднее количество студентов: %.2f\n", avg);
    return 0;
}