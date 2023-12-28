#include <thermistor.h> //https://electronoobs.com/eng_arduino_thermistor.php
#include <AccelStepper.h>
#include <U8glib.h>

#define TH A7
#define RST A3
#define E A2
#define RW A1
#define RS A0
#define BTN 12
#define HOT 9
#define B 8
#define EN 7
#define BUZZER 6
#define STEP 5
#define DIR 4
#define A 3
#define EO 2

#define TEMPERATURE 260
#define SPEED 200
#define ACCEL 1000
#define KP 0
#define KI 0
#define KD 0

thermistor therm(TH, 0);
AccelStepper motor(AccelStepper::DRIVER, STEP, DIR);
U8GLIB_ST7920_128X64_1X display(E, RW, RS, RST);

int rotation = 0;
int PID = 0;
float prop = 0, integ = 0, deriv = 0;
int time = 0;
int error = 0, prev_error = 0;

void isr_endstop(){
    Serial.println("Run Out Filament");
}

void isr_encoder(){
  if(digitalRead(B) != digitalRead(A)){
    rotation++;
  }
  else {
    rotation--;
  }
}

void display_prepare();
void display_tela();

void setup() {
  Serial.begin(9600);

  pinMode(TH, INPUT);
  pinMode(RST, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(RW, OUTPUT);
  pinMode(RS, OUTPUT);
  pinMode(BTN, INPUT_PULLUP);
  pinMode(HOT, OUTPUT);
  pinMode(B, INPUT_PULLUP);
  pinMode(EN, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);
  pinMode(A, INPUT_PULLUP);
  pinMode(EO, INPUT);
  attachInterrupt(digitalPinToInterrupt(EO), isr_endstop, FALLING);
  attachInterrupt(digitalPinToInterrupt(A), isr_encoder, CHANGE);
  
  digitalWrite(EN, HIGH);
  motor.setSpeed(SPEED);
  motor.setAcceleration(ACCEL);

  if ( display.getMode() == U8G_MODE_R3G3B2 )   
    display.setColorIndex(255);
  else if ( display.getMode() == U8G_MODE_GRAY2BIT )  
    display.setColorIndex(1); 
  else if ( display.getMode() == U8G_MODE_BW )  
    display.setColorIndex(1);
}

void loop() {
  Serial.println(therm.analog2temp());
  Serial.println(digitalRead(BTN));
  Serial.println(rotation);

  tone(BUZZER, 3000, 100);

  analogWrite(HOT, PID);

  motor.runSpeed();

  display.firstPage();
  display_prepare();
  display_tela();
  display.nextPage();

  delay(100);
}

void display_prepare(){
  display.setFont(u8g_font_6x10);  
  display.setFontRefHeightExtendedText();  
  display.setDefaultForegroundColor();  
  display.setFontPosTop();  
}

void display_tela(){
  display.setFont(u8g_font_unifont);  
  display.drawStr( 11, 35, "Arduino e Cia");  
  display.drawStr( 12, 35, "Arduino e Cia");  
  display.drawFrame(0,0,128,64);  
  display.drawFrame(2,2,124,60); 
}
