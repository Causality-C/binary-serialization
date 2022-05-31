#include <stdlib.h>
#include <stdio.h>
#include "serial.h"

int main(){
    struct Person * pp = generatePerson();
    printf(_PRINTF_PERSON, pp->name,pp->gender,pp->height,pp->weight,pp->age);
    printf("Size of Person: %ld\n", sizeof(pp));
    printf("%p\n",&pp);
    destroyPerson(pp);
}