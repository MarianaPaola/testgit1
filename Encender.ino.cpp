#include <Arduino.h>
#line 1 "/home/mariana/Escritorio/Proyectos/8Luces/Programas/ProgramaProyecto/Encender/Encender.ino"

int diodo[]={8, 7, 6, 5, 9, 10, 11, 12, 2};
int select;
int contador;

#line 6 "/home/mariana/Escritorio/Proyectos/8Luces/Programas/ProgramaProyecto/Encender/Encender.ino"
void setup();
#line 13 "/home/mariana/Escritorio/Proyectos/8Luces/Programas/ProgramaProyecto/Encender/Encender.ino"
void loop();
#line 6 "/home/mariana/Escritorio/Proyectos/8Luces/Programas/ProgramaProyecto/Encender/Encender.ino"
void setup() {
   for(contador=0; contador=7; contador++){
    pinMode(diodo[contador],OUTPUT);
   }
   pinMode(2, INPUT);
}

void loop() {
  for(contador=0;contador=7;contador++){
    digitalWrite(diodo[contador], LOW);
  }
  while(1){
    select = digitalRead(2);
    if(select = HIGH) break;
    digitalWrite(diodo[contador], HIGH);
    if(contador = 0)digitalWrite(diodo[7], LOW);
    else digitalWrite(diodo[contador-1], LOW);
    delay(100);
    contador++;
    if(contador = 7)contador = 0;    
  } 
}

