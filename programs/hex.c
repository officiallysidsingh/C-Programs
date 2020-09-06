#include<stdio.h>

union tagname
{
	unsigned int a;
	unsigned char s[4];
};

union tagname object;

int main()
{
	char i; //for loop counter

	//assign an integer number
	object.a=1000000;

	printf("hex: %X\n",object.a);

	printf("Indivisual bytes: ");
	for(i=3;i>=0;i--)
		printf("%02X ",object.s[i]);

	printf("\n");
	return 0;
}
