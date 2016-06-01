// original sketch and library by Sandro Maffiodo (aka smaffer): https://github.com/smaffer/vgax
// small changes by Nicu FLORICA (aka niq_ro) from http://arduinotehniq.com/

#include <VGAX.h>

//font generated from BITFONZI - by Sandro Maffiodo
#define FNT_NANOFONT_HEIGHT 6
#define FNT_NANOFONT_SYMBOLS_COUNT 95
//data size=570 bytes
const unsigned char fnt_nanofont_data[FNT_NANOFONT_SYMBOLS_COUNT][1+FNT_NANOFONT_HEIGHT] PROGMEM={
{ 1, 128, 128, 128, 0, 128, 0, }, //glyph '!' code=0
{ 3, 160, 160, 0, 0, 0, 0, }, //glyph '"' code=1
{ 5, 80, 248, 80, 248, 80, 0, },  //glyph '#' code=2
{ 5, 120, 160, 112, 40, 240, 0, },  //glyph '$' code=3
{ 5, 136, 16, 32, 64, 136, 0, },  //glyph '%' code=4
{ 5, 96, 144, 104, 144, 104, 0, },  //glyph '&' code=5
{ 2, 128, 64, 0, 0, 0, 0, },  //glyph ''' code=6
{ 2, 64, 128, 128, 128, 64, 0, }, //glyph '(' code=7
{ 2, 128, 64, 64, 64, 128, 0, },  //glyph ')' code=8
{ 3, 0, 160, 64, 160, 0, 0, },  //glyph '*' code=9
{ 3, 0, 64, 224, 64, 0, 0, }, //glyph '+' code=10
//{ 2, 0, 0, 0, 0, 128, 64, },  //glyph ',' code=11
{ 2, 0, 0, 0, 64, 64, 128, },  //glyph ',' code=11  - changed by niq_ro
{ 3, 0, 0, 224, 0, 0, 0, }, //glyph '-' code=12
{ 1, 0, 0, 0, 0, 128, 0, }, //glyph '.' code=13
{ 5, 8, 16, 32, 64, 128, 0, },  //glyph '/' code=14
{ 4, 96, 144, 144, 144, 96, 0, }, //glyph '0' code=15
{ 3, 64, 192, 64, 64, 224, 0, },  //glyph '1' code=16
{ 4, 224, 16, 96, 128, 240, 0, }, //glyph '2' code=17
{ 4, 224, 16, 96, 16, 224, 0, },  //glyph '3' code=18
{ 4, 144, 144, 240, 16, 16, 0, }, //glyph '4' code=19
{ 4, 240, 128, 224, 16, 224, 0, },  //glyph '5' code=20
{ 4, 96, 128, 224, 144, 96, 0, }, //glyph '6' code=21
{ 4, 240, 16, 32, 64, 64, 0, }, //glyph '7' code=22
{ 4, 96, 144, 96, 144, 96, 0, },  //glyph '8' code=23
{ 4, 96, 144, 112, 16, 96, 0, },  //glyph '9' code=24
{ 1, 0, 128, 0, 128, 0, 0, }, //glyph ':' code=25
{ 2, 0, 128, 0, 0, 128, 64, },  //glyph ';' code=26
{ 3, 32, 64, 128, 64, 32, 0, }, //glyph '<' code=27
{ 3, 0, 224, 0, 224, 0, 0, }, //glyph '=' code=28
{ 3, 128, 64, 32, 64, 128, 0, },  //glyph '>' code=29
{ 4, 224, 16, 96, 0, 64, 0, },  //glyph '?' code=30
{ 4, 96, 144, 176, 128, 112, 0, },  //glyph '@' code=31
{ 4, 96, 144, 240, 144, 144, 0, },  //glyph 'A' code=32
{ 4, 224, 144, 224, 144, 224, 0, }, //glyph 'B' code=33
{ 4, 112, 128, 128, 128, 112, 0, }, //glyph 'C' code=34
{ 4, 224, 144, 144, 144, 224, 0, }, //glyph 'D' code=35
{ 4, 240, 128, 224, 128, 240, 0, }, //glyph 'E' code=36
{ 4, 240, 128, 224, 128, 128, 0, }, //glyph 'F' code=37
{ 4, 112, 128, 176, 144, 112, 0, }, //glyph 'G' code=38
{ 4, 144, 144, 240, 144, 144, 0, }, //glyph 'H' code=39
{ 3, 224, 64, 64, 64, 224, 0, },  //glyph 'I' code=40
{ 4, 240, 16, 16, 144, 96, 0, },  //glyph 'J' code=41
{ 4, 144, 160, 192, 160, 144, 0, }, //glyph 'K' code=42
{ 4, 128, 128, 128, 128, 240, 0, }, //glyph 'L' code=43
{ 5, 136, 216, 168, 136, 136, 0, }, //glyph 'M' code=44
{ 4, 144, 208, 176, 144, 144, 0, }, //glyph 'N' code=45
{ 4, 96, 144, 144, 144, 96, 0, }, //glyph 'O' code=46
{ 4, 224, 144, 224, 128, 128, 0, }, //glyph 'P' code=47
{ 4, 96, 144, 144, 144, 96, 16, },  //glyph 'Q' code=48
{ 4, 224, 144, 224, 160, 144, 0, }, //glyph 'R' code=49
{ 4, 112, 128, 96, 16, 224, 0, }, //glyph 'S' code=50
{ 3, 224, 64, 64, 64, 64, 0, }, //glyph 'T' code=51
{ 4, 144, 144, 144, 144, 96, 0, },  //glyph 'U' code=52
{ 3, 160, 160, 160, 160, 64, 0, },  //glyph 'V' code=53
{ 5, 136, 168, 168, 168, 80, 0, },  //glyph 'W' code=54
{ 4, 144, 144, 96, 144, 144, 0, },  //glyph 'X' code=55
{ 3, 160, 160, 64, 64, 64, 0, },  //glyph 'Y' code=56
{ 4, 240, 16, 96, 128, 240, 0, }, //glyph 'Z' code=57
{ 2, 192, 128, 128, 128, 192, 0, }, //glyph '[' code=58
{ 5, 128, 64, 32, 16, 8, 0, },  //glyph '\' code=59
{ 2, 192, 64, 64, 64, 192, 0, },  //glyph ']' code=60
//{ 5, 32, 80, 136, 0, 0, 0, }, //glyph '^' code=61
{ 3, 64, 160, 64, 0, 0, 0},  //glyph '^' code=61 (made a degree symbol :D
{ 4, 0, 0, 0, 0, 240, 0, }, //glyph '_' code=62
{ 2, 128, 64, 0, 0, 0, 0, },  //glyph '`' code=63
{ 3, 0, 224, 32, 224, 224, 0, },  //glyph 'a' code=64
{ 3, 128, 224, 160, 160, 224, 0, }, //glyph 'b' code=65
{ 3, 0, 224, 128, 128, 224, 0, }, //glyph 'c' code=66
{ 3, 32, 224, 160, 160, 224, 0, },  //glyph 'd' code=67
{ 3, 0, 224, 224, 128, 224, 0, }, //glyph 'e' code=68
{ 2, 64, 128, 192, 128, 128, 0, },  //glyph 'f' code=69
{ 3, 0, 224, 160, 224, 32, 224, },  //glyph 'g' code=70
{ 3, 128, 224, 160, 160, 160, 0, }, //glyph 'h' code=71
{ 1, 128, 0, 128, 128, 128, 0, }, //glyph 'i' code=72
{ 2, 0, 192, 64, 64, 64, 128, },  //glyph 'j' code=73
{ 3, 128, 160, 192, 160, 160, 0, }, //glyph 'k' code=74
{ 1, 128, 128, 128, 128, 128, 0, }, //glyph 'l' code=75
{ 5, 0, 248, 168, 168, 168, 0, }, //glyph 'm' code=76
{ 3, 0, 224, 160, 160, 160, 0, }, //glyph 'n' code=77
{ 3, 0, 224, 160, 160, 224, 0, }, //glyph 'o' code=78
{ 3, 0, 224, 160, 160, 224, 128, }, //glyph 'p' code=79
{ 3, 0, 224, 160, 160, 224, 32, },  //glyph 'q' code=80
{ 3, 0, 224, 128, 128, 128, 0, }, //glyph 'r' code=81
{ 2, 0, 192, 128, 64, 192, 0, },  //glyph 's' code=82
{ 3, 64, 224, 64, 64, 64, 0, }, //glyph 't' code=83
{ 3, 0, 160, 160, 160, 224, 0, }, //glyph 'u' code=84
{ 3, 0, 160, 160, 160, 64, 0, },  //glyph 'v' code=85
{ 5, 0, 168, 168, 168, 80, 0, },  //glyph 'w' code=86
{ 3, 0, 160, 64, 160, 160, 0, },  //glyph 'x' code=87
{ 3, 0, 160, 160, 224, 32, 224, },  //glyph 'y' code=88
{ 2, 0, 192, 64, 128, 192, 0, },  //glyph 'z' code=89
{ 3, 96, 64, 192, 64, 96, 0, }, //glyph '{' code=90
{ 1, 128, 128, 128, 128, 128, 0, }, //glyph '|' code=91
{ 3, 192, 64, 96, 64, 192, 0, },  //glyph '}' code=92
{ 3, 96, 192, 0, 0, 0, 0, },  //glyph '~' code=93
{ 4, 48, 64, 224, 64, 240, 0, },  //glyph 'ÂŁ' code=94
//{ 3, 0, 0, 224, 160, 224, 0 },  //glyph 'ÂŁ' code=94
};
VGAX vga;

