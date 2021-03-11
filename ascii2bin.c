
#include "stdio.h"
#include "stdlib.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

int main () {
	int offset = 48;
    int number = 0;
    int digit;
    char ascii_value;
    
    int retval = read(0, &ascii_value, 1);
    while ((retval == 1) && (ascii_value != '\n')){
        digit = ascii_value - offset;
        if((digit ==1) || (digit == 0)){
            number = (number << 1) + digit;
        }
        else if(digit != 1 && digit !=0){
            return 1;
        }  
        retval = read(0, &ascii_value, 1);
    }
    
    if(number>4294967296){
        return 1;
    }    
    printf("%u\n", number);
    return 0;
}
