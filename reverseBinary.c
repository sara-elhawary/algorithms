/**************************************************************************************************
 Name        : ex15.c
 Author      : Mohamed Tarek
 Description : Assignment 2 - Ex15
 **************************************************************************************************/
 
#include <stdio.h>

#include <stdio.h>

unsigned char reverseBits(unsigned char num)
{
    unsigned char  NO_OF_BITS = sizeof(num) * 8;
    unsigned char reverse_num = 0, i;

    /*
     * start looping from index 0 to n-1 and check every bit
     * if it is equals to one we need to set the reverse bit location value to one
     * if it is zero do no nothing as the reverse bit location equals to zero (reverse_num = 0 as initial value)
     */
    for (i = 0; i < NO_OF_BITS; i++)
    {
    	/* check if this bit is equals to one */
        if(num & (1 << i))
            reverse_num |= (1 << ((NO_OF_BITS - 1) - i));
    }

    return reverse_num;
}

void print_binary(unsigned char num)
{
    unsigned char i;
    unsigned char mask=0x80;
    unsigned char  NO_OF_BITS = sizeof(num) * 8;

    printf("The Binary Representation of number %d is : ",num);

    /*
     * start looping from index n-1 to 0 and check every bit
     * if it is equals to one print 1
     * if it is zero print 0
     */
    for(i=0;i<NO_OF_BITS;i++)
    {
        ((num<<i) & mask) ? printf("1"):printf("0");
    }

    printf("\n");
}

int main(void)
{
	unsigned char num1 = 0b11010001;
	unsigned char num2;

	/* Reverse num1 and put the new value in num2 */
	num2 = reverseBits(num1);

	/* print the value of num2 */
	print_binary(num2);
}
