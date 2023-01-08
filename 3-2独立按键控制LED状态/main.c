#include <REGX52.H>

void Delay1ms(unsigned int xms)		//@12.000MHz
{
	unsigned char i, j;
	while(xms) 
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}
	
}

void main()
{
	while(1)
	{
		if(P3_1==0) // 按下k1
		{
			Delay1ms(20);
			while(P3_1==0); // 如果一直按着k1不放手，则进入死循环
			Delay1ms(20);
			P2_0=~P2_0; // 直到松开k1，led的D1状态取反
		}
	}
}