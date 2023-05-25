#include <graphics.h>
#include <time.h>



using namespace std;

//Global Variables 
int i = 0, x = 0, p1score = 0, p2score = 0, counter = 0, pagecheck = 0, exitcheck = 0, how = 0, about = 0, random,one_one, one_two,two_one,two_two;
char p1string[5];
char p2string[5];

// Prototyping all the Functions
void randomNum();
void welcomePage();
void playButton();
void board();
void scoreCircle1();
void scoreCircle2();
void buffer();
void backButton(int buttonX, int buttonY, int buttonWidth, int buttonHeight, string input_string);
void p1DiceButton(int buttonX, int buttonY, int buttonWidth, int buttonHeight);
void p2DiceButton(int buttonX, int buttonY, int buttonWidth, int buttonHeight);
void optionButton(int buttonX, int buttonY, int buttonWidth, int buttonHeight);
void executeSet(int setNumber);
void optionPage();
void playPage();
void escapeCheck();
void exitButton();
void musicOffButton(int buttonX, int buttonY, int buttonWidth, int buttonHeight);
void soundOffButton(int buttonX, int buttonY, int buttonWidth, int buttonHeight);
void howToPlayButton(int buttonX, int buttonY, int buttonWidth, int buttonHeight);
void aboutUsButton(int buttonX, int buttonY, int buttonWidth, int buttonHeight);
void backToWelcomeButton(int buttonX, int buttonY, int buttonWidth, int buttonHeight);
void howPage();
void aboutPage();
void turnMusicOff();


// Driver Program
int main()
{
	// Creating a window of given size
	initwindow(1366, 768, "Snake and Ladder C++");
	

	int page = 0;
	while (1)
	{
		setactivepage(page);
		setvisualpage(1 - page);
		
		if (pagecheck == 0)
		{
			welcomePage();
			playButton();
			optionButton(643,611,766,651);
			exitButton();
		}
		else if (pagecheck == 1)
		{
			playPage();
			p1DiceButton(10, 620, 200, 50);
			p2DiceButton(1140, 620, 185, 68);
			backButton(10, 20, 100, 70, "Exit");
		}
		else if (pagecheck == 2)
		{
			optionPage();
			musicOffButton(510,150,345,85);
			soundOffButton(510,272,345,85);
			howToPlayButton(510,394,345,85);
			if (how != 0)
			{
				howPage();
			}
			aboutUsButton(510,516,345,85);
			if (about != 0)
			{
				aboutPage();
			}
			backToWelcomeButton(510,643,345,85);
		}
		escapeCheck();
		page = 1 - page;
	}
	getch();
	closegraph();
	return 0;
}

