#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>

int main()
{

	int color;
	int bcolor;
	int x,y;
	int d;

	//init random to return random value each time
	randomize();
	//clears the screen
	clrscr();

	//infinite loop until key is not pressed 
	while(!kbhit())
	{
		//gerenate randon text and background color
		color =rand()%16;
		bcolor=rand()%16;
		
		//define text color 
		textcolor(color);
		//define background color
		textbackground(bcolor);
		//check if both colors are same, continue the loop
		if(color==bcolor)
			continue;
		
		//generate random X and Y Co-ordinates
		x = rand()%75;
		y = rand()%20;
		//define position to print the text 
		gotoxy(x,y);
		//print the text 
		cprintf("IncludeHelp");
		//delay 
		delay(100);
	}

	return 0;
}