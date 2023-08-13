#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct student{
    char firstname[100], lastname[100];
    int midterm, final, assignment;
};

int calScore(struct student students[], int i){
    return students[i].midterm + students[i].final+students[i].assignment;
}

int checkScore(struct student students[], int calScore, int i){
    if (calScore > 100)
    return 1;
    if ((students[i].midterm < 0 || students[i].midterm > 100) || students[i].final < 0 || students[i].final > 100 || students[i].assignment < 0 || students[i].assignment > 100) return 1;
    return 0;
}

void printScore(struct student students[]){
    int i;
    printf("1234567890123456789012345678901234567890\n");
    printf("M    F    A    TT\n");
    for (i=0;i<10;++i) {
        if (strcmp(students[i].firstname, "END") == 0)
        break;
        printf("%c %s        %d   %d   %d   %d\n", students[i].firstname[0], students[i].lastname, students[i].midterm, students[i].final, students[i].assignment, students[i].midterm+students[i].final+students[i].assignment);
    }
}

int main(){
    int i = 0;
    struct student students[10];
    while (1){
        scanf("%s", students[i].firstname);
        if (strcmp(students[i].firstname, "END") == 0)
        break;
        scanf("%s %d %d %d", students[i].lastname, &students[i].midterm, &students[i].final, &students[i].assignment);
        while (checkScore(students, calScore(students, i), i) == 1){
            printf("Error\n");
            scanf("%s", students[i].firstname);
            if (strcmp(students[i].firstname, "END") == 0)
            break;
            scanf("%s %d %d %d", students[i].lastname, &students[i].midterm, &students[i].final, &students[i].assignment);
        }
        if (strcmp(students[i].firstname, "END") == 0)
        break;
        ++i;
    }
    printScore(students);
}
