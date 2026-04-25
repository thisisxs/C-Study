#ifndef STUDENT_H
#define STUDENT_H

// Structure definition for a student record
typedef struct {
	int id;
	char name[50];
	float score;
} Student;

// Fuction prototypes (declarations)
void print_student(Student s);
void update_score(Student *s, float new_score);

#endif