void randomNum()
{
	srand(time(0));
	random = ((rand() % 100) + 1);
}
// Defining all the Functions
void playButton()
{	
	// Check if the button is clicked
	if (true)
	{
		if (ismouseclick(WM_LBUTTONDOWN))
		{
			int mouseX = mousex();
			int mouseY = mousey();

			if (mouseX >= 643 && mouseX <= 766 && mouseY >= 566 && mouseY <= 596)
			{
				// Action on button pressed
				clearmouseclick(WM_LBUTTONDOWN);
				cleardevice();
				board();
				pagecheck += 1;
			}
		}
	}
}
void board()
{
	
	readimagefile("playPage.jpg", 0, 0, 1366, 768);
	putimage(0, 0, &bgiout, 0);
	
	setcolor(BLACK);
	rectangle(300, 80, 920, 650);
	setcolor(BLACK);
	int i = 80;
	while (i <= 550)
	{
		i = i + 57;
		line(300, i, 920, i);
	}
	int j = 300;
	while (j <= 850)
	{
		j = j + 62;
		line(j, 80, j, 650);
	}
	setfillstyle(SOLID_FILL, RED);
	floodfill(305, 85, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(370, 85, BLACK);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(435, 85, BLACK);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(500, 85, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(565, 85, BLACK);
	setfillstyle(SOLID_FILL, RED);
	floodfill(630, 85, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(695, 85, BLACK);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(760, 85, BLACK);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(825, 85, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(890, 85, BLACK);
	//
	// 2nd row
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(305, 150, BLACK);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(370, 150, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(435, 150, BLACK);
	setfillstyle(SOLID_FILL, RED);
	floodfill(500, 150, BLACK);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(565, 150, BLACK);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(630, 150, BLACK);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(695, 150, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(760, 150, BLACK);
	setfillstyle(SOLID_FILL, RED);
	floodfill(825, 150, BLACK);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(890, 150, BLACK);

	// 3rd row

	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(305, 215, BLACK);
	setfillstyle(SOLID_FILL, RED);
	floodfill(370, 215, BLACK);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(435, 215, BLACK);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(500, 215, BLACK);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(565, 215, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(630, 215, BLACK);
	setfillstyle(SOLID_FILL, RED);
	floodfill(695, 215, BLACK);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(760, 215, BLACK);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(825, 215, BLACK);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(890, 215, BLACK);

	// 4th row
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(305, 280, BLACK);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(370, 280, BLACK);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(435, 280, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(500, 280, BLACK);
	setfillstyle(SOLID_FILL, RED);
	floodfill(565, 280, BLACK);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(630, 280, BLACK);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(695, 280, BLACK);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(760, 280, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(825, 280, BLACK);
	setfillstyle(SOLID_FILL, RED);
	floodfill(890, 280, BLACK);

	// 5th row
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(305, 345, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(370, 345, BLACK);
	setfillstyle(SOLID_FILL, RED);
	floodfill(435, 345, BLACK);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(500, 345, BLACK);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(565, 345, BLACK);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(630, 345, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(695, 345, BLACK);
	setfillstyle(SOLID_FILL, RED);
	floodfill(760, 345, BLACK);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(825, 345, BLACK);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(890, 345, BLACK);

	// 6th row
	setfillstyle(SOLID_FILL, RED);
	floodfill(305, 410, BLACK);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(370, 410, BLACK);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(435, 410, BLACK);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(500, 410, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(565, 410, BLACK);
	setfillstyle(SOLID_FILL, RED);
	floodfill(630, 410, BLACK);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(695, 410, BLACK);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(760, 410, BLACK);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(825, 410, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(890, 410, BLACK);

	// 7th row
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(305, 475, BLACK);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(370, 475, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(435, 475, BLACK);
	setfillstyle(SOLID_FILL, RED);
	floodfill(500, 475, BLACK);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(565, 475, BLACK);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(630, 475, BLACK);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(695, 475, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(760, 475, BLACK);
	setfillstyle(SOLID_FILL, RED);
	floodfill(825, 475, BLACK);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(890, 475, BLACK);

	// 8th row
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(305, 520, BLACK);
	setfillstyle(SOLID_FILL, RED);
	floodfill(370, 520, BLACK);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(435, 520, BLACK);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(500, 520, BLACK);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(565, 520, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(630, 520, BLACK);
	setfillstyle(SOLID_FILL, RED);
	floodfill(695, 520, BLACK);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(760, 520, BLACK);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(825, 520, BLACK);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(890, 520, BLACK);

	// 9th row
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(305, 580, BLACK);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(370, 580, BLACK);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(435, 580, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(500, 580, BLACK);
	setfillstyle(SOLID_FILL, RED);
	floodfill(565, 580, BLACK);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(630, 580, BLACK);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(695, 580, BLACK);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(760, 580, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(825, 580, BLACK);
	setfillstyle(SOLID_FILL, RED);
	floodfill(890, 580, BLACK);

	// 10th row
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(305, 640, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(370, 640, BLACK);
	setfillstyle(SOLID_FILL, RED);
	floodfill(435, 640, BLACK);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(500, 640, BLACK);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(565, 640, BLACK);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(630, 640, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(695, 640, BLACK);
	setfillstyle(SOLID_FILL, RED);
	floodfill(760, 640, BLACK);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	floodfill(825, 640, BLACK);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(890, 640, BLACK);
	//
	//
	//
	settextstyle(10, 0, 3);
	setbkcolor(YELLOW);
	outtextxy(320, 610, "01");
	setbkcolor(LIGHTBLUE);
	outtextxy(383, 610, "02");
	setbkcolor(RED);
	outtextxy(443, 610, "03");
	setbkcolor(BLUE);
	outtextxy(506, 610, "04");
	setbkcolor(GREEN);
	outtextxy(569, 610, "05");
	setbkcolor(YELLOW);
	outtextxy(632, 610, "06");
	setbkcolor(LIGHTBLUE);
	outtextxy(695, 610, "07");
	setbkcolor(RED);
	outtextxy(756, 610, "08");
	setbkcolor(LIGHTBLUE);
	outtextxy(818, 610, "09");
	setbkcolor(GREEN);
	outtextxy(880, 610, "10");

	setbkcolor(BLUE);
	outtextxy(320, 552, "11");
	setbkcolor(GREEN);
	outtextxy(383, 552, "12");
	setbkcolor(YELLOW);
	outtextxy(443, 552, "13");
	setbkcolor(LIGHTBLUE);
	outtextxy(506, 552, "14");
	setbkcolor(RED);
	outtextxy(569, 552, "15");
	setbkcolor(BLUE);
	outtextxy(632, 552, "16");
	setbkcolor(GREEN);
	outtextxy(695, 552, "17");
	setbkcolor(YELLOW);
	outtextxy(756, 552, "18");
	setbkcolor(LIGHTBLUE);
	outtextxy(818, 552, "19");
	setbkcolor(RED);
	outtextxy(880, 552, "20");

	setbkcolor(LIGHTBLUE);
	outtextxy(320, 495, "21");
	setbkcolor(RED);
	outtextxy(383, 495, "22");
	setbkcolor(BLUE);
	outtextxy(443, 495, "23");
	setbkcolor(GREEN);
	outtextxy(506, 495, "24");
	setbkcolor(YELLOW);
	outtextxy(569, 495, "25");
	setbkcolor(LIGHTBLUE);
	outtextxy(632, 495, "26");
	setbkcolor(RED);
	outtextxy(695, 495, "27");
	setbkcolor(BLUE);
	outtextxy(756, 495, "28");
	setbkcolor(GREEN);
	outtextxy(818, 495, "29");
	setbkcolor(YELLOW);
	outtextxy(880, 495, "30");

	setbkcolor(GREEN);
	outtextxy(320, 438, "31");
	setbkcolor(YELLOW);
	outtextxy(383, 438, "32");
	setbkcolor(LIGHTBLUE);
	outtextxy(443, 438, "33");
	setbkcolor(RED);
	outtextxy(506, 438, "34");
	setbkcolor(BLUE);
	outtextxy(569, 438, "35");
	setbkcolor(GREEN);
	outtextxy(632, 438, "36");
	setbkcolor(YELLOW);
	outtextxy(695, 438, "37");
	setbkcolor(LIGHTBLUE);
	outtextxy(756, 438, "38");
	setbkcolor(RED);
	outtextxy(818, 438, "39");
	setbkcolor(BLUE);
	outtextxy(880, 438, "40");

	setbkcolor(RED);
	outtextxy(320, 381, "41");
	setbkcolor(BLUE);
	outtextxy(383, 381, "42");
	setbkcolor(GREEN);
	outtextxy(443, 381, "43");
	setbkcolor(YELLOW);
	outtextxy(506, 381, "44");
	setbkcolor(LIGHTBLUE);
	outtextxy(569, 381, "45");
	setbkcolor(RED);
	outtextxy(632, 381, "46");
	setbkcolor(BLUE);
	outtextxy(695, 381, "47");
	setbkcolor(GREEN);
	outtextxy(756, 381, "48");
	setbkcolor(YELLOW);
	outtextxy(811, 381, "49");
	setbkcolor(LIGHTBLUE);
	outtextxy(880, 381, "50");

	setbkcolor(YELLOW);
	outtextxy(320, 324, "51");
	setbkcolor(LIGHTBLUE);
	outtextxy(383, 324, "52");
	setbkcolor(RED);
	outtextxy(443, 324, "53");
	setbkcolor(BLUE);
	outtextxy(506, 324, "54");
	setbkcolor(GREEN);
	outtextxy(569, 324, "55");
	setbkcolor(YELLOW);
	outtextxy(632, 324, "56");
	setbkcolor(LIGHTBLUE);
	outtextxy(695, 324, "57");
	setbkcolor(RED);
	outtextxy(756, 324, "58");
	setbkcolor(BLUE);
	outtextxy(818, 324, "59");
	setbkcolor(GREEN);
	outtextxy(880, 324, "60");

	setbkcolor(BLUE);
	outtextxy(320, 267, "61");
	setbkcolor(GREEN);
	outtextxy(383, 267, "62");
	setbkcolor(YELLOW);
	outtextxy(443, 267, "63");
	setbkcolor(LIGHTBLUE);
	outtextxy(506, 267, "64");
	setbkcolor(RED);
	outtextxy(569, 267, "65");
	setbkcolor(BLUE);
	outtextxy(632, 267, "66");
	setbkcolor(GREEN);
	outtextxy(695, 267, "67");
	setbkcolor(YELLOW);
	outtextxy(750, 267, "68");
	setbkcolor(LIGHTBLUE);
	outtextxy(818, 267, "69");
	setbkcolor(RED);
	outtextxy(880, 267, "70");

	setbkcolor(LIGHTBLUE);
	outtextxy(320, 210, "71");
	setbkcolor(RED);
	outtextxy(383, 210, "72");
	setbkcolor(BLUE);
	outtextxy(443, 210, "73");
	setbkcolor(GREEN);
	outtextxy(506, 210, "74");
	setbkcolor(YELLOW);
	outtextxy(569, 210, "75");
	setbkcolor(LIGHTBLUE);
	outtextxy(632, 210, "76");
	setbkcolor(RED);
	outtextxy(695, 210, "77");
	setbkcolor(BLUE);
	outtextxy(756, 210, "78");
	setbkcolor(GREEN);
	outtextxy(818, 210, "79");
	setbkcolor(YELLOW);
	outtextxy(880, 210, "80");

	setbkcolor(GREEN);
	outtextxy(320, 153, "81");
	setbkcolor(YELLOW);
	outtextxy(383, 153, "82");
	setbkcolor(LIGHTBLUE);
	outtextxy(443, 153, "83");
	setbkcolor(RED);
	outtextxy(506, 153, "84");
	setbkcolor(BLUE);
	outtextxy(569, 153, "85");
	setbkcolor(GREEN);
	outtextxy(632, 153, "86");
	setbkcolor(YELLOW);
	outtextxy(695, 153, "87");
	setbkcolor(LIGHTBLUE);
	outtextxy(756, 153, "88");
	setbkcolor(RED);
	outtextxy(818, 153, "89");
	setbkcolor(BLUE);
	outtextxy(880, 153, "90");

	setbkcolor(RED);
	outtextxy(320, 96, "91");
	setbkcolor(LIGHTBLUE);
	outtextxy(383, 96, "92");
	setbkcolor(GREEN);
	outtextxy(443, 96, "93");
	setbkcolor(YELLOW);
	outtextxy(506, 96, "94");
	setbkcolor(LIGHTBLUE);
	outtextxy(564, 96, "95");
	setbkcolor(RED);
	outtextxy(632, 96, "96");
	setbkcolor(LIGHTBLUE);
	outtextxy(695, 96, "97");
	setbkcolor(GREEN);
	outtextxy(756, 96, "98");
	setbkcolor(YELLOW);
	outtextxy(818, 96, "99");
	setbkcolor(LIGHTBLUE);
	outtextxy(870, 96, "100");
	// Ladder 1
	setcolor(LIGHTGREEN);
	line(429, 334, 554, 105);
	line(430, 334, 555, 105);
	line(431, 334, 556, 105);
	line(432, 334, 557, 105);

	line(475, 334, 600, 105);
	line(476, 334, 601, 105);
	line(477, 334, 602, 105);
	line(478, 334, 603, 105);

	// Ladder Steps
	line(442, 312, 486, 312);
	line(440, 313, 487, 313);
	line(440, 314, 488, 314);

	line(458, 285, 502, 285);
	line(457, 286, 501, 286);
	line(456, 287, 500, 287);

	line(472, 258, 516, 258);
	line(471, 259, 517, 259);
	line(470, 260, 518, 260);

	line(486, 231, 530, 231);
	line(485, 232, 531, 232);
	line(484, 233, 532, 233);

	line(501, 204, 546, 204);
	line(500, 205, 547, 205);
	line(499, 206, 548, 206);

	line(516, 177, 561, 177);
	line(515, 178, 562, 178);
	line(514, 179, 563, 179);

	line(531, 150, 576, 150);
	line(530, 151, 577, 151);
	line(529, 152, 578, 152);

	line(546, 123, 590, 123);
	line(545, 124, 591, 124);
	line(544, 125, 592, 125);
	//	Ladder 2
	setcolor(LIGHTRED);
	line(745, 277, 808, 396);
	line(744, 277, 807, 396);
	line(743, 277, 806, 396);
	line(742, 277, 805, 396);

	line(785, 277, 848, 396);
	line(784, 277, 847, 396);
	line(783, 277, 846, 396);
	line(782, 277, 845, 396);

	//	Ladder 2 Steps

	line(750, 287, 790, 287);
	line(750, 288, 790, 288);
	line(750, 289, 790, 289);

	line(760, 305, 800, 305);
	line(760, 306, 800, 306);
	line(760, 307, 800, 307);

	line(770, 325, 810, 325);
	line(770, 326, 810, 326);
	line(770, 327, 810, 327);

	line(780, 345, 820, 345);
	line(780, 346, 820, 346);
	line(780, 347, 820, 347);

	line(790, 365, 830, 365);
	line(790, 366, 830, 366);
	line(790, 367, 830, 367);

	line(800, 380, 840, 380);
	line(800, 381, 840, 381);
	line(800, 382, 840, 382);

	//	Ladder 3
	setcolor(LIGHTBLUE);
	line(373, 387, 373, 565);
	line(372, 387, 372, 565);
	line(371, 387, 371, 565);
	line(370, 387, 370, 565);

	line(419, 387, 419, 565);
	line(418, 387, 418, 565);
	line(417, 387, 417, 565);
	line(416, 387, 416, 565);

	//	Ladder Steps

	line(371, 405, 417, 405);
	line(371, 406, 417, 406);
	line(371, 407, 417, 407);

	line(371, 429, 417, 429);
	line(371, 430, 417, 430);
	line(371, 431, 417, 431);

	line(371, 457, 417, 457);
	line(371, 458, 417, 458);
	line(371, 459, 417, 459);

	line(371, 487, 417, 487);
	line(371, 488, 417, 488);
	line(371, 489, 417, 489);

	line(371, 489, 417, 489);
	line(371, 489, 417, 489);
	line(371, 489, 417, 489);

	line(371, 517, 417, 517);
	line(371, 518, 417, 518);
	line(371, 519, 417, 519);

	line(371, 547, 417, 547);
	line(371, 548, 417, 548);
	line(371, 549, 417, 549);

	//	Ladder 4
	setcolor(YELLOW);
	line(808, 505, 870, 620);
	line(807, 505, 869, 620);
	line(806, 505, 868, 620);
	line(805, 505, 867, 620);

	line(848, 505, 910, 620);
	line(849, 505, 911, 620);
	line(850, 505, 912, 620);
	line(851, 505, 913, 620);

	//	Ladder Steps

	line(813, 515, 855, 515);
	line(813, 516, 855, 516);
	line(813, 517, 855, 517);

	line(827, 538, 869, 538);
	line(827, 539, 869, 539);
	line(827, 540, 869, 540);

	line(841, 563, 880, 563);
	line(841, 564, 880, 564);
	line(841, 565, 880, 565);

	line(852, 586, 894, 586);
	line(852, 587, 894, 587);
	line(852, 588, 894, 588);

	line(864, 609, 906, 609);
	line(864, 610, 906, 610);
	line(864, 611, 906, 611);
	settextstyle(0,0,2);
	outtextxy(375, 575, "+30");
}
void scoreCircle1()
{
	int array_score[10][10] = {{91, 92, 93, 94, 95, 96, 97, 98, 99, 100},
							   {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
							   {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
							   {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
							   {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
							   {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
							   {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
							   {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
							   {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
							   {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};

	int array_y[10][10] = {{107, 107, 107, 107, 107, 107, 107, 107, 107, 107},
						   {164, 164, 164, 164, 164, 164, 164, 164, 164, 164},
						   {221, 221, 221, 221, 221, 221, 221, 221, 221, 221},
						   {278, 278, 278, 278, 278, 278, 278, 278, 278, 278},
						   {335, 335, 335, 335, 335, 335, 335, 335, 335, 335},
						   {392, 392, 392, 392, 392, 392, 392, 392, 392, 392},
						   {449, 449, 449, 449, 449, 449, 449, 449, 449, 449},
						   {505, 505, 505, 505, 505, 505, 505, 505, 505, 505},
						   {562, 562, 562, 562, 562, 562, 562, 562, 562, 562},
						   {622, 622, 622, 622, 622, 622, 622, 622, 622, 622}};

	int array_x[10][10] = {{334, 398, 458, 520, 585, 646, 710, 770, 833, 895},
						   {334, 398, 458, 520, 585, 646, 710, 770, 833, 895},
						   {334, 398, 458, 520, 585, 646, 710, 770, 833, 895},
						   {334, 398, 458, 520, 585, 646, 710, 770, 833, 895},
						   {334, 398, 458, 520, 585, 646, 710, 770, 833, 895},
						   {334, 398, 458, 520, 585, 646, 710, 770, 833, 895},
						   {334, 398, 458, 520, 585, 646, 710, 770, 833, 895},
						   {334, 398, 458, 520, 585, 646, 710, 770, 833, 895},
						   {334, 398, 458, 520, 585, 646, 710, 770, 833, 895},
						   {334, 398, 458, 520, 585, 646, 710, 770, 833, 895}};
						   
	for(int j = 0; j < 10; j++)
	{
		for(int k = 0; k < 10; k++)
		{
			if(p1score == array_score[j][k])
			{
				one_one = array_x[j][k];
				one_two = array_y[j][k];
				break;
				break;
			}
		}
	}
	setcolor(WHITE);
	circle(one_one,one_two,15);
	circle(one_one,one_two,16);
	circle(one_one,one_two,17);
}
void scoreCircle2()
{
	int array_score[10][10] = {{91, 92, 93, 94, 95, 96, 97, 98, 99, 100},
							   {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
							   {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
							   {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
							   {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
							   {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
							   {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
							   {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
							   {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
							   {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};

	int array_y[10][10] = {{107, 107, 107, 107, 107, 107, 107, 107, 107, 107},
						   {164, 164, 164, 164, 164, 164, 164, 164, 164, 164},
						   {221, 221, 221, 221, 221, 221, 221, 221, 221, 221},
						   {278, 278, 278, 278, 278, 278, 278, 278, 278, 278},
						   {335, 335, 335, 335, 335, 335, 335, 335, 335, 335},
						   {392, 392, 392, 392, 392, 392, 392, 392, 392, 392},
						   {449, 449, 449, 449, 449, 449, 449, 449, 449, 449},
						   {505, 505, 505, 505, 505, 505, 505, 505, 505, 505},
						   {562, 562, 562, 562, 562, 562, 562, 562, 562, 562},
						   {622, 622, 622, 622, 622, 622, 622, 622, 622, 622}};

	int array_x[10][10] = {{334, 398, 458, 520, 585, 646, 710, 770, 833, 895},
						   {334, 398, 458, 520, 585, 646, 710, 770, 833, 895},
						   {334, 398, 458, 520, 585, 646, 710, 770, 833, 895},
						   {334, 398, 458, 520, 585, 646, 710, 770, 833, 895},
						   {334, 398, 458, 520, 585, 646, 710, 770, 833, 895},
						   {334, 398, 458, 520, 585, 646, 710, 770, 833, 895},
						   {334, 398, 458, 520, 585, 646, 710, 770, 833, 895},
						   {334, 398, 458, 520, 585, 646, 710, 770, 833, 895},
						   {334, 398, 458, 520, 585, 646, 710, 770, 833, 895},
						   {334, 398, 458, 520, 585, 646, 710, 770, 833, 895}};
						   
	for(int j = 0; j < 10; j++)
	{
		for(int k = 0; k < 10; k++)
		{
			if(p2score == array_score[j][k])
				{
					two_one = array_x[j][k];
					two_two = array_y[j][k];
					break;
					break;
				}
		}
	}
	setcolor(BLACK);
	circle(two_one,two_two,15);
	circle(two_one,two_two,16);
	circle(two_one,two_two,17);
}
void backButton(int buttonX, int buttonY, int buttonWidth, int buttonHeight, string input_string)
{
	// Draw the button


	// Check if the button is clicked
	if (true)
	{
		if (ismouseclick(WM_LBUTTONDOWN))
		{
			int mouseX = mousex();
			int mouseY = mousey();

			if (mouseX >= buttonX && mouseX <= buttonX + buttonWidth &&
				mouseY >= buttonY && mouseY <= buttonY + buttonHeight)
			{
				// Action on button pressed
				clearmouseclick(WM_LBUTTONDOWN);
				pagecheck = 0;
			}
		}
	}
}
void p1DiceButton(int buttonX = 10, int buttonY = 620, int buttonWidth = 180, int buttonHeight = 70)
{
	// Check if the button is clicked
	if (true)
	{
		if (ismouseclick(WM_LBUTTONDOWN))
		{
			int mouseX = mousex();
			int mouseY = mousey();

			if (mouseX >= buttonX && mouseX <= buttonX + buttonWidth &&
				mouseY >= buttonY && mouseY <= buttonY + buttonHeight)
			{
				// Action on button pressed
				clearmouseclick(WM_LBUTTONDOWN);
				srand(time(0));
				x = ((rand() % 6) + 1);
				// Score's counting should start after getting "6" in dice at first
//				while (p1score == )
				if (p1score == 0)
				{
					if (x == 6)
					{
						// if counter goes to 3 then last three dice rolls were "6" and those three dice rolls will be lost
						counter++;
						if (counter == 3)
						{
							p1score -= 18;
							counter = 0;
						}
						else
						{
							p1score += x;
						}
					}
				}
				else
				{
					if (x == 6)
					{
						// if counter goes to 3 then last three dice rolls were "6" and those three dice rolls will be lost
						counter++;
						if (counter == 3)
						{
							p1score -= 18;
							counter = 0;
						}
						else
						{
							p1score += x;
						}
					}
					else
					{
						p1score += x;
					}
				}
				sprintf(p1string, "%d", p1score);
				i++;
				// if "i%2" is not equals zero it means it's player two's turn so increasing p2score
			}
		}
	}
}
void p2DiceButton(int buttonX, int buttonY, int buttonWidth, int buttonHeight)
{
	// Check if the button is clicked
	if (true)
	{
		if (ismouseclick(WM_LBUTTONDOWN))
		{
			int mouseX = mousex();
			int mouseY = mousey();

			if (mouseX >= buttonX && mouseX <= buttonX + buttonWidth &&
				mouseY >= buttonY && mouseY <= buttonY + buttonHeight)
			{
				// Action on button pressed
				clearmouseclick(WM_LBUTTONDOWN);
				srand(time(0));
				x = ((rand() % 6) + 1);
				// Score's counting should start after getting "6" in dice at first
				if (p2score == 0)
				{
					if (x == 6)
					{
						// if counter goes to 3 then last three dice rolls were "6" and those three dice rolls will be lost
						counter++;
						if (counter == 3)
						{
							p2score -= 18;
							counter = 0;
						}
						else
						{
							p2score += x;
						}
					}
				}
				else
				{
					if (x == 6)
					{
						// if counter goes to 3 then last three dice rolls were "6" and those three dice rolls will be lost
						counter++;
						if (counter == 3)
						{
							p2score -= 18;
							counter = 0;
						}
						else
						{
							p2score += x;
						}
					}
					else
					{
						p2score += x;
					}
				}
				sprintf(p2string, "%d", p2score);
				i++;
			}
		}
	}
}
void playPage()
{
		board();
		settextstyle(1,0,3);
		setbkcolor(LIGHTRED);
		outtextxy(535, 30, p1string);
		outtextxy(960, 30, p2string);
		scoreCircle1();
		scoreCircle2();
		if (i % 2 == 0)
		{
			p1DiceButton();
			setcolor(WHITE);
			circle(230,650,17);
			setcolor(YELLOW);
			floodfill(230,650,WHITE);
		}
		else
		{	
			p2DiceButton(1140, 620, 200, 50);
			circle(1110,660,17);
			floodfill(1110,660,BLACK);
		}
}
void optionPage()
{
		readimagefile("optionPage.jpg", 0, 0, 1366, 768);
		putimage(0, 0, &bgiout, 0);
}
void welcomePage()
{
	readimagefile("welcomePage.jpg", 0, 0, 1366, 768);
	putimage(0, 0, &bgiout, 0);
}
void exitMessage()
{
	initwindow(473,238);
	readimagefile("exit.jpg", 0, 0, 473, 238);
	putimage(0, 0, &bgiout, NOT_PUT);
	delay(4000);
}
void escapeCheck()
{
	if (true)
		{
			if (kbhit())
			{
				int ch = getch();
				// Check if ESC is pressed then exit
				if (ch == 27)
				{
					closegraph();
				}
			}
		}
}
void exitButton()
{
	// Check if the button is clicked
	if (true)
	{
		if (ismouseclick(WM_LBUTTONDOWN))
		{
			int mouseX = mousex();
			int mouseY = mousey();

			if (mouseX >= 643 && mouseX <= 766 && mouseY >= 665 && mouseY <= 706)
			{
				// Action on button pressed
				clearmouseclick(WM_LBUTTONDOWN);
				exitMessage();
				exit(0);
			}
		}
	}
}
void optionButton(int buttonX, int buttonY, int buttonWidth, int buttonHeight)
{
	if (true)
	{
		if (ismouseclick(WM_LBUTTONDOWN))
		{
			int mouseX = mousex();
			int mouseY = mousey();

			if (mouseX >= buttonX && mouseX <= buttonWidth && mouseY >= buttonY && mouseY <= buttonHeight)
			{
				// Action on button pressed
				clearmouseclick(WM_LBUTTONDOWN);
				pagecheck = 2;
			}
		}
	}
	
}
void executeSet(int setNumber)
{
	
}
void turnMusicOff()
{
	readimagefile("optionPage1.jpg", 0, 0, 1366, 768);
	putimage(0, 0, &bgiout, 0);
}
void howPage()
{
	readimagefile("how_to_play.jpg", 0, 0, 1366, 768);
	putimage(0, 0, &bgiout, 0);
}
void aboutPage()
{
	readimagefile("about.jpg", 0, 0, 1366, 768);
	putimage(0, 0, &bgiout, 0);
}
void musicOffButton(int buttonX, int buttonY, int buttonWidth, int buttonHeight)
{
	if (true)
	{
		if (ismouseclick(WM_LBUTTONDOWN))
		{
			int mouseX = mousex();
			int mouseY = mousey();

			if (mouseX >= buttonX && mouseX <= buttonX + buttonWidth && mouseY >= buttonY && mouseY <= buttonY + buttonHeight)
			{
				// Action on button pressed
				clearmouseclick(WM_LBUTTONDOWN);
				exit(0);
			}
		}
	}
}
void soundOffButton(int buttonX, int buttonY, int buttonWidth, int buttonHeight)
{
	if (true)
	{
		if (ismouseclick(WM_LBUTTONDOWN))
		{
			int mouseX = mousex();
			int mouseY = mousey();

			if (mouseX >= buttonX && mouseX <= buttonX + buttonWidth && mouseY >= buttonY && mouseY <= buttonY + buttonHeight)
			{
				// Action on button pressed
				clearmouseclick(WM_LBUTTONDOWN);
				exit(0);
			}
		}
	}
}
void howToPlayButton(int buttonX, int buttonY, int buttonWidth, int buttonHeight)
{
	if (true)
	{
		if (ismouseclick(WM_LBUTTONDOWN))
		{
			int mouseX = mousex();
			int mouseY = mousey();

			if (mouseX >= buttonX && mouseX <= buttonX + buttonWidth && mouseY >= buttonY && mouseY <= buttonY + buttonHeight)
			{
				// Action on button pressed
				clearmouseclick(WM_LBUTTONDOWN);
				how++;
			}
		}
	}
}
void aboutUsButton(int buttonX, int buttonY, int buttonWidth, int buttonHeight)
{
	if (true)
	{
		if (ismouseclick(WM_LBUTTONDOWN))
		{
			int mouseX = mousex();
			int mouseY = mousey();

			if (mouseX >= buttonX && mouseX <= buttonX + buttonWidth && mouseY >= buttonY && mouseY <= buttonY + buttonHeight)
			{
				// Action on button pressed
				clearmouseclick(WM_LBUTTONDOWN);
				about++;
			}
		}
	}
}
void backToWelcomeButton(int buttonX, int buttonY, int buttonWidth, int buttonHeight)
{
	if (true)
	{
		if (ismouseclick(WM_LBUTTONDOWN))
		{
			int mouseX = mousex();
			int mouseY = mousey();

			if (mouseX >= buttonX && mouseX <= buttonX + buttonWidth && mouseY >= buttonY && mouseY <= buttonY + buttonHeight)
			{
				// Action on button pressed
				clearmouseclick(WM_LBUTTONDOWN);
				pagecheck = 0;
			}
		}
	}
}
