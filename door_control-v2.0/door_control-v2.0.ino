#include <PCF8575.h>

PCF8575 pcf8575(0x20);

void setup() {
  Serial.begin(9600);
  /*Se configuran todos los pines como entrada */
  pinMode(2, INPUT); 
  pinMode(3, INPUT); 
  pinMode(4, INPUT); 
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT); 
  pinMode(8, INPUT); 
  pinMode(9, INPUT);
  pinMode(10, INPUT); 
  pinMode(11, INPUT); 
  pinMode(12, INPUT); 
  pinMode(13, INPUT); 
  pinMode(14, INPUT); 
  pinMode(15, INPUT);
  pinMode(16, INPUT); 
  pinMode(17, INPUT); 
  pinMode(18, INPUT);
  pinMode(19, INPUT);
  pinMode(22, INPUT);
  pinMode(23, INPUT);
  pinMode(24, INPUT);
  pinMode(25, INPUT);
  pinMode(26, INPUT);
  pinMode(27, INPUT);
  pinMode(28, INPUT);
  pinMode(29, INPUT);
  pinMode(30, INPUT);
  pinMode(31, INPUT);
  pinMode(32, INPUT);
  pinMode(33, INPUT);
  pinMode(34, INPUT);
  pinMode(35, INPUT);
  pinMode(36, INPUT);
  pinMode(37, INPUT);
  pinMode(38, INPUT);
  pinMode(39, INPUT);
  pinMode(40, INPUT);
  pinMode(41, INPUT);
  pinMode(42, INPUT);
  pinMode(43, INPUT);
  pinMode(44, INPUT);
  pinMode(45, INPUT);
  pinMode(46, INPUT);
  pinMode(47, INPUT);
  pinMode(48, INPUT);
  pinMode(49, INPUT);
  pinMode(50, INPUT);
  pinMode(51, INPUT);
  pinMode(52, INPUT);
  pinMode(53, INPUT);
  
  /*Se configuran los pines del expansor como entrada */
  pcf8575.begin();
}

// the loop routine runs over and over again forever:
void loop() {
  
  int buttons [68];
  //variable que sera impresa por el puerto serial conteniendo los estados de los pines leidos
  String states="";
  // leer las entradas
  buttons[0] = digitalRead(2);
  buttons[1] = digitalRead(3);
  buttons[2] = digitalRead(4);
  buttons[3] = digitalRead(5);
  buttons[4] = digitalRead(6);
  buttons[5] = digitalRead(7);
  buttons[6] = digitalRead(8);
  buttons[7] = digitalRead(9);
  buttons[8] = digitalRead(10);
  buttons[9] = digitalRead(11);
  buttons[10] = digitalRead(12);
  buttons[11] = digitalRead(13);
  buttons[12] = digitalRead(14);
  buttons[13] = digitalRead(15);
  buttons[14] = digitalRead(16);
  buttons[15] = digitalRead(17);
  buttons[16] = digitalRead(18);
  buttons[17] = digitalRead(19);
  buttons[18] = digitalRead(22);
  buttons[19] = digitalRead(23);
  buttons[20] = digitalRead(24);
  buttons[21] = digitalRead(25);
  buttons[22] = digitalRead(26);
  buttons[23] = digitalRead(27);
  buttons[24] = digitalRead(28);
  buttons[25] = digitalRead(29);
  buttons[26] = digitalRead(30);
  buttons[27] = digitalRead(31);
  buttons[28] = digitalRead(32);
  buttons[29] = digitalRead(33);
  buttons[30] = digitalRead(34);
  buttons[31] = digitalRead(35);
  buttons[32] = digitalRead(36);
  buttons[33] = digitalRead(37);
  buttons[34] = digitalRead(38);
  buttons[35] = digitalRead(39);
  buttons[36] = digitalRead(40);
  buttons[37] = digitalRead(41);
  buttons[38] = digitalRead(42);
  buttons[39] = digitalRead(43);
  buttons[40] = digitalRead(44);
  buttons[41] = digitalRead(45);
  buttons[42] = digitalRead(46);
  buttons[43] = digitalRead(47);
  buttons[44] = digitalRead(48);
  buttons[45] = digitalRead(49);
  buttons[46] = digitalRead(50);
  buttons[47] = digitalRead(51);
  buttons[48] = digitalRead(52);
  buttons[49] = digitalRead(53);
  
  // leer las entradas del expansor
  buttons[50] = pcf8575.read(0);
  buttons[51] = pcf8575.read(1);
  buttons[52] = pcf8575.read(2);
  buttons[53] = pcf8575.read(3);
  buttons[54] = pcf8575.read(4);
  buttons[55] = pcf8575.read(5);
  buttons[56] = pcf8575.read(6);
  buttons[57] = pcf8575.read(7);
  buttons[58] = pcf8575.read(8);
  buttons[59] = pcf8575.read(9);
  buttons[60] = pcf8575.read(10);
  buttons[61] = pcf8575.read(11);
  buttons[62] = pcf8575.read(12);
  buttons[63] = pcf8575.read(13);
  buttons[64] = pcf8575.read(14);
  buttons[65] = pcf8575.read(15);
  
  // ciclo para concatenar los estados de las entradas leidas a la variable states
  for(int i = 0 ; i < 66 ; i++)
  {
    states += String(buttons[i]);
  }
  Serial.print(states);
  //retorno de carro para imprimir todo en una misma linea
  Serial.print("\r");
  // delay entre cada leida para estabilidad
  delay(100);        
}