static const char str0[] PROGMEM="Temperatura masurata";
static const char str1[] PROGMEM=" cu senzorul TMP36: ";
//static const char str2[] PROGMEM="  este: +26,5gr.C   ";
static const char str2[] PROGMEM="program scris de niq_ro";
static char x=-VGAX_WIDTH;

byte culoare = 0;


float t;    // value for temperature
float te;
float ti;
int t0;     // tx10
byte t1, t2, t3; // decimal, unitar and after comma (point)
byte x1 = 50;
byte x2 = 55; 
byte x3 = 60;
byte x4 = 65;
byte x5 = 70;
byte x6 = 75;

const char t00[] PROGMEM= "0";
const char t01[] PROGMEM= "1";
const char t02[] PROGMEM= "2";
const char t03[] PROGMEM= "3";
const char t04[] PROGMEM= "4";
const char t05[] PROGMEM= "5";
const char t06[] PROGMEM= "6";
const char t07[] PROGMEM= "7";
const char t08[] PROGMEM= "8";
const char t09[] PROGMEM= "9";
const char t10[] PROGMEM= " ";
const char t11[] PROGMEM= "+";
const char t12[] PROGMEM= "-";
const char t13[] PROGMEM= ",";
//const char t14[] PROGMEM= " gr.C";
const char t14[] PROGMEM= "^C";

