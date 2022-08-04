#include<dos.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 int go=0;
 char a;
 printf("Press A,S,D,F,G,H,J,K,L to play piano");
 printf("\nPress Q to exit");

 while(!go)
 {
 a=getch();
 nosound();
 switch(a)
 {
  case 'a':
  sound(100);
  break;

  case 's':
  sound(150);
  break;

    case 'd':
  sound(200);
  break;

    case 'f':
  sound(250);
  break;

  case 'g':
  sound(300);
  break;

  case 'h':
  sound(350);
  break;

  case 'j':
  sound(400);
  break;

  case 'k':
  sound(450);
  break;

  case 'l':
  sound(500);
  break;
  case 'q':
  go=1;
  break;
}
 delay(500);
 }
 printf("done");
 getch();
 }