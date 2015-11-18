// Auto to arxeio perilamvanei to tmima kwdika pou perigrafei pws emfanizontai to psifio sto 7 segment

int D11 = 11; // psifiaki e3odos pros 7447 IC...sto 7-segment sto D
int D10 = 10 ; // psifiaki e3odos pros 7447 IC...sto 7-segment sto C
int D09 = 9 ;// psifiaki e3odos pros 7447 IC ... sto 7 segment sto B
int D08 = 8 ;// psifiaki e3odos pros 7447 IC ...sto 7 segment sto A


 void setup ()
 {
    pinMode ( D11 , OUTPUT );
    pinMode ( D10 , OUTPUT );
    pinMode ( D09 , OUTPUT );
    pinMode ( D08 , OUTPUT );
    
 }
 void loop() 
 {
 
    setSegment(0,0,0,0);
 delay(2000);
  setSegment(0,0,0,1);
 delay(2000);
     setSegment(0,0,1,0);
 delay(2000);
  setSegment(0,0,1,1);
 delay(2000);
  setSegment(0,1,0,0);
 delay(2000);
  setSegment(0,1,0,1);
 delay(2000);
  setSegment(0,1,1,0);
 delay(2000);
  setSegment(0,1,1,1);
 delay(2000);
 setSegment(1,0,0,0);
 delay(2000);  
  setSegment(1,0,0,1);
 delay(2000);
}
 
 
 void setSegment ( int D , int  C , int B , int A)
   {
     digitalWrite ( D11, D);
     digitalWrite (D10 , C);
     digitalWrite (D09 , B);
     digitalWrite (D08 , A ); 
   }
   
