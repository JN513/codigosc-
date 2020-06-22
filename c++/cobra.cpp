#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
#include<iostream.h>
#include<time.h>
#define MAX_X 620
#define MIN_X 0
#define MAX_Y 400
#define MIN_Y 0
#define SCORE_RANGE 15
int speed;
struct link
{
int left,top,right,botom;
struct link *next;
};
class list
{
private:
struct link *head;
char direction;
char flg;
int x,y;
int score;
public:
list();
void creat(int);
void move(int);
void slide();
void topmove(struct link *);
void leftmove(struct link *);
void rightmove(struct link *);
void botommove(struct link *);
void deletelast();
void draw();
void lastoperation(struct link *);
void onbeat();
void setfood();
void getfood();
void endscreen();

};

list::list()
{
head=NULL;
direction='b';
flg='r';
x=-1;
y=-1;
score=0;
}
void list::creat(int i)
{
int j;
struct link *temp,*tail;

for(j=0;j!=i;j++)
{
	temp=(struct link *)malloc(sizeof(struct link));
	temp->next=NULL;

	temp->left=j*10+1;
	temp->top=1;
	temp->right=j*10+10;
	temp->botom=10;

	if(head==NULL)
		{
		head=temp;
		tail=temp;
		}
	else
		{
		tail->next=temp;
		tail=temp;
		}
}
setfood();
draw();
}

void list::move(int key)
{
struct link *temp;
if(key==13)
	endscreen();
if(direction=='t' || direction=='b')
{
	if(key=='a'|| key=='A')
	{
		temp=(struct link *)malloc(sizeof(struct link));
		temp->next=head;
		direction='l';
		leftmove(temp);
		lastoperation(temp);
	}
	else if(key=='d'|| key=='D')
	{
		temp=(struct link *)malloc(sizeof(struct link));
		temp->next=head;
		direction='r';
		rightmove(temp);
		lastoperation(temp);
	}
}
else if(direction=='l' || direction=='r')
{
	if(key=='w' || key=='W')
	{
		temp=(struct link *)malloc(sizeof(struct link));
		temp->next=head;
		direction='t';
		topmove(temp);
		lastoperation(temp);
	}
	else if(key=='s'|| key=='S')
	{
		temp=(struct link *)malloc(sizeof(struct link));
		temp->next=head;
		direction='b';
		botommove(temp);
		lastoperation(temp);
	}
}
}
void list::slide()
{
struct link *temp;
temp=(struct link *)malloc(sizeof(struct link));
temp->next=head;

if(direction=='t')
{
	topmove(temp);
}
else if(direction=='b')
{
	botommove(temp);
}
else if(direction=='l')
{
	leftmove(temp);
}
else if(direction=='r')
{
	rightmove(temp);
}
lastoperation(temp);
}

void list::leftmove(struct link *temp)
{
if(head->left<=MIN_X+1)
{
	temp->left=MAX_X+1;
	temp->right=MAX_X+10;
}
else
{
	temp->left=head->left-10;
	temp->right=head->right-10;
}
temp->top=head->top;
temp->botom=head->botom;
}
void list::topmove(struct link *temp)
{
temp->left=head->left;
temp->right=head->right;
if(head->top<=MIN_Y+1)
{
	temp->top=MAX_Y+1;
	temp->botom=MAX_Y+10;
}
else
{
	temp->top=head->top-10;
	temp->botom=head->botom-10;
}
}
void list::rightmove(struct link *temp)
{
if(head->right>MAX_X)
{
	temp->left=MIN_X+1;
	temp->right=MIN_X+10;
}
else
{
	temp->left=head->left+10;
	temp->right=head->right+10;
}
temp->top=head->top;
temp->botom=head->botom;
}

void list::botommove(struct link *temp)
{
temp->left=head->left;
temp->right=head->right;
if(head->botom>MAX_Y)
{
	temp->top=MIN_Y+1;
	temp->botom=MIN_Y+10;
}
else
{
	temp->top=head->top+10;
	temp->botom=head->botom+10;
}
}

void list::deletelast()
{
struct link *temp,*tail;
temp=head;
while(temp->next->next!=NULL)
	temp=temp->next;

//make node color black
setcolor(0);
rectangle(temp->next->left,temp->next->top,temp->next->right,temp->next->botom);
tail=temp->next;
temp->next=NULL;
free(tail);
setcolor(10);
}

