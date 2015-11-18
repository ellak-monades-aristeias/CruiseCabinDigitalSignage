 //Auto to arxeio perilamvanei olokliro to programma
 
 
 #include <SoftwareSerial.h> //vivliothiki seiriaki epikoinwnia
 
 // D , C , B , A  e3odoi arduino pros to 7447 
 //metavlites
int Blue1=6; // e3odos gia to Mple xrwma 
int Red1=3; //e3odos gia to kokkino xrwma
int Green1=5; //e3odos gia to prasino xrwma
int button=2; // button eidopoihshs 
int D11 = 11; // psifiaki e3odos pros 7447 IC...sto 7-segment sto D
int D10 = 10 ; // psifiaki e3odos pros 7447 IC...sto 7-segment sto C
int D09 = 9 ;// psifiaki e3odos pros 7447 IC ... sto 7 segment sto B
int D08 = 8 ;// psifiaki e3odos pros 7447 IC ...sto 7 segment sto A
int room ; // metavliti toy dwmatiou 
int  flag;
 
 //xarakthrizw eisodous eksodous
 void setup ()
 {
    pinMode ( D11 , OUTPUT );   // e3odos 11 ----> to pin D toy IC
    pinMode ( D10 , OUTPUT );   // e3odos 10 -----> to pin C toy IC
    pinMode ( D09 , OUTPUT );   // e3odos 09 ------> to pin B toy IC
    pinMode ( D08 , OUTPUT );   // e3odos 08 -------> to pin A toy IC 
    pinMode ( Red1 , OUTPUT );  // e3odos 03 Analog --------> to Red pin toy RGB led common cathode 
    pinMode ( Green1 , OUTPUT );// e3odos 05 Analog ---------> to Green pin toy RGB led common cathode
    pinMode ( Blue1 , OUTPUT ); // e3odos 06 Analog  ---------> to Mple pin toy RGB led common  cathode 
    pinMode ( button , INPUT ); // eisodos 02 ------------> button eisodoy kampinas
    Serial.begin (9600);
 }
 
