/* =====================================================================================
 *
 *       Filename:  convertGLCDHex.c
 *
 *    Description:  Takes in an array from MikroElectronica's GLCD Font Creator and reverses each element and
 *                  then combines every three elements and stores them in an
 *                  array 1/3 the size of the original. This is printed out in a
 *                  format useable in the Arduino Code for the POV display.
 *        Version:  1.0
 *        Created:  27/01/17 21:09:44
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jason Keane (), jason.keane1996@gmail.com
 *        Company:
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "data.h"

int reverse(int);
int combine(int, int);
int doStuff(int arr[]);

char theChar = 'R';
int unconvertedArraySize = 36;

int main()
{
    int rows = 16, columns = 18;

    doStuff(R);

    return 0;
}

int reverse(int num)
{
    int b = num;
    b = (b * 0x0202020202ULL & 0x010884422010ULL) % 1023;

    return b;
}

int combine(int num1, int num2)
{
    int result = (num1<<8) | num2;

    return result;
}

int doStuff(int arr[])
{

    int i = 0, j = 0, k = 0, l = 0;
    int convertedArray[18];
    // reverse each number in the array and store it in the same      position
    for (i = 0; i < unconvertedArraySize; i++)
    {
       arr[i] = reverse(arr[i]);
    }

    // combine 3 numbers of the array and store them in a new array 1/3 the size
    // of the original
    for (i = 0, j = 0, k = 1; i < unconvertedArraySize/2; i++, j+=2, k+=2)
    {
        convertedArray[i] = combine(arr[j], arr[k]);
    }

    // print out the array in a format that can be copied into the Arduino code
    printf("int %c[18] = {", theChar);
    for (i = 0; i < unconvertedArraySize/2; i++)
    {
        if (i < (unconvertedArraySize/2)-1)
        {
            printf("0x%x, ", convertedArray[i]);
        }
        else
        {
            printf("0x%x", convertedArray[i]);
        }
    }
    printf("};\n\n");
    theChar++;
}
