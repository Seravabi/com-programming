#include<stdio.h>
#include <ctype.h> 
#include <string.h>

int main() {
    char st1[300], st2[300], st11[300], st22[300];
    scanf("%[^\n] %[^\n]", &st1, &st2);
    int len1 = strlen(st1);
    int len2 = strlen(st2);    
        for (int i = 0;i <= len1;i++){
            if(i == len1){
                st11[i] = '\0';
                break;
            }
            if(isupper(st1[i])){
                st11[i] = tolower(st1[i]);
            }

            else{
                st11[i] = toupper(st1[i]);
            }
        }
        for (int i = 0;i <= len2;i++){
            if(i == len2){
                st22[i] = '\0';
                break;
            }
            if(isupper(st2[i])){
                st22[i] = tolower(st2[i]);
            }
            else{
                st22[i] = toupper(st2[i]);
            }
        }
        
        printf("*** Results ***\n");
        printf("%s\n%s\n", st11,st22);
        printf("***************\n");
        if(strcasecmp(st1, st2) ==0){

        printf("Both strings are the same.");
        }
        else{
        printf("Both strings are not the same.");
        }
    return 0;
    }
