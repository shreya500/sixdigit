#include<avr/io.h>
#include<util/delay.h>
int main()
{
DDRC=0XFF;
DDRD=0XFF;
int a[10]={0X3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X6F};
int i=0,j=0;
while(1)
{
  for(i=0;i<=2;i++)
  { 
   if(j==4&&i==2)
  {
  break;
  }
  for(j=0;j<=9;j++)
  {
  if(j==4&&i==2)
  {
  break;
  }
  for(int k=0;k<=5;k++)
  {
  for(int l=0;l<=9;l++)
  {
  for(int m=0;m<=5;m++)
  {
  for(int n=0;n<=9;n++)
  {
  for(int s=0;s<=20;s++)
  {
  PORTD=0X3E;
  PORTC=a[n];
  _delay_ms(5);
   PORTD=0X3D;
  PORTC=a[m];
  _delay_ms(5);
 PORTD=0X3B;
  PORTC=a[l];
  _delay_ms(5);
 PORTD=0X37;
  PORTC=a[k];
  _delay_ms(5);
 PORTD=0X2F;
  PORTC=a[j];
  _delay_ms(5);
 PORTD=0X1F;
 PORTC=a[i];
  _delay_ms(5);
 }
 }
 }
 }
 }
 }
 }
 }
 }
