<<<<<<< HEAD
#include "stdio.h"
#include "stdlib.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

int main () {
	offset = 2;
    number = 0;
    
    retval = read(0, &ascii_value, 1);
    while (retval == 1)
        digit = ascii_value - offset;
        number = (number << 1) + digit;  
        retval = read(0, &ascii_value, 1);
        
    printf("%u\n", number);
    return 0;
}
=======
//I do not understand what is going on
//I do not understand what is going on

void main(){
	printf("Hello World");
}
>>>>>>> d01aafee230d7d8096fd574028b7377892c29132
