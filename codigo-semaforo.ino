// Definição dos pinos dos LEDs
int pinoVerde = 6;
int pinoAmarelo = 7;
int pinoVermelho = 8;

// Ponteiros para controlar os LEDs
int* ledVerde = &pinoVerde;
int* ledAmarelo = &pinoAmarelo;
int* ledVermelho = &pinoVermelho;

void setup() {
  // Configura os pinos como saída usando os ponteiros
  pinMode(*ledVerde, OUTPUT);
  pinMode(*ledAmarelo, OUTPUT);
  pinMode(*ledVermelho, OUTPUT);
}

void loop() {
  // VERMELHO aceso por 6 segundos
  digitalWrite(*ledVermelho, HIGH); // Liga vermelho usando ponteiro
  digitalWrite(*ledVerde, LOW); // Desliga verde
  digitalWrite(*ledAmarelo, LOW); // Desliga amarelo
  delay(6000); // Espera 6 segundos
  
  // VERDE aceso por 4 segundos
  digitalWrite(*ledVerde, HIGH); // Liga verde usando ponteiro
  digitalWrite(*ledVermelho, LOW); // Desliga vermelho
  digitalWrite(*ledAmarelo, LOW); // Desliga amarelo
  delay(4000); // Espera 4 segundos
  
  // AMARELO aceso por 2 segundos
  digitalWrite(*ledAmarelo, HIGH); // Liga amarelo usando ponteiro
  digitalWrite(*ledVerde, LOW); // Desliga verde
  digitalWrite(*ledVermelho, LOW); // Desliga vermelho
  delay(2000); // Espera 2 segundos
}