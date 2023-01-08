#include <REGX52.H>

void main()
{
//	P2=0XFE;
	P2_0=0;
	P2_0=1;
	while(1) 
	{
		if(P3_1==0 && P3_0==0) // 独立按键k1按下时。单片机上电时默认高电平，按下变成低电平
		{
			P2_0=0; // led亮
		} else 
		{
			P2_0=1;
		}
	}
}