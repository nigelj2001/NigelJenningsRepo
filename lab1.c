/*
 * Implement your solution in thi file
 
 #include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include "lab1.h"










char* readString(char* file){

    char* ptr = malloc(MAX_LINE_LEN*sizeof(char));

    FILE* txt = fopen(file,"r");

    strcpy(ptr,fgets(ptr,MAX_LINE_LEN-1, txt));

    fclose(txt);

    return ptr;

}




char* mysteryExplode(const char* str){

    int length = strlen(str)-1;

    char* newSt = calloc(((length*(length+1))/2),1);

    int count = 0;

    for(int i = 0; i < length; i++){

        for(int n = 0; n < i+1; n++){

            strncat(newSt,&str[n],1);

        }

    }

    return newSt;

}

 *
 */

