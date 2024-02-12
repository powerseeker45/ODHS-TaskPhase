#include <stdio.h>

/* The following macros define the state of a pin */
#define ON 1
#define OFF ~ON

/* The following macros define return value of a function */
#define SUCCESS 1
#define FAIL 0

/* Definition of the structure for LED */
typedef struct{
    unsigned int status;        // It depicts the status of the pin. It can have one of the state values defined above
    int pinNo;                  // It depicts the pin number of the LED
}LED;

/* ====== How to use the library ===== */
/* 
    1. Configure the LED pin
    2. Set, Reset, Toggle the pin according to the use of LED
    3. Use display function to display the status of the pin
*/


/* This function is used to configure a LED pin 
    Parameters:
        pointer to led structure
        pin number
    Return value:
        SUCCESS - if the function runs successfully
        FAIL - if pin number is negative
*/
int initializeLED(LED *led, int pin)
{
    if(pin < 0)
        return FAIL;
    led->pinNo = pin;
    led->status = OFF;
    return SUCCESS;
}


/* This function sets the led pin
    Parameter:
        pointer to led structure
*/
void setLED(LED *led)
{
    led->status = ON;
}


/* This function resets the led pin
    Parameter:
        pointer to led structure
*/
void resetLED(LED *led)
{
    led->status = OFF;
}


/* This function toggles the led pin
    Parameter:
        pointer to led structure
*/
void toggleLED(LED *led)
{
    unsigned int stat = led->status;
    led->status = ~(stat);
}


/* This function sdisplays the state of the led pin
    Parameter:
        pointer to led structure
*/
void printLED(LED *led)
{
    printf("  LED %d is ",led->pinNo);
    if(led->status == ON)
        printf("ON\n");
    else
        printf("OFF\n");
}