// Auto to arxeio perilamvanei to tmima kwdika pou perigrafei tin tin rithmisi tou xrwmatos sto RGB Led

int Blue1=6;
int Red1=3;
int Green1=5;
int button=2;

void setup()
{
  pinMode (Blue1 , OUTPUT);
  pinMode (Red1 , OUTPUT);
  pinMode (Green1 , OUTPUT );
  pinMode ( button , INPUT);
}

void loop()
{
  setColor(255 , 0 , 0 ); // mple xrwma 
  delay(5000);
  setColor(153 , 155 , 0); //mov xrwma
  delay(5000);
  setColor(0 , 255 , 0 ); // kokkino xrwma 
  delay(5000);
  setColor (0, 0 , 255); // prasino xrwma 
  delay (5000); 
   setColor (50, 100 , 0); // mov xrwma 2
  delay (5000); 
   setColor (0, 100 , 20); // kitrino - portokali xrwma 
  delay (5000); 
   setColor (0, 153 , 76); // kafe xrwma 
  delay (5000); 
     setColor (255, 255 , 255); // leyko xrwma 
  delay (5000); 
     setColor (30, 30 , 30); // gkrizo xrwma 
  delay (5000); 
}
  
  
void setColor(int PulseBlue1 , int PulseRed1 , int PulseGreen1)
{
  analogWrite (Blue1 , PulseBlue1);
  analogWrite (Red1 , PulseRed1);
  analogWrite (Green1 , PulseGreen1);
}
