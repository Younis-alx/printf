#include <stdio.h>
/*
    input : string
    output :
        if 0 < x < 32 or x >=127
            print hexa code after \x
        else 
            print character
*/
void int(char * s)
{
    char * tmp = s;
    while( *tmp != '\0'){
        if ( (*tmp > 0 && *tmp < 32) || *tmp >= 127)
        {
            printf("\\x%.2X", *tmp);
        }
        else
        {
            printf("%c", *tmp);
        }
        tmp++;
    }
}
