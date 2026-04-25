#include <stdio.h>
#include "student.h"

int main() {
    Student s1 = {1001, "xiasheng", 85.0f};
    printf("--- Student Manager ---\n");
    print_student(s1);
    update_score(&s1, 98.5f);
    print_student(s1);
    return 0;
}
