/*Pseudo code:
    Set counter to 0.
    loop over chars in text until '\0' is encountered:
        loop over chars in set until '\0' is encountered:
            if char in text == char in set:
                Increment counter. 
        end loop.
    end loop.
*/
#include <stdio.h>
#include "countCharactersInSet.h"

int countCharactersInSet(char * text, char * set)
{
    int count = 0;
    size_t i = 0;
    size_t j = 0;

    while (text[i] != '\n') {   
        while (set[j] != '\n') {
            if (text[i] == set[j]) {
                count++;
            }
            j++;
        } 
        i++;
        j=0;
    } 
    return count;
}
