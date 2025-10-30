# Atividade - Semáforo Offline

## Introdução

Este projeto consiste na programação e montagem de um semáforo funcional utilizando Arduino Uno. O objetivo é simular o funcionamento de um semáforo real, alternando entre as luzes vermelha, amarela e verde com temporização específica, aplicando conceitos de C++ com ênfase no uso de ponteiros.

O semáforo segue um ciclo contínuo:
- Vermelho: 6 segundos
- Verde: 4 segundos
- Amarelo: 2 segundos

O projeto em funcionamento pode ser visualizado no arquivo `video-semaforo.mp4`.

## Materiais Necessários

| Quantidade | Componente |
|------------|------------|
| 1 | Arduino Uno |
| 1 | Protoboard |
| 1 | LED Vermelho |
| 1 | LED Amarelo |
| 1 | LED Verde |
| 3 | Resistores 1kΩ (Marrom, Preto, Vermelho, Dourado) |
| 6 | Jumpers Macho-Fêmea |
| 1 | Jumper Macho-Macho |
| 1 | Suporte para Semáforo |

## Código do Projeto
```cpp
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
  digitalWrite(*ledVermelho, HIGH);  // Liga vermelho usando ponteiro
  digitalWrite(*ledVerde, LOW);      // Desliga verde
  digitalWrite(*ledAmarelo, LOW);    // Desliga amarelo
  delay(6000);  // Espera 6 segundos
  
  // VERDE aceso por 4 segundos
  digitalWrite(*ledVerde, HIGH);     // Liga verde usando ponteiro
  digitalWrite(*ledVermelho, LOW);   // Desliga vermelho
  digitalWrite(*ledAmarelo, LOW);    // Desliga amarelo
  delay(4000);  // Espera 4 segundos
  
  // AMARELO aceso por 2 segundos
  digitalWrite(*ledAmarelo, HIGH);   // Liga amarelo usando ponteiro
  digitalWrite(*ledVerde, LOW);      // Desliga verde
  digitalWrite(*ledVermelho, LOW);   // Desliga vermelho
  delay(2000);  // Espera 2 segundos
}
```

## Explicação do Código

### Uso de Ponteiros

O código utiliza ponteiros para gerenciar os pinos dos LEDs:
```cpp
int* ledVerde = &pinoVerde;
```

- `int*` declara um ponteiro para inteiro
- `&pinoVerde` obtém o endereço de memória da variável
- `*ledVerde` desreferencia o ponteiro, acessando o valor armazenado

### Lógica de Funcionamento

1. Setup configura os pinos 6, 7 e 8 como saída usando ponteiros
2. Loop executa o ciclo do semáforo continuamente
3. A função delay() controla o tempo de cada fase
4. Apenas um LED permanece aceso por vez

## Avaliações dos Colegas

| Avaliador | Feedback | Nota |
|-----------|----------|------|
| Guilherme Hassenplug | A montagem física do circuito ficou simples, porém completa, o que facilita tanto a compreensão quanto a manutenção do sistema. O tempo de funcionamento está de acordo com as métricas estabelecidas, sendo validado com auxílio de um cronômetro de telefone. Já o código apresenta uma estrutura intuitiva, com variáveis bem nomeadas que representam corretamente cada LED, seguindo de maneira coerente a lógica de funcionamento de um semáforo. | 10/10 |
| Lucas Faria | A montagem foi eficiente e organizada. O tempo de funcionamento está de acordo com os critérios da atividade. O código está funcional, bem organizado e comentado, com variáveis bem estruturadas, resultando em uma entrega completa e bem-sucedida. | 10/10 |

## Conclusão

O projeto foi concluído com sucesso, atendendo todos os requisitos propostos. A implementação demonstrou a aplicação prática de ponteiros em C++ para manipulação de hardware no Arduino.

A utilização de ponteiros mostrou-se eficiente para referenciar e controlar os pinos do Arduino. A temporização foi validada e está funcionando corretamente conforme as especificações, proporcionando uma experiência valiosa na integração entre programação e eletrônica.

---

**Desenvolvido por:** Daniel Polakiewicz Guilger  
**Data:** 30/10/2025
