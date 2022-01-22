#include <iostream>

using namespace std;

int main() {
    const int MAX_STUDENTS_IN_CLASS = 1000;

    int classes, studentsInClass;
    int studentArray[MAX_STUDENTS_IN_CLASS];

    cin >> classes;

    for(int i = 0; i < classes; i++) {
        int totalPoints = 0, aboveAverageStudents = 0;
        cin >> studentsInClass;

        for(int j = 0; j < studentsInClass; j++) {
            int pointsEarned;
            cin >> pointsEarned;
            studentArray[j] = pointsEarned;
            totalPoints += pointsEarned;
        }

        float average = totalPoints / studentsInClass;

        for(int j = 0; j < studentsInClass; j++) {
            if(studentArray[j] > average) {
                aboveAverageStudents++;
            }
        }

        average = ((float) aboveAverageStudents / studentsInClass) * 100;
        printf("%.3f%%\n", average);
    }
}
