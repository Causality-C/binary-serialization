#ifndef __SERIAL_H__
#define  __SERIAL_H__
#include <stdint.h>

#define _PRINTF_PERSON "(%s,%d,%d,%d,%d)\n"
struct Person{
    char * name;
    uint8_t age;
    uint8_t gender;
    uint8_t height;
    uint16_t weight;
};
struct Person * generatePerson();
void destroyPerson(struct Person * person);
#endif