#define aref_voltage 3.3         // we tie 3.3V to ARef and measure it with a multimeter!


void setup() {
 analogReference(EXTERNAL);
  vga.begin();
  vga.clear(11);

// https://learn.adafruit.com/tmp36-temperature-sensor/using-a-temp-sensor
 //getting the voltage reading from the temperature sensor
 delay(1000);
 int reading = analogRead(A3);  
 delay(1000);
 // converting that reading to voltage, for 3.3v arduino use 3.3
 float voltage = reading * aref_voltage;
 voltage /= 1024.0; 

 delay(1000);
 // now print out the temperature
 ti = (voltage - 0.5) * 100 ;  //converting from 10 mv per degree wit 500 mV offset
                                               //to degrees ((voltage - 500mV) times 100)
delay(1000);
t = ti;

}
void loop() {

 
  vga.clear(culoare);

  
  //printPROGMEM(byte *fnt,  glyphscount, fntheight, hspace, vspace, *str, dx, dy, color);
  vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str0, 18, 10, (culoare+1)%4);
  vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str1, 20, 17, (culoare+2)%4);
//  vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str2, 20, 25, (culoare+3)%4);


// t = 23.5; 

/*
sensors.requestTemperatures(); // Send the command to get temperatures
t = sensors.getTempCByIndex(0);
*/

