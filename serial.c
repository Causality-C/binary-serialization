#include "serial.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person * generatePerson(){
    struct Person * person = malloc(1 * sizeof(struct Person * ));

    // Handle Name
    size_t len = strlen("Jeremy Wang");
    person->name = malloc(len);
    strcpy(person->name,"Jeremy Wang");

    // Handle all other fields
    person->weight = 82;
    person->height = 180;
    person->gender = 0;
    person->age = 32;
    return person;
}

void destroyPerson(struct Person * person){
    free(person->name);
    free(person);
}

void printfPerson(struct Person * person){
    printf(_PRINTF_PERSON, person->name,person->gender,person->height,person->weight,person->age);
}

struct Person * reconstructPerson(FILE * fptr){
    struct Person * person = malloc(sizeof(struct Person *));
    person->name = malloc(20 * sizeof(char));
    fscanf(fptr, _SCANF_PERSON, person->name,&person->age,&person->gender,&person->height,&person->weight);
    return person;
}
