#include <stdio.h>
#include <string.h>
int main(){
    struct student_info
    {
        char name[60], surname[60], sex[6];
        int  age, id;
        float gpa;
    }student_info1;
    scanf("%s %s %s %d %d %f", &student_info1.name, &student_info1.surname, &student_info1.sex, &student_info1.age, &student_info1.id, &student_info1.gpa);
    if (strcmp(student_info1.sex, "Male") == 0){
        strcpy(student_info1.sex, "Mr");
    }else{
        strcpy(student_info1.sex, "Miss");}
    printf("%s %c %s (%d) ID: %d GPA %.2f", student_info1.sex, student_info1.name[0], student_info1.surname, student_info1.age, student_info1.id, student_info1.gpa);
}