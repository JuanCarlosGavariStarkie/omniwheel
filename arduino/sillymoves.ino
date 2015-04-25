int E = 90; //Motor hacia delante
int D = 250; // Motor Retrocede
int T = 0;  //Motor Parado
byte lecmovil;
int motor1;
int motor2;


void avanca(int t){
  analogWrite(9, E);  //adelante
  analogWrite(10, D);
  analogWrite(11, D);  
  analogWrite(3, E);
  delay (t);
}

void para(int t){
  analogWrite(9, T);  
  analogWrite(10, T);
  analogWrite(11, T);  
  analogWrite(3, T);
  delay (t);
}

void atras(int t){
  analogWrite(9, D);  
  analogWrite(10, E);
  analogWrite(11, D);  
  analogWrite(3, D);
  delay (t); 
}

void giraEsquerra(int t){
  analogWrite(9, E);  
  analogWrite(10, E);  
  analogWrite(11, E);  
  analogWrite(3, E);
  delay (t); 
}

void giraDreta(int t){
  analogWrite(9, D);  
  analogWrite(10, D);
  analogWrite(11, D);  
  analogWrite(3, D);
  delay (t);  
}

void dad(int t){//diagonal avança dreta
  analogWrite(9, T);  //adelante
  analogWrite(10, D);
  analogWrite(11, T);  
  analogWrite(3, E);
  delay (t);  
}

void drd(int t){//diagonal retrocedeix dreta
  analogWrite(9, T);  //adelante
  analogWrite(10, E);
  analogWrite(11, T);  
  analogWrite(3, D);
  delay (t);  
}

void dae(int t){//diagonal avança dreta
  analogWrite(9, E);  //adelante
  analogWrite(10, T);
  analogWrite(11, D);  
  analogWrite(3, T);
  delay (t);  
}
void dre(int t){//diagonal retrocedeix esquerra
  analogWrite(9, D);  //adelante
  analogWrite(10, T);
  analogWrite(11, E);  
  analogWrite(3, T);
  delay (t);  
}
  

void setup()  { 
  // declare pin 9 to be an output:
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(3, OUTPUT);
  // initialize the serial communication:
  Serial.begin(9600);
} 


void loop()  { 
  avanca(1000);
  atras(1000);
  giraEsquerra(1000);
  giraDreta(1000);
  dad(1000);
  drd(1000);
  dae(1000);
  dre(1000);
  para(500);
  
}
/*
  if (Serial1.available()) { 
    // read the most recent byte (which will be from 0 to 255):
      lecmovil = Serial1.read();
      //El valor estará entre 48 y 57, utilizaré el comando SWITCH CASE a ver que tal
      if(lecmovil==51) {
        avanca();
      }
      if(lecmovil==55) {
        atras();
      }
      if(lecmovil==53) {
        para();
      }
      if(lecmovil==50) {
        giraDreta(); 
      }
      if(lecmovil==49) {
        giraEsquerra(); 
      }
       if(lecmovil==56) {
        invpivota();
      }
      if(lecmovil==57) {
        pivota();
      }
       
      switch(lecmovil)  {
        case 2:
        giraDreta();
        break;
        
        case 1:
        giraEsquerra();
        break;
        
        
        case 3:
        avanca ();
        break;
        
        case 5:
        para ();
        break;
        
        case 7:
        atras ();
        break;
        
        case 8:
        invpivota ();
        break;
        
        case 9:
        pivota ();
      }
  }      
}
*/
