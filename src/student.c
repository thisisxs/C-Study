#include <stdio.h>
#include "student.h"

void print_student(Student s) {
    printf("[ID: %d] Name: %s | Score: %.2f\n", s.id, s.name, s.score);
}

void update_score(Student *s, float new_score) {
    if (s != NULL) {
        s->score = new_score;
    }
}
