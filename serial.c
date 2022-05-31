#include "serial.h"
#include <string.h>
#include <stdlib.h>

struct Person * generatePerson(){
    struct Person * person = malloc(1 * sizeof(struct Person * ));

    // Handle Name
    person->name = malloc( 20 * sizeof(char));
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