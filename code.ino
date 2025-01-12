// C++ code

int a = 11;
int b = 10;
int c = 4;
int d = 3;
int e = 2;
int f = 12;
int g = 13;
int dp = 5;

int blue = A2;
int green = A3;
int red = A4;

void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
  
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
}

void display(int n)
{
	if(n == 9)
    {
	  digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(e, LOW);
    }
  else if (n == 8)
    {
	  digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(e, HIGH);
    }
    else if (n == 7)
    {
	  digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(g, LOW);
      digitalWrite(f, LOW);
      digitalWrite(e, LOW);
    }
  else if (n == 6)
  {
    digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(e, HIGH);
  }
  else if (n == 5)
  {
    digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(e, LOW);
  }
  else if (n == 4)
  {
    digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(g, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(e, LOW);
  }
  else if (n == 3)
  {
    digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(e, LOW);
  }
  else if (n == 2)
  {
    digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(e, HIGH);
  }
  else if (n == 1)
  {
	digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(g, LOW);
      digitalWrite(f, LOW);
      digitalWrite(e, LOW);
  }
  else
  {
    digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(g, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(e, HIGH);
  }
}
  
void rgbled(int r, int g, int b)
{
 	 analogWrite(red, r);
  	analogWrite(green, g);
  analogWrite(blue, b);
}

void loop()
{
	for(int i = 9; i > 0; i--)
    {
      display(i);
      delay(1000);
    }
  	display(0);
  	digitalWrite(dp, HIGH);
  	while(1 == 1)
    {
      rgbled(225, 0, 0);
      delay(200);
      rgbled(0, 225, 225);
      delay(200);
      rgbled(0, 0, 225);
      delay(200);
      rgbled(225, 225, 0);
      delay(200);
      rgbled(0, 225, 225);
      delay(200);
      rgbled(225, 0, 225);
      delay(200);
      rgbled(225, 225, 0);
      delay(200);
      rgbled(225, 225, 225);
      delay(200);
    }
}