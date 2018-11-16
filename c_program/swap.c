#include<stdio.h>

unsigned int a = 0x23456789;

unsigned int b = 0x4567; // output should be 0x7654

unsigned int c = 31; // 0101 0101

int main()
{   
	unsigned char arr[4] = {0};
	unsigned char index;
	
	unsigned int d;
	
	for ( index = 0; index < sizeof(a); index++)
	{
		arr[index] = (( a & (0x000000FF << (8*index))) >> (8*index));
		printf("a[%d] = %x\n", index,arr[index]);
	}
	
	//sqrt_ud(16);

	//for ( index = 0; index < sizeof(a); index++)
	//{
	//	arr[index] = (( a & (0xFF000000 >> (index*8))) >> ((8*(sizeof(a)-1))-(index*8)));
	//	printf("a[%d] = %x\n", index,arr[index]);
	//}
	
	b = (( b & 0x000F ) << 12 ) | (( b & 0x00F0 ) << 4) | ((b & 0x0F00) >> 4) | ( (b & 0xF000) >> 12 );
	
	c = ( c ^ (1 << 2));
	c = ( c ^ (1 << 6));
	
	printf("\n%x",b);
	printf("\n%d",c);
}