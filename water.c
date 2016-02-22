/**
* pset 1
* water.c
* Evan Million <million.evan@gmail.com>
**/


#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Initializing minutes for user's input
    int minutes;
    do
    {
        // Asks user for input in minutes
        printf("How long, in minutes, is your shower? ");
        minutes = GetInt();
    }
    // While minutes is less than 1, loop will continue asking for input
    while (minutes < 1); 
    
    /** 
    *  Bottles is initialized and calculated by multiplying minutes by 192 oz 
    *  which is the average amount of water flowing in an hour and dividing 
    *  by 16 which is the number of ounces in a standard-sized water bottle
    **/
    
    int bottles = ((minutes * 192) / 16);
    printf("You've used %i of bottles of water\n", bottles);
}
