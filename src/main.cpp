#include <Arduino.h> // Incluye la biblioteca principal de Arduino

// Definición de pines para el controlador del motor
#define IN1 33      // Entrada IN1 del controlador del motor
#define IN2 25      // Entrada IN2 del controlador del motor
#define IN3 26      // Entrada IN3 del controlador del motor
#define IN4 27      // Entrada IN4 del controlador del motor

// Definición de pines para los sensores
#define S1  36      // Sensor 1
#define S2  39      // Sensor 2
#define S3  34      // Sensor 3
#define S4  35      // Sensor 4
#define S5  32      // Sensor 5

void setup() {
  // Configuración inicial que se ejecuta una vez al inicio
  Serial.begin(115200); // Inicializa la comunicación serial a 115200 baudios

  // Configura los pines del controlador del motor como salidas
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Configura los pines de los sensores como entradas
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  pinMode(S3, INPUT);
  pinMode(S4, INPUT);
  pinMode(S5, INPUT);
}

void loop() {
  // Bucle principal que se ejecuta continuamente
  // Lee el estado de los sensores y lo imprime por el puerto serie
  Serial.println("Sensor States:");
  Serial.println("-----------------");
  Serial.print("S1:\t");
  Serial.println(digitalRead(S1));
  Serial.print("S2:\t");
  Serial.println(digitalRead(S2));
  Serial.print("S3:\t");
  Serial.println(digitalRead(S3));
  Serial.print("S4:\t");
  Serial.println(digitalRead(S4));
  Serial.print("\tS5:\t");
  Serial.println(digitalRead(S5));
  Serial.println(digitalRead(S5));
  Serial.println("-----------------\n");
  delay(500); // Add a delay for better readability in the serial monitor



  
}