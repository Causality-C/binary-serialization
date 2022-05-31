#include <stdlib.h>
#include <stdio.h>
#include "serial.h"
#include <string.h>
#include <assert.h>

// Serialize to text format 
int main(){
    struct Person * pp = generatePerson();
    printfPerson(pp);

    // Serialize Person 
    FILE *fptr;
    fptr = fopen("file.txt","w+");
    if(fptr == NULL){
        printf("Error!\n");
        exit(1);
    }
    printfPerson(pp);
    fseek(fptr,0, SEEK_SET);

    // Reading the person back
    struct Person * recon = reconstructPerson(fptr);
    printfPerson(recon);
    fclose(fptr);

     // Checking that Serialization Worked
    assert(!strcmp(recon->name,pp->name));
    assert(recon->age == pp->age);
    assert(recon->height == pp->height);
    assert(recon->weight == pp->weight);
    assert(recon->gender == pp->gender);
    
    // Unserialize Person 
    destroyPerson(pp);
    destroyPerson(recon);
}