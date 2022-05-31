#ifndef __SERIAL_H__
#define  __SERIAL_H__
#include <stdint.h>
#include <stdio.h>

#define _PRINTF_PERSON "(%s,%d,%d,%d,%d)\n"
#define _SCANF_PERSON "(%[^,],%d,%d,%d,%d)\n"
#define _SERIALIZETEXT_PERSON "%ld%s%d%d%d%d"
struct Person{
    char * name;
    int age;
    int gender;
    int height;
    int weight;
};
void printfPerson(struct Person * person);
struct Person * generatePerson();
void destroyPerson(struct Person * person);
struct Person * reconstructPerson(FILE * fptr);
#endif