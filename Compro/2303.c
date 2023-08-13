#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    struct student_info{
        char name[60], surname[60], sex[10], id[12];
        int age;
        float gpa;
    }
    info[20], temp;
    char key[20], inpo[20];
    int i=0, j=0;
    for(i=0; i<20; i++){
        scanf("%s %s %s %d %s %f", info[i].name, info[i].surname, info[i].sex, &info[i].age, &info[i].id, &info[i].gpa);
    }
    scanf("%s", (inpo));
    for (i=0; i<20; i++){
        key[i] = tolower(inpo[i]);
    }
    for (i=0; i<20; i++){
        for (j=0;j<20-1-i;j++){
            if(strcmp(info[j].surname, info[j+1].surname) > 0 && strcmp(key, "surname") == 0){
            temp = info[j];
            info[j] = info[j + 1];
            info[j + 1] = temp;}
            else if(strcmp(info[j].name, info[j+1].name) > 0 && strcmp(key, "name") == 0){
            temp = info[j];
            info[j] = info[j + 1];
            info[j + 1] = temp;
    }
    else if(strcmp(info[j].id, info[j+1].id) > 0 && strcmp(key, "id") == 0){
            temp = info[j];
            info[j] = info[j + 1];
            info[j + 1] = temp;}
            }
        }
    for(i=0;i<20;i++){
        if (strcmp(info[i].sex,"Male") == 0){
            printf("Mr %c %s (%d) ID: %08s GPA %.2f\n", info[i].name[0], info[i].surname, info[i].age, info[i].id, info[i].gpa);}
        else{
            printf("Miss %c %s (%d) ID: %08s GPA %.2f\n", info[i].name[0], info[i].surname, info[i].age, info[i].id, info[i].gpa);}
        }
}
