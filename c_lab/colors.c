#include <stdio.h>

float max(float x,float y,float z){
	if(x>y)
	{
		if(y>z) return x;
		else return z;}
	else 
	{
		if(y>z) return y;
		else return z;}}

void main(){
float red,green,blue;
float white,cyan,magenta,yellow,black;
printf("enter RGB values from 0 To 255  ");
scanf("%f%f%f",&red,&green,&blue);
if(red!=0  && green!=0 && blue!=0)
{	white=max(red/255,green/255,blue/255);
	cyan=(white-red/255)/white;
	magenta=(white-green/255)/white;
	yellow=(white-blue/255)/white;
	black=1-white;}
else {
	cyan=0,magenta=0,yellow=0,black=1;}
printf("cyan=%f magenta=%f yellow=%f black=%f \n",cyan,magenta,yellow,black);





}
