#include <stdio.h>
#define LEN 20
#define MAX 1

typedef struct {
    char first_name[LEN];
    char initial;
    char second_name[LEN];
} Person_Name;

typedef struct {
    Person_Name name;
    int id_number;
    int age;
    char module_code[10];
} Student;

void readStudent(Student *s) {
    printf("Enter first name: ");
    scanf("%s", s->name.first_name);

    printf("Enter initial: ");
    scanf(" %c", &s->name.initial);

    printf("Enter second name: ");
    scanf("%s", s->name.second_name);

    printf("Enter ID: ");
    scanf("%d", &s->id_number);
    printf("Enter age: ");
    scanf("%d", &s->age);
    printf("Enter module code: ");
    scanf("%s", s->module_code);
}
void displayStudent(Student s) {
    printf("%s %c %s | ID: %d | Age: %d | Module: %s\n",
           s.name.first_name, s.name.initial, s.name.second_name,
           s.id_number, s.age, s.module_code);
}
void displayAll(Student s[], int n) {
    for(int i = 0; i < n; i++) {
        displayStudent(s[i]);
    }
}
int main() {
    Student students[MAX];

    for(int i = 0; i < MAX; i++) {
        printf("\nEnter data for student %d:\n", i+1);
        readStudent(&students[i]);
    }
    printf("\nStudent List:\n");
    displayAll(students, MAX);
    return 0;
}