//kanei kykloys ton kwdika
void loop ()
{ 
  setSegment( 1,1,1,1); // keno psifio ---> den anavei katholou to led display
  setColor (0,0,0); // svinei to RGB led 
Serial.println ("Give the Room number : " );
while (Serial.available()==0 ) {}

 room = Serial.parseInt();
  if ( room == 11174 )
 {
  setSegment(0,1,0,0); // D , C , B, A 
  setColor(255,0,0);  // BLUE , RED , GREEN -----> blue
  Serial.println(" The 11174 Cabin has code: 4 BLUE "); //prints out the message
  while(digitalRead(button) == LOW ){}
 }
 
 else if ( room == 11175 )
 {
  setSegment(0,1,0,1); // D , C , B, A 
  setColor(0,100,20);  // BLUE , RED , GREEN ---> yellow
  Serial.println(" The 11175 Cabin has code: 5 YELLOW "); 
  while(digitalRead(button) == LOW ){}
 }
 else if ( room == 11176 )
 {
  setSegment(0,1,1,0); // D , C , B, A 
  setColor(0,255,0);  // BLUE , RED , GREEN -----> red
  Serial.println(" The 11176 Cabin has code: 6 RED "); 
  while(digitalRead(button) == LOW ){}
 }
 else if ( room == 11177 )
 {
  setSegment(0,1,1,1); // D , C , B, A 
  setColor(50,100,0);  // BLUE , RED , GREEN -------> PURPLE
  Serial.println(" The 11177 Cabin has code: 7 PURPLE "); 
  while(digitalRead(button) == LOW ){}
 }
 else if ( room == 11178 )
 {
  setSegment(1,0,0,0); // D , C , B, A 
  setColor(0,0,255);  // BLUE , RED , GREEN ----------> GREEN
  Serial.println(" The 11178 Cabin has code: 8 GREEN "); 
  while(digitalRead(button) == LOW ){}
 }
 else if ( room == 11179 )
 {
  setSegment(1,0,0,1); // D , C , B, A 
  setColor(255,255,255);  // BLUE , RED , GREEN ---------> WHITE
  Serial.println(" The 11179 Cabin has code: 9 WHITE "); 
  while(digitalRead(button) == LOW ){}
 }
 else if ( room == 11180 )
 {
  setSegment(0,0,0,0); // D , C , B, A 
  setColor(0,100,20);  // BLUE , RED , GREEN -------> YELLOW
  Serial.println(" The 11180 Cabin has code: 0 YELLOW "); 
  while(digitalRead(button) == LOW ){}
 }
else if ( room == 11181 )
 {
  setSegment(0,0,0,1); // D , C , B, A 
  setColor(255,0,0);  // BLUE , RED , GREEN --------> BLUE
  Serial.println(" The 11181 Cabin has code: 1 BLUE "); 
  while(digitalRead(button) == LOW ){}
 }
else if (room == 11182 )
 {
  setSegment(0,0,1,0); // D , C , B, A 
  setColor(50, 100 ,0);   // BLUE , RED , GREEN ----> PURPLE  
   Serial.println(" The 11182 Cabin has code: 2 PURPLE ");
   while(digitalRead(button) == LOW ){}
 }
 else if (room == 11183 )
 {
  setSegment(0,0,1,1); // D , C , B, A 
  setColor(0, 255 ,0);   // BLUE , RED , GREEN ----> RED 
   Serial.println(" The 11183 Cabin has code: 3 RED ");
   while(digitalRead(button) == LOW ){}
 }
 else if (room == 11184 )
 {
  setSegment(0,1,0,0); // D , C , B, A 
  setColor(255,255,255);   // BLUE , RED , GREEN ----> WHITE
   Serial.println(" The 11184 Cabin has code: 4 WHITE ");
   while(digitalRead(button) == LOW ){}
 }
  else if (room == 11185 )
 {
  setSegment(0,1,0,1); // D , C , B, A 
  setColor(0,0,255);   // BLUE , RED , GREEN ----> GREEN
   Serial.println(" The 11185 Cabin has code: 5 GREEN ");
   while(digitalRead(button) == LOW ){}
 }
  else if (room == 11186 )
 {
  setSegment(0,1,1,0); // D , C , B, A 
  setColor(255,0,0);   // BLUE , RED , GREEN ----> BLUE
   Serial.println(" The 11186 Cabin has code: 6 BLUE ");
   while(digitalRead(button) == LOW ){}
 }
 else if (room == 11187 )
 {
  setSegment(0,1,1,1); // D , C , B, A 
  setColor(0,100,20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(" The 11187 Cabin has code: 7 YELLOW ");
   while(digitalRead(button) == LOW ){}
 }
 else if (room == 11188)
 {
  setSegment(1,0,0,0); // D , C , B, A 
  setColor(0,255 , 0);   // BLUE , RED , GREEN ----> RED
   Serial.println(" The 11188 Cabin has code: 8 RED ");
   while(digitalRead(button) == LOW ){}
 }
 else if (room == 11189)
 {
  setSegment(1,0,0,1); // D , C , B, A 
  setColor(50 ,100, 0);   // BLUE , RED , GREEN ----> PURPLE
   Serial.println(" The 11189 Cabin has code: 9 PURPLE ");
   while(digitalRead(button) == LOW ){}
 }
 else if (room == 11190)
 {
  setSegment(0,0,0,0); // D , C , B, A 
  setColor(0,0,255);   // BLUE , RED , GREEN ----> GREEN
   Serial.println(" The 11190 Cabin has code: 0 GREEN ");
   while(digitalRead(button) == LOW ){}
 }
  else if (room == 11191)
 {
  setSegment(0,0,0,1); // D , C , B, A 
  setColor(255,255,255);   // BLUE , RED , GREEN ----> WHITE
   Serial.println(" The 11191 Cabin has code: 1 WHITE ");
   while(digitalRead(button) == LOW ){}
 }
  else if (room == 11192)
 {
  setSegment(0,0,1,0); // D , C , B, A 
  setColor(0,100,20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(" The 11192 Cabin has code: 2 YELLOW ");
   while(digitalRead(button) == LOW ){}
 }
 else if (room == 11193)
 {
  setSegment(0,0,1,1); // D , C , B, A 
  setColor(255, 0, 0);   // BLUE , RED , GREEN ----> BLUE
   Serial.println(" The 11193 Cabin has code: 3 BLUE ");
   while(digitalRead(button) == LOW ){}
 }
 else if (room == 11194)
 {
  setSegment(0,1,0,0); // D , C , B, A 
  setColor(50 ,100, 0);   // BLUE , RED , GREEN ----> PURPLE
   Serial.println(" The 11194 Cabin has code: 4 PURPLE ");
   while(digitalRead(button) == LOW ){}
 }
 else if (room == 11195)
 {
  setSegment(0,1,0,1); // D , C , B, A 
  setColor(0,255, 0);   // BLUE , RED , GREEN ----> RED
   Serial.println(" The 11195 Cabin has code: 5 RED ");
   while(digitalRead(button) == LOW ){}
 }
  else if (room == 11196)
 {
  setSegment(0,1,1,0); // D , C , B, A 
  setColor(255,255,255);   // BLUE , RED , GREEN ----> WHITE
   Serial.println(" The 11196 Cabin has code: 6 WHITE ");
   while(digitalRead(button) == LOW ){}
 }
  else if (room == 11197)
 {
  setSegment(0,1,1,1); // D , C , B, A 
  setColor(0,0,255);   // BLUE , RED , GREEN ----> GREEN
   Serial.println(" The 11197 Cabin has code: 7 GREEN ");
   while(digitalRead(button) == LOW ){}
 }
  else if (room == 11198)
 {
  setSegment(1,0,0,0); // D , C , B, A 
  setColor(255,0,0);   // BLUE , RED , GREEN ----> BLUE
   Serial.println(" The 11198 Cabin has code: 8 BLUE");
   while(digitalRead(button) == LOW ){}
 }
 else if (room == 11199)
 {
  setSegment(1,0,0,1); // D , C , B, A 
  setColor(0,100,20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(" The 11199 Cabin has code: 9 YELLOW ");
   while(digitalRead(button) == LOW ){}
 }
  else if (room == 11200)
 {
  setSegment(0,0,0,0); // D , C , B, A 
  setColor(0,255,0);   // BLUE , RED , GREEN ----> RED
   Serial.println(" The 11200 Cabin has code: 0 RED  ");
   while(digitalRead(button) == LOW ){}
 }
 else if (room == 11201)
 {
  setSegment(0,0,0,1); // D , C , B, A 
  setColor(50,100,0);   // BLUE , RED , GREEN ----> PURPLE
   Serial.println(" The 11201 Cabin has code: 1 PURPLE ");
   while(digitalRead(button) == LOW ){}
 }
  else if (room == 11202)
 {
  setSegment(0,0,1,0); // D , C , B, A 
  setColor(0,0,255);   // BLUE , RED , GREEN ----> GREEN
   Serial.println(" The 11202 Cabin has code: 2 GREEN ");
   while(digitalRead(button) == LOW ){}
 }
  else if (room == 11203)
 {
  setSegment(0,0,1,1); // D , C , B, A 
  setColor(255,255,255);   // BLUE , RED , GREEN ----> WHITE
   Serial.println(" The 11203 Cabin has code: 3 WHITE ");
   while(digitalRead(button) == LOW ){}
 }
   else if (room == 11204)
 {
  setSegment(0,1,0,0); // D , C , B, A 
  setColor(0 , 100 , 20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(" The 11204 Cabin has code: 4 YELLOW ");
   while(digitalRead(button) == LOW ){}
 }
   else if (room == 11205)
 {
  setSegment(0,1,0,1); // D , C , B, A 
  setColor(255, 0 ,0 );   // BLUE , RED , GREEN ----> BLUE
   Serial.println(" The 11205 Cabin has code: 5 BLUE ");
   while(digitalRead(button) == LOW ){}
 }
   else if (room == 11206)
 {
  setSegment(0,1,1,0); // D , C , B, A 
  setColor(50 , 100 ,0 );   // BLUE , RED , GREEN ----> PURPLE
   Serial.println(" The 11206 Cabin has code: 6 PURPLE ");
   while(digitalRead(button) == LOW ){}
 }
   else if (room == 11207)
 {
  setSegment(0,1,1,1); // D , C , B, A 
  setColor(0 , 255 ,0 );   // BLUE , RED , GREEN ----> RED
   Serial.println(" The 11207 Cabin has code: 7 RED ");
   while(digitalRead(button) == LOW ){}
 }
   else if (room == 11208)
 {
  setSegment(1,0,0,0); // D , C , B, A 
  setColor(255, 255,255);   // BLUE , RED , GREEN ----> WHITE
   Serial.println(" The 11208 Cabin has code: 8 WHITE ");
   while(digitalRead(button) == LOW ){}
 }
   else if (room == 11209)
 {
  setSegment(1,0,0,1); // D , C , B, A 
  setColor(0 ,0, 255);   // BLUE , RED , GREEN ----> GREEN
   Serial.println(" The 11209 Cabin has code: 9 GREEN ");
   while(digitalRead(button) == LOW ){}
 }
   else if (room == 11210)
 {
  setSegment(0,0,0,0); // D , C , B, A 
  setColor(255, 0 ,0 );   // BLUE , RED , GREEN ----> BLUE
   Serial.println(" The 11210 Cabin has code: 0 BLUE ");
   while(digitalRead(button) == LOW ){}
 }
    else if (room == 11211)
 {
  setSegment(0,0,0,1); // D , C , B, A 
  setColor(0, 100 ,20 );   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(" The 11211 Cabin has code: 1 YELLOW ");
   while(digitalRead(button) == LOW ){}
 }
     else if (room == 11212)
 {
  setSegment(0,0,1,0); // D , C , B, A 
  setColor(0, 255, 0 );   // BLUE , RED , GREEN ----> RED
   Serial.println(" The 11212 Cabin has code: 2 RED ");
   while(digitalRead(button) == LOW ){}
 }
   else if (room == 11213)
 {
  setSegment(0,0,1,1); // D , C , B, A 
  setColor(50 ,100, 0 );   // BLUE , RED , GREEN ----> PURPLE
   Serial.println(" The 11213 Cabin has code: 3 PURPLE ");
   while(digitalRead(button) == LOW ){}
 }
   else if (room == 11214)
 {
  setSegment(0,1,0,0); // D , C , B, A 
  setColor(0, 0 , 255);   // BLUE , RED , GREEN ----> GREEN
   Serial.println(" The 11214 Cabin has code: 4 GREEN ");
   while(digitalRead(button) == LOW ){}
 }
   else if (room == 11215)
 {
  setSegment(0,1,0,1); // D , C , B, A 
  setColor(255, 255, 255);   // BLUE , RED , GREEN ----> WHITE
   Serial.println(" The 11215 Cabin has code: 5 WHITE ");
   while(digitalRead(button) == LOW ){}
 }
   else if (room == 11216)
 {
  setSegment(0,1,1,0); // D , C , B, A 
  setColor(0, 100,20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(" The 11216 Cabin has code: 6 YELLOW ");
   while(digitalRead(button) == LOW ){}
 }
   else if (room == 11217)
 {
  setSegment(0,1,1,1); // D , C , B, A 
  setColor(255, 0,0);   // BLUE , RED , GREEN ----> BLUE
   Serial.println(" The 11217 Cabin has code: 7 BLUE ");
   while(digitalRead(button) == LOW ){}
 }
  else if (room == 11218)
 {
  setSegment(1,0,0,0); // D , C , B, A 
  setColor(50, 100, 0);   // BLUE , RED , GREEN ----> PURPLE
   Serial.println(" The 11218 Cabin has code: 8 PURPLE ");
   while(digitalRead(button) == LOW ){}
 }
  else if (room == 11220)
 {
  setSegment(0,0,0,0); // D , C , B, A 
setColor(255, 255, 255);   // BLUE , RED , GREEN ----> WHITE
  Serial.println(" The 11220 Cabin has code: 0 WHITE ");
   while(digitalRead(button) == LOW ){}
 }
 
  else if (room == 11222)
 {
  setSegment(0,0,1,0); // D , C , B, A 
  setColor(255, 0 , 0);   // BLUE , RED , GREEN ----> BLUE
   Serial.println(" The 11222 Cabin has code: 2 BLUE ");
   while(digitalRead(button) == LOW ){}
 }

  else if (room == 11224)
 {
  setSegment(0,1,0,0); // D , C , B, A 
  setColor(0, 255, 0);   // BLUE , RED , GREEN ----> RED
   Serial.println(F(" The 11224 Cabin has code: 4 RED "));
   while(digitalRead(button) == LOW ){}
 }

  else if (room == 11226)
 {
  setSegment(0,1,1,0); // D , C , B, A 
  setColor(0, 0, 255);   // BLUE , RED , GREEN ----> GREEN
   Serial.println(F(" The 11226 Cabin has code: 6 GREEN "));
   while(digitalRead(button) == LOW ){}
 }
   else if (room == 11229)
 {
  setSegment(1,0,0,1); // D , C , B, A 
  setColor(0, 255, 0);   // BLUE , RED , GREEN ----> RED
   Serial.println(F(" The 11229 Cabin has code: 9 RED "));
   while(digitalRead(button) == LOW ){}
 }
     else if (room == 11230)
 {
  setSegment(0,0,0,0); // D , C , B, A 
  setColor(50,100, 0);   // BLUE , RED , GREEN ----> PURPLE
   Serial.println(F(" The 11230 Cabin has code: 0 PURPLE "));
   while(digitalRead(button) == LOW ){}
 }
    else if (room == 11231)
 {
  setSegment(0,0,0,1); // D , C , B, A 
  setColor(0 ,0 ,255);   // BLUE , RED , GREEN ---->GREEN
   Serial.println(F(" The 11231 Cabin has code: 1 GREEN "));
   while(digitalRead(button) == LOW ){}
 }
    else if (room == 11232)
 {
  setSegment(0,0,1,0); // D , C , B, A 
  setColor(255,255,255);   // BLUE , RED , GREEN ----> WHITE
   Serial.println(F(" The 11232 Cabin has code: 2 WHITE "));
   while(digitalRead(button) == LOW ){}
 }
  else if (room == 11233)
 {
  setSegment(0,0,1,1); // D , C , B, A 
  setColor(0,100,20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(F(" The 11233 Cabin has code: 3 YELLOW "));
   while(digitalRead(button) == LOW ){}
 }
  else if (room == 11235)
 {
  setSegment(0,1,0,1); // D , C , B, A 
  setColor(50,100,0);   // BLUE , RED , GREEN ----> PURPLE
   Serial.println(F(" The 11235 Cabin has code: 5 PURPLE "));
   while(digitalRead(button) == LOW ){}
 } 
  else if (room == 11236)
 {
  setSegment(0,1,1,0); // D , C , B, A 
  setColor(0,255,0);   // BLUE , RED , GREEN ----> RED
   Serial.println(F(" The 11235 Cabin has code: 6 RED "));
   while(digitalRead(button) == LOW ){}
 } 
   else if (room == 11237)
 {
  setSegment(0,1,1,1); // D , C , B, A 
  setColor(255,255,255);   // BLUE , RED , GREEN ----> WHITE
   Serial.println(F(" The 11237 Cabin has code: 7 WHITE "));
   while(digitalRead(button) == LOW ){}
 } 
    else if (room == 11239)
 {
  setSegment(1,0,0,1); // D , C , B, A 
  setColor(255,0,0);   // BLUE , RED , GREEN ----> BLUE
   Serial.println(F(" The 11237 Cabin has code: 9 BLUE "));
   while(digitalRead(button) == LOW ){}
 } 
     else if (room == 11240)
 {
  setSegment(0,0,0,0); // D , C , B, A 
  setColor(0,100,20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(F(" The 11237 Cabin has code: 0 YELLOW "));
   while(digitalRead(button) == LOW ){}
 } 
     else if (room == 11241)
 {
  setSegment(0,0,0,1); // D , C , B, A 
  setColor(0,255,0);   // BLUE , RED , GREEN ----> RED
   Serial.println(F(" The 11237 Cabin has code: 1 RED "));
   while(digitalRead(button) == LOW ){}
 } 
      else if (room == 11243)
 {
  setSegment(0,0,1,1); // D , C , B, A 
  setColor(0,0,255);   // BLUE , RED , GREEN ----> GREEN
   Serial.println(F(" The 11243 Cabin has code: 3 GREEN "));
   while(digitalRead(button) == LOW ){}
 } 
       else if (room == 11244)
 {
  setSegment(0,1,0,0); // D , C , B, A 
  setColor(255,0,0);   // BLUE , RED , GREEN ----> BLUE
   Serial.println(F(" The 11244 Cabin has code: 4 BLUE "));
   while(digitalRead(button) == LOW ){}
 } 
       else if (room == 11245)
 {
  setSegment(0,1,0,1); // D , C , B, A 
  setColor(0,100,20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(F(" The 11245 Cabin has code: 5 YELLOW "));
   while(digitalRead(button) == LOW ){}
 } 
       else if (room == 11247)
 {
  setSegment(0,1,0,1); // D , C , B, A 
  setColor(0,100,20);   // BLUE , RED , GREEN ----> PURPLE
   Serial.println(F(" The 11247 Cabin has code: 7 PURPLE "));
   while(digitalRead(button) == LOW ){}
 } 
        else if (room == 11249)
 {
  setSegment(1,0,0,1); // D , C , B, A 
  setColor(255,255,255);   // BLUE , RED , GREEN ----> WHITE
   Serial.println(F(" The 11249 Cabin has code: 9 WHITE "));
   while(digitalRead(button) == LOW ){}
 } 
         else if (room == 11250)
 {
  setSegment(1,0,0,1); // D , C , B, A 
  setColor(0,0,255);   // BLUE , RED , GREEN ----> GREEN
   Serial.println(F(" The 11250 Cabin has code: 0 GREEN "));
   while(digitalRead(button) == LOW ){}
 } 
         else if (room == 11251)
 {
  setSegment(0,0,0,1); // D , C , B, A 
  setColor(255,0,0);   // BLUE , RED , GREEN ----> BLUE
   Serial.println(F(" The 11251 Cabin has code: 1 BLUE "));
   while(digitalRead(button) == LOW ){}
 } 
         else if (room == 11252)
 {
  setSegment(0,0,1,0); // D , C , B, A 
  setColor(50,100,0);   // BLUE , RED , GREEN ----> PURPLE
   Serial.println(F(" The 11252 Cabin has code: 2 PURPLE "));
   while(digitalRead(button) == LOW ){}
 } 
         else if (room == 11253)
 {
  setSegment(0,0,1,1); // D , C , B, A 
  setColor(0,255,0);   // BLUE , RED , GREEN ----> RED
   Serial.println(F(" The 11253 Cabin has code: 3 RED "));
   while(digitalRead(button) == LOW ){}
 } 
         else if (room == 11254)
 {
  setSegment(0,1,0,0); // D , C , B, A 
  setColor(0,255,0);   // BLUE , RED , GREEN ----> WHITE
   Serial.println(F(" The 11254 Cabin has code: 4 WHITE "));
   while(digitalRead(button) == LOW ){}
 } 
          else if (room == 11255)
 {
  setSegment(0,1,0,1); // D , C , B, A 
  setColor(0,0,255);   // BLUE , RED , GREEN ----> GREEN
   Serial.println(F(" The 11255 Cabin has code: 5 GREEN "));
   while(digitalRead(button) == LOW ){}
 } 
          else if (room == 11260)
 {
  setSegment(0,0,0,0); // D , C , B, A 
  setColor(0,255,0);   // BLUE , RED , GREEN ----> RED
   Serial.println(F(" The 11260 Cabin has code: 0 RED "));
   while(digitalRead(button) == LOW ){}
 } 
          else if (room == 11262)
 {
  setSegment(0,0,1,0); // D , C , B, A 
  setColor(0,100,20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(F(" The 11262 Cabin has code: 2 YELLOW "));
   while(digitalRead(button) == LOW ){}
 } 
           else if (room == 11264)
 {
  setSegment(0,1,0,0); // D , C , B, A 
  setColor(50,100,0);   // BLUE , RED , GREEN ----> PURPLE
   Serial.println(F(" The 11264 Cabin has code: 4 PURPLE "));
   while(digitalRead(button) == LOW ){}
 } 
           else if (room == 11266)
 {
  setSegment(0,1,1,0); // D , C , B, A 
  setColor(255,0,0);   // BLUE , RED , GREEN ----> BLUE
   Serial.println(F(" The 11266 Cabin has code: 6 BLUE "));
   while(digitalRead(button) == LOW ){}
 } 
           else if (room == 11268)
 {
  setSegment(1,0,0,0); // D , C , B, A 
  setColor(0,100,20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(F(" The 11268 Cabin has code: 8 YELLOW "));
   while(digitalRead(button) == LOW ){}
 } 
           else if (room == 11270)
 {
  setSegment(0,0,0,0); // D , C , B, A 
  setColor(255,0,0);   // BLUE , RED , GREEN ----> BLUE
   Serial.println(F(" The 11270 Cabin has code: 0 BLUE "));
   while(digitalRead(button) == LOW ){}
 } 
            else if (room == 11272)
 {
  setSegment(0,0,1,0); // D , C , B, A 
  setColor(255,0,0);   // BLUE , RED , GREEN ----> GREEN
   Serial.println(F(" The 11272 Cabin has code: 2 GREEN "));
   while(digitalRead(button) == LOW ){}
 }
            else if (room == 11273)
 {
  setSegment(0,0,1,1); // D , C , B, A 
  setColor(255,0,0);   // BLUE , RED , GREEN ----> BLUE
   Serial.println(F(" The 11273 Cabin has code: 3 BLUE "));
   while(digitalRead(button) == LOW ){}
 }  
             else if (room == 11274)
 {
  setSegment(0,1,0,0); // D , C , B, A 
  setColor(0,100,20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(F(" The 11274 Cabin has code: 4 YELLOW "));
   while(digitalRead(button) == LOW ){}
 }  
              else if (room == 11275)
 {
  setSegment(0,1,0,1); // D , C , B, A 
  setColor(0,255,0);   // BLUE , RED , GREEN ----> RED
   Serial.println(F(" The 11275 Cabin has code: 5 RED "));
   while(digitalRead(button) == LOW ){}
 }  
             else if (room == 11276)
 {
  setSegment(0,1,1,0); // D , C , B, A 
  setColor(255,255,255);   // BLUE , RED , GREEN ----> WHITE
   Serial.println(F(" The 11276 Cabin has code: 6 WHITE "));
   while(digitalRead(button) == LOW ){}
 }  
              else if (room == 11277)
 {
  setSegment(0,1,1,1); // D , C , B, A 
  setColor(0,100,20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(F(" The 11277 Cabin has code: 7 YELLOW "));
   while(digitalRead(button) == LOW ){}
 } 
              else if (room == 11278)
 {
  setSegment(1,0,0,0); // D , C , B, A 
  setColor(0,0,255);   // BLUE , RED , GREEN ----> GREEN
   Serial.println(F(" The 11278 Cabin has code: 8 GREEN "));
   while(digitalRead(button) == LOW ){}
 } 
              else if (room == 11280)
 {
  setSegment(0,0,0,0); // D , C , B, A 
  setColor(255,255,255);   // BLUE , RED , GREEN ----> WHITE
   Serial.println(F(" The 11280 Cabin has code: 0 WHITE "));
   while(digitalRead(button) == LOW ){}
 } 
              else if (room == 11282)
 {
  setSegment(0,0,1,0); // D , C , B, A 
  setColor(0,255,0);   // BLUE , RED , GREEN ----> RED
   Serial.println(F(" The 11282 Cabin has code: 2 RED "));
   while(digitalRead(button) == LOW ){}
 } 
              else if (room == 11284)
 {
  setSegment(0,1,0,0); // D , C , B, A 
  setColor(0,0,255);   // BLUE , RED , GREEN ----> GREEN
   Serial.println(F(" The 11284 Cabin has code: 4 GREEN "));
   while(digitalRead(button) == LOW ){}
 } 
              else if (room == 11286)
 {
  setSegment(0,1,1,0); // D , C , B, A 
  setColor(50,100,0);   // BLUE , RED , GREEN ----> PURPLE
   Serial.println(F(" The 11286 Cabin has code: 6 PURPLE "));
   while(digitalRead(button) == LOW ){}
 } 
              else if (room == 11288)
 {
  setSegment(1,0,0,0); // D , C , B, A 
  setColor(0,255,0);   // BLUE , RED , GREEN ----> RED
   Serial.println(F(" The 11288 Cabin has code: 8 RED "));
   while(digitalRead(button) == LOW ){}
 }
             else if (room == 11290)
 {
  setSegment(0,0,0,0); // D , C , B, A 
  setColor(50,100,0);   // BLUE , RED , GREEN ----> PURPLE
   Serial.println(F(" The 11290 Cabin has code: 0 PURPLE "));
   while(digitalRead(button) == LOW ){}
 }  
              else if (room == 11292)
 {
  setSegment(0,0,1,0); // D , C , B, A 
  setColor(255,0,0);   // BLUE , RED , GREEN ----> BLUE
   Serial.println(F(" The 11292 Cabin has code: 2 BLUE "));
   while(digitalRead(button) == LOW ){}
 } 
             else if (room == 11293)
 {
  setSegment(0,0,1,1); // D , C , B, A 
  setColor(255,255,255);   // BLUE , RED , GREEN ----> WHITE
   Serial.println(F(" The 11293 Cabin has code: 3 WHITE "));
   while(digitalRead(button) == LOW ){}
 } 
           else if (room == 11294)
 {
  setSegment(0,1,0,0); // D , C , B, A 
  setColor(0,255,0);   // BLUE , RED , GREEN ----> RED
   Serial.println(F(" The 11294 Cabin has code: 4 RED "));
   while(digitalRead(button) == LOW ){}
 } 
          else if (room == 11295)
 {
  setSegment(0,1,0,1); // D , C , B, A 
  setColor(255,0,0);   // BLUE , RED , GREEN ----> BLUE
   Serial.println(F(" The 11295 Cabin has code: 5 BLUE "));
   while(digitalRead(button) == LOW ){}
 } 
       else if (room == 11296)
 {
  setSegment(0,1,1,0); // D , C , B, A 
  setColor(0,100,20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(F(" The 11296 Cabin has code: 6 YELLOW "));
   while(digitalRead(button) == LOW ){}
 } 
       else if (room == 11297)
 {
  setSegment(0,1,1,1); // D , C , B, A 
  setColor(0,0,255);   // BLUE , RED , GREEN ----> GREEN
   Serial.println(F(" The 11297 Cabin has code: 7 GREEN "));
   while(digitalRead(button) == LOW ){}
 } 
       else if (room == 11298)
 {
  setSegment(1,0,0,0); // D , C , B, A 
  setColor(255,0,0);   // BLUE , RED , GREEN ----> BLUE
   Serial.println(F(" The 11298 Cabin has code: 8 BLUE "));
   while(digitalRead(button) == LOW ){}
 } 
       else if (room == 11299)
 {
  setSegment(1,0,0,1); // D , C , B, A 
  setColor(50,100,0);   // BLUE , RED , GREEN ----> PURPLE
   Serial.println(F(" The 11299 Cabin has code: 9 PURPLE "));
   while(digitalRead(button) == LOW ){}
 } 
        else if (room == 11300)
 {
  setSegment(0,0,0,0); // D , C , B, A 
  setColor(0,100,20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(F(" The 11300 Cabin has code: 0 YELLOW "));
   while(digitalRead(button) == LOW ){}
 } 
      else if (room == 11301)
 {
  setSegment(0,0,0,1); // D , C , B, A 
  setColor(255,255,255);   // BLUE , RED , GREEN ----> WHITE
   Serial.println(F(" The 11301 Cabin has code: 1 WHITE "));
   while(digitalRead(button) == LOW ){}
 } 
       else if (room == 11302)
 {
  setSegment(0,0,1,0); // D , C , B, A 
  setColor(255,255,255);   // BLUE , RED , GREEN ----> WHITE
   Serial.println(F(" The 11302 Cabin has code: 2 WHITE "));
   while(digitalRead(button) == LOW ){}
 } 
      else if (room == 11303)
 {
  setSegment(0,0,1,1); // D , C , B, A 
  setColor(50,100,0);   // BLUE , RED , GREEN ----> PURPLE
   Serial.println(F(" The 11303 Cabin has code: 3 PURPLE "));
   while(digitalRead(button) == LOW ){}
 } 
      else if (room == 11304)
 {
  setSegment(0,1,0,0); // D , C , B, A 
  setColor(255,0,0);   // BLUE , RED , GREEN ----> BLUE
   Serial.println(F(" The 11304 Cabin has code: 4 BLUE "));
   while(digitalRead(button) == LOW ){}
 } 
     else if (room == 11305)
 {
  setSegment(0,1,0,1); // D , C , B, A 
  setColor(255,255,255);   // BLUE , RED , GREEN ----> WHITE
   Serial.println(F(" The 11305 Cabin has code: 5 WHITE "));
   while(digitalRead(button) == LOW ){}
 } 
    else if (room == 11306)
 {
  setSegment(0,1,1,0); // D , C , B, A 
  setColor(0,0,255);   // BLUE , RED , GREEN ----> GREEN
   Serial.println(F(" The 11306 Cabin has code: 6 GREEN "));
   while(digitalRead(button) == LOW ){}
 } 
    else if (room == 11307)
 {
  setSegment(0,1,1,1); // D , C , B, A 
  setColor(0,255,0);   // BLUE , RED , GREEN ----> RED
   Serial.println(F(" The 11307 Cabin has code: 7 RED "));
   while(digitalRead(button) == LOW ){}
 } 
     else if (room == 11308)
 {
  setSegment(1,0,0,0); // D , C , B, A 
  setColor(255,255,255);   // BLUE , RED , GREEN ----> WHITE
   Serial.println(F(" The 11308 Cabin has code: 8 WHITE "));
   while(digitalRead(button) == LOW ){}
 } 
      else if (room == 11309)
 {
  setSegment(1,0,0,1); // D , C , B, A 
  setColor(0,100,20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(F(" The 11309 Cabin has code: 9 YELLOW "));
   while(digitalRead(button) == LOW ){}
 } 
      else if (room == 11310)
 {
  setSegment(0,0,0,0); // D , C , B, A 
  setColor(0,0,255);   // BLUE , RED , GREEN ----> GREEN
   Serial.println(F(" The 11310 Cabin has code: 0 GREEN "));
   while(digitalRead(button) == LOW ){}
 } 
       else if (room == 11311)
 {
  setSegment(0,0,0,1); // D , C , B, A 
  setColor(50,100,0);   // BLUE , RED , GREEN ----> PURPLE
   Serial.println(F(" The 11311 Cabin has code: 1 PURPLE "));
   while(digitalRead(button) == LOW ){}
 } 
       else if (room == 11312)
 {
  setSegment(0,0,1,0); // D , C , B, A 
  setColor(50,100,0);   // BLUE , RED , GREEN ----> PURPLE
   Serial.println(F(" The 11312 Cabin has code: 2 PURPLE "));
   while(digitalRead(button) == LOW ){}
 }
       else if (room == 11313)
 {
  setSegment(0,0,1,1); // D , C , B, A 
  setColor(0,100,20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(F(" The 11313 Cabin has code: 3 YELLOW "));
   while(digitalRead(button) == LOW ){}
 }
        else if (room == 11314)
 {
  setSegment(0,1,0,0); // D , C , B, A 
  setColor(255,255,255);   // BLUE , RED , GREEN ----> WHITE
   Serial.println(F(" The 11314 Cabin has code: 4 WHITE "));
   while(digitalRead(button) == LOW ){}
 }
        else if (room == 11315)
 {
  setSegment(0,1,0,1); // D , C , B, A 
  setColor(0,100,50);   // BLUE , RED , GREEN ----> PURPLE
   Serial.println(F(" The 11315 Cabin has code: 5 PURPLE "));
   while(digitalRead(button) == LOW ){}
 }
        else if (room == 11316)
 {
  setSegment(0,1,1,0); // D , C , B, A 
  setColor(0,255,0);   // BLUE , RED , GREEN ----> RED
   Serial.println(F(" The 11316 Cabin has code: 6 RED "));
   while(digitalRead(button) == LOW ){}
 }
         else if (room == 11317)
 {
  setSegment(0,1,1,1); // D , C , B, A 
  setColor(255,0,0);   // BLUE , RED , GREEN ----> BLUE
   Serial.println(F(" The 11317 Cabin has code: 7 BLUE "));
   while(digitalRead(button) == LOW ){}
 }
         else if (room == 11318)
 {
  setSegment(1,0,0,0); // D , C , B, A 
  setColor(50,100,0);   // BLUE , RED , GREEN ----> PURPLE
   Serial.println(F(" The 11318 Cabin has code: 8 PURPLE "));
   while(digitalRead(button) == LOW ){}
 }
          else if (room == 11319)
 {
  setSegment(1,0,0,1); // D , C , B, A 
  setColor(0,0,255);   // BLUE , RED , GREEN ----> GREEN
   Serial.println(F(" The 11319 Cabin has code: 9 GREEN "));
   while(digitalRead(button) == LOW ){}
 }
          else if (room == 11320)
 {
  setSegment(0,0,0,0); // D , C , B, A 
  setColor(0,255,0);   // BLUE , RED , GREEN ----> RED
   Serial.println(F(" The 11320 Cabin has code: 0 RED "));
   while(digitalRead(button) == LOW ){}
 }
           else if (room == 11321)
 {
  setSegment(0,0,0,1); // D , C , B, A 
  setColor(0,100,20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(F(" The 11321 Cabin has code: 1 YELLOW "));
   while(digitalRead(button) == LOW ){}
 }
          else if (room == 11322)
 {
  setSegment(0,0,1,0); // D , C , B, A 
  setColor(0,100,20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(F(" The 11321 Cabin has code: 2 YELLOW "));
   while(digitalRead(button) == LOW ){}
 }
         else if (room == 11323)
 {
  setSegment(0,0,1,1); // D , C , B, A 
  setColor(0,0,255);   // BLUE , RED , GREEN ----> GREEN
   Serial.println(F(" The 11323 Cabin has code: 3 GREEN "));
   while(digitalRead(button) == LOW ){}
 }
         else if (room == 11324)
 {
  setSegment(0,1,0,0); // D , C , B, A 
  setColor(50,100,0);   // BLUE , RED , GREEN ---->PURPLE
   Serial.println(F(" The 11324 Cabin has code: 4 PURPLE "));
   while(digitalRead(button) == LOW ){}
 }
         else if (room == 11325)
 {
  setSegment(0,1,0,1); // D , C , B, A 
  setColor(0,100,20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(F(" The 11325 Cabin has code: 5 YELLOW "));
   while(digitalRead(button) == LOW ){}
 }
         else if (room == 11326)
 {
  setSegment(0,1,1,0); // D , C , B, A 
  setColor(255,0,0);   // BLUE , RED , GREEN ----> BLUE
   Serial.println(F(" The 11326 Cabin has code: 6 BLUE "));
   while(digitalRead(button) == LOW ){}
 }
         else if (room == 11327)
 {
  setSegment(0,1,1,1); // D , C , B, A 
  setColor(255,255,255);   // BLUE , RED , GREEN ----> WHITE
   Serial.println(F(" The 11327 Cabin has code: 7 WHITE "));
   while(digitalRead(button) == LOW ){}
 }
          else if (room == 11328)
 {
  setSegment(1,0,0,0); // D , C , B, A 
  setColor(0,100,20);   // BLUE , RED , GREEN ----> YELLOW
   Serial.println(F(" The 11328 Cabin has code: 8 YELLOW "));
   while(digitalRead(button) == LOW ){}
 }
       else if (room == 11329)
 {
  setSegment(1,0,0,1); // D , C , B, A 
  setColor(0,255,0);   // BLUE , RED , GREEN ----> RED
   Serial.println(F(" The 11329 Cabin has code: 9 RED "));
   while(digitalRead(button) == LOW ){}
 }
}

 void setSegment ( int D , int  C , int B , int A) //elegxw to segment vazw 0-1
   {
     digitalWrite ( D11, D);
     digitalWrite (D10 , C);
     digitalWrite (D09 , B);
     digitalWrite (D08 , A ); 
   }
   
   void setColor(int PulseBlue1 , int PulseRed1 , int PulseGreen1) //rythmizw tin entash sto kathe podaraki
{
  analogWrite (Blue1 , PulseBlue1); //analogikoi eksodoi
  analogWrite (Red1 , PulseRed1);
  analogWrite (Green1 , PulseGreen1);
}
