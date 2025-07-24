#include <stdio.h>
#include <stdlib.h>
#include "array-4-file.h"


int main(void)
{
    int i;

    for (i = 0; i < ARRAY_SIZE + 1; i++) {
        printf("add_array(%d)=%d: ", i, add_array(i));
        print_array();
    }
    for (i = 0; i < ARRAY_SIZE + 1; i++) {
        printf("delete_array()=%d: ", delete_array());
        print_array();
    }

    return EXIT_SUCCESS;
}

