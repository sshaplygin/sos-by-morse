int LED_OUTPUT = 8;
int POINT_LEN = 200;
int DASH_LEN = POINT_LEN * 3;
int ELEM_LEN = POINT_LEN;
int CHAR_LEN = 3 * POINT_LEN;
int WORD_LEN = 7 * POINT_LEN;

void point()
{
  digitalWrite(LED_OUTPUT, HIGH);
  delay(POINT_LEN);
  digitalWrite(LED_OUTPUT, LOW);
}

void dash()
{
  digitalWrite(LED_OUTPUT, HIGH);
  delay(DASH_LEN);
  digitalWrite(LED_OUTPUT, LOW);
}

void elemDelim()
{
  delay(ELEM_LEN);
}

void charDelim()
{
  delay(CHAR_LEN);
}

void wordDelim()
{
  delay(WORD_LEN);
}

void setup()
{
  pinMode(LED_OUTPUT, OUTPUT);
}

void loop()
{
  point();
  elemDelim();
  point();
  elemDelim();
  point();
  
  charDelim();
  
  dash();
  elemDelim();
  dash();
  elemDelim();
  dash();
    
  charDelim();
   
  point();
  elemDelim();
  point();
  elemDelim();
  point();
  
  wordDelim();
}
