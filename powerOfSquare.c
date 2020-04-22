/**************************************************************************************************
 Name        : ex19.c
 Author      : Mohamed Tarek
 Description : Assignment 2 - Ex19
 **************************************************************************************************/

#include <stdio.h>
#include <math.h>

int superPower(int z)
{
	int result;
	result = (int)sqrt(z);
	if(z == (result * result))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	int num,res;
	scanf("%d",&num);
	res = superPower(num);
	if(res == 1)
	{
		printf("The input number %d is super square \n",num);
	}
	else
	{
		printf("The input number %d is not super square \n",num);
	}
	return 0;
}