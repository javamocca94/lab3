#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#define ADD_VEHICLE 1
#define REMOVE_VEHICLE 2
#define SORT 3
#define SHOW_REGISTRY 4
#define SHOW_VEHICLE 5
#define QUIT 0

int main() {
    
     do {
        printf("1. Add Vehicle\n");
        printf("2. Remove Vehicle\n");
        printf("3. Sort\n");
        printf("4. Show Vehicle\n");
        printf("5. Show Registry\n");
        printf("0. Quit\n");
        
        fgets(namn, size, stdin);
    
        switch(meny) {
            case ADD_VEHICLE:
            
                break;
            case REMOVE_VEHICLE:
          
                break;
            case SORT:
           
                break;
            case SHOW_REGISTRY:
            
                break;
            case SHOW_VEHICLE:
            
                break;
            case QUIT:
            return - 1;
                break; 
            default:
                printf("Ogiltigt val\n");
        }
    } while (meny != 0);
        
   return 0;
}

    
 