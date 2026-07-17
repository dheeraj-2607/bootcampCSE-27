#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void trigger_crash(char *secure_data) {
    // Intentional bug: modifying a NULL pointer causes a Segmentation Fault
    strcpy(secure_data, "CRITICAL_ERROR"); 
}

int main() {
    char *buffer = (char *)malloc(10*sizeof(char));
     
    
    printf("Starting the program...\n");
    printf("Attempting to copy data into buffer...\n");
    
    trigger_crash(buffer); 
    
    printf("This line will never print.\n");
    return 0;
}


