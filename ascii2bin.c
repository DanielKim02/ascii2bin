/*
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
    //////////
    scanf("%c",&ascii_value);
    //////////
    int retval = read(0, &ascii_value, 1);
    while (((retval == 1) ||(retval == 0)) && (ascii_value != '\n')){
        digit = ascii_value - offset;
        if((digit ==1) || (digit == 0)){
            number = (number << 1) + digit;
        }
        else{
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
*/



//THIS IS NOT MY WORK, THIS IS A PEERS WORK, WHO I AM NOT TAKING ANY CREDIT FOR AND
// I AM  TEMPORARILY PUSHING IT TO THE SANDBOX SERVER TO COMPARE OUR TWO PROGRAMS
//
#include "stdio.h"
#include "stdlib.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
int main()
{
    int offset = 48;  
    int number = 0;
    char ascii_value;
    int retval = read(0, &ascii_value, 1);
    while ((retval == 1) && (ascii_value != '\n')) {
        int digit = ascii_value - offset;
        if ((digit == 1) || (digit == 0))
            number = (number << 1) + digit;
        retval = read(0, &ascii_value, 1);
    }
    printf("%u\n", number);
    return 0;
}