void list::draw()
{
struct link *temp;
for(temp=head;temp!=NULL;temp=temp->next)
	{
	rectangle(temp->left,temp->top,temp->right,temp->botom);
	if(temp!=head)
	if((head->left==temp->left)&&(head->top==temp->top)&&(head->right==temp->right))
	onbeat();
	if((head->left==x)&&(head->top==y)&&(head->right==x+9))
	getfood();
	}
}

void list::lastoperation(struct link *temp)
{
head=temp;
if(flg=='r')
	deletelast();
else
	flg='r';
draw();
}

void list::onbeat()
{
while(1)
{
	if(kbhit())
	if(getch()==13)
		break;
	setcolor(random(10));
	rectangle(head->left-2,head->top-2,head->right+2,head->botom+2);
	setcolor(random(10));
	rectangle(head->left-4,head->top-4,head->right+4,head->botom+4);
	setcolor(random(10));
	rectangle(head->left-6,head->top-6,head->right+6,head->botom+6);
	delay(500);
}
endscreen();
}
void list::setfood()
{

x=random((MAX_X-20)/10)*10+1;
y=random((MAX_Y-20)/10)*10+1;
setcolor(5);
rectangle(x,y,x+9,y+9);
setcolor(10);
}

void list::getfood()
{
flg='s';
x=y=-1;
score+=random(SCORE_RANGE);
gotoxy(70,28);
cout<<score;
setfood();
}
void list::endscreen()
{
cleardevice();
setcolor(3);
rectangle(MIN_X,MIN_Y,MAX_X+13,MAX_Y+73);
setcolor(4);
rectangle(MIN_X+3,MIN_Y+3,MAX_X+10,MAX_Y+70);
setcolor(5);
gotoxy(40,15);
cout<<score;
outtextxy(235,140,"G A M E   S C O R E");
outtextxy(260,340,"Developed by");
outtextxy(187,385,"Email : priyank_modi@yahoo.co.in");
outtextxy(147,405,"Website : http://geocities.com/priyank_modi/");
setcolor(11);
outtextxy(220,365,"P r i y a n k   M o d i");
outtextxy(257,300,"S  N  A  K  E");
if(getch()==13)
{
	closegraph();
	exit(0);
}
}

void startup()
{
char key;
cleardevice();
setcolor(3);
rectangle(MIN_X,MIN_Y,MAX_X+13,MAX_Y+73);
setcolor(4);
rectangle(MIN_X+3,MIN_Y+3,MAX_X+10,MAX_Y+70);
setcolor(11);

outtextxy(220,365,"P r i y a n k   M o d i");
outtextxy(257,300,"S  N  A  K  E");
setcolor(5);
outtextxy(225,140,"G A M E   L E V E L S");
outtextxy(60,200,"Beginner=[b] - Easy=[E] - Normal=[N] - Difficult=[D] - Ultra=[u]");
outtextxy(260,340,"Developed by");
outtextxy(187,385,"Email : priyank_modi@yahoo.co.in");
outtextxy(147,405,"Website : http://geocities.com/priyank_modi/");
again:
while(!kbhit())
{
	setcolor(7);
	outtextxy(210,255,"Press level selection key");
	delay(400);
	setcolor(0);
	outtextxy(210,255,"Press level selection key");
	delay(200);
}

key=getch();
if(key=='E'||key=='e')
	speed=120;
else if(key=='B'||key=='b')
	speed=145;
else if(key=='N'||key=='n')
	speed=95;
else if(key=='D'||key=='d')
	speed=75;
else if(key=='U'||key=='u')
	speed=55;
else
	goto again;



void main()
{
int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "");
startup();
cleardevice();

setcolor(8);
rectangle(MIN_X,MIN_Y,MAX_X+11,MAX_Y+11);
rectangle(MIN_X,MAX_Y+27,MAX_X+11,MAX_Y+50);
rectangle(MIN_X,MAX_Y+55,MAX_X+11,MAX_Y+75);
line(500,MAX_Y+27,500,MAX_Y+50);

setcolor(7);
outtextxy(190,MAX_Y+62,"Developed by  :  Priyank Modi");
outtextxy(7,MAX_Y+36,"Keys : Top=[W], Left=[A], Right=[D], Bottom=[s], Exit=[ENTER] ");
class list snk;
randomize();
snk.creat(15);
getch();
while(1)
{
		if(kbhit())
			snk.move(getch());
		else
			snk.slide();
	delay(speed);
}
}
