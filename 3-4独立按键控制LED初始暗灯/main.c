#include <REGX52.H>
char num=-1;
void Delay1ms(unsigned int xms)		//@12.000MHz
{
	unsigned char i, j;
	while(xms--) 
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
	
}

void main()
{
	while(1)
	{
		if(P3_1==0)
		{
			Delay1ms(20);
			while(P3_1==0);
			Delay1ms(20);
			
			if(num==7) 
			{
				num=-1;
			}
			num++;
			P2=~(0x01<<num);
			
		}
		if(P3_0==0)
		{
			Delay1ms(20);
			while(P3_0==0);
			Delay1ms(20);
			
			if(num==0 || num==-1)
			{
				num=7;
			}
			else
			{
				num--;
			}
			P2=~(0x01<<num);
			
		}
		
	}
}