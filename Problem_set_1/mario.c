#include "csd50.h"
#include <stdio.h>



int main(void) 
{ 
    int height;    
    do {
            height = get_int("Height:");

    }
    while (height > 8 || height < 1);
    
}