if (t > 0) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t11, x1, 25, (culoare+3)%4);  
te = t;
}
if (t < 0) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t12, x1, 25, (culoare+3)%4);  
te = -t;
}
if (t == 0) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t10, x1, 25, (culoare+3)%4);  
te = 0;
}

t0 = te*10;  // x10
t1 = t0/100;
t2 = (t0%100)/10;
t3 = t0 - 100*t1 - 10*t2;

/*
if (t1 == 0) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t00, x2, 25, (culoare+3)%4);  
}
*/
if (t1 == 1) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t01, x2, 25, (culoare+3)%4);  
}
if (t1 == 2) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t02, x2, 25, (culoare+3)%4);  
}
if (t1 == 3) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t03, x2, 25, (culoare+3)%4);  
}
if (t1 == 4) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t04, x2, 25, (culoare+3)%4);  
}
if (t1 == 5) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t05, x2, 25, (culoare+3)%4);  
}
if (t1 == 6) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t06, x2, 25, (culoare+3)%4);  
}
if (t1 == 7) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t07, x2, 25, (culoare+3)%4);  
}
if (t1 == 8) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t08, x2, 25, (culoare+3)%4);  
}
if (t1 == 9) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t09, x2, 25, (culoare+3)%4);  
}

if (t2 == 0) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t00, x3, 25, (culoare+3)%4);  
}
if (t2 == 1) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t01, x3, 25, (culoare+3)%4);  
}
if (t2 == 2) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t02, x3, 25, (culoare+3)%4);  
}
if (t2 == 3) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t03, x3, 25, (culoare+3)%4);  
}
if (t2 == 4) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t04, x3, 25, (culoare+3)%4);  
}
if (t2 == 5) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t05, x3, 25, (culoare+3)%4);  
}
if (t2 == 6) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t06, x3, 25, (culoare+3)%4);  
}
if (t2 == 7) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t07, x3, 25, (culoare+3)%4);  
}
if (t2 == 8) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t08, x3, 25, (culoare+3)%4);  
}
if (t2 == 9) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t09, x3, 25, (culoare+3)%4);  
}

vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t13, x4, 25, (culoare+3)%4);  

if (t3 == 0) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t00, x5, 25, (culoare+3)%4);  
}
if (t3 == 1) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t01, x5, 25, (culoare+3)%4);  
}
if (t3 == 2) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t02, x5, 25, (culoare+3)%4);  
}
if (t3 == 3) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t03, x5, 25, (culoare+3)%4);  
}
if (t3 == 4) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t04, x5, 25, (culoare+3)%4);  
}
if (t3 == 5) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t05, x5, 25, (culoare+3)%4);  
}
if (t3 == 6) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t06, x5, 25, (culoare+3)%4);  
}
if (t3 == 7) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t07, x5, 25, (culoare+3)%4);  
}
if (t3 == 8) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t08, x5, 25, (culoare+3)%4);  
}
if (t3 == 9) 
{
vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t09, x5, 25, (culoare+3)%4);  
}

vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, t14, x6, 25, (culoare+3)%4);  

vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str2, 10, 50, (culoare+1)%4);

  culoare++;
  if (culoare == 4) culoare = 0;
  vga.delay(5000);
  
// https://learn.adafruit.com/tmp36-temperature-sensor/using-a-temp-sensor
 //getting the voltage reading from the temperature sensor
 delay(100);
 int reading = analogRead(A3);  
 delay(100);
 // converting that reading to voltage, for 3.3v arduino use 3.3
 float voltage = reading * aref_voltage;
 voltage /= 1024.0; 
 
 // now print out the temperature
 ti = (voltage - 0.5) * 100 ;  //converting from 10 mv per degree wit 500 mV offset
                                               //to degrees ((voltage - 500mV) times 100)

 t = (ti + t*9)/10;

 
}
