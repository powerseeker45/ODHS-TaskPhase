#include <stdio.h>
#include <stdlib.h>
#include "ledFunctions.h"

void main()
{
    //initize led
    LED *l1;
    LED *l2;
    
     l1= (LED * ) malloc(sizeof(LED));
    l2= (LED * ) malloc(sizeof(LED));

    int n;
    initializeLED(l1,1);
    initializeLED(l2,2);

    printf("state of led after initialization : \n");
    printLED(l1);
    printLED(l2);

    //setting led
    setLED(l1);
    setLED(l2);

    printf("state of led after setting : \n");
    printLED(l1);
    printLED(l2);

    //resetting led

    //setting led
    resetLED(l1);
    resetLED(l2);

    printf("state of led after resetting : \n");
    printLED(l1);
    printLED(l2);


// toggling leds
    printf("enter number of times to be toggled : \n");

    scanf("%d",&n);

    //setting one led as on and one as off

    setLED(l1);
    resetLED(l2);
    printf("state just before toggling : \n");
    printLED(l1);
    printLED(l2);

    
    printf("\ntoggling the leds alternatively");
    for (int i=0;i<n;i++)
    {//toggles led 1 only
        if (i%2==0)

            toggleLED(l1);

        else
            toggleLED(l2); //toggles led 2 
        printf("\n%dth toggle : \n",(i+1));
        printLED(l1);
        printLED(l2);


    }

}