int pinSensor = A0; // Pino Sensor
int Rele = 3;      // Pino Relé
int buzzer = 2;    // Pino Buzzer
int ledVerde = 4;  // Pino LED Verde
int ledVermelho = 5; // Pino LED Vermelho

int var = 0;
int ValDesarm = 30; // Variável para selecionar a quantidade de Gás/Fumaça detectada
int valor = 0;

void setup()
{
  Serial.begin(9600); // Inicia porta Serial em 9600 baud
  pinMode(Rele, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  Serial.println("Ok!");
}

void loop()
{
  valor = analogRead(pinSensor); // Faz a leitura da entrada do sensor
  valor = map(valor, 0, 1023, 0, 100); // Faz a conversão da variável para porcentagem
  Serial.println(valor); // Escreve o valor na porta Serial

  if (valor >= ValDesarm)
  { 
    digitalWrite(ledVerde, LOW);    // Apaga LED verde
    digitalWrite(ledVermelho, HIGH); // Acende LED vermelho
    digitalWrite(Rele, HIGH);        // Liga relé para solenóide
    digitalWrite(buzzer, HIGH);      // Dispara alarme de vazamento ou possível incêndio
    Serial.println("Alarme disparado!!!"); // Apresenta mensagem na porta serial
    delay(1000); // Tempo de disparo do alarme
    digitalWrite(buzzer, LOW); // Desliga o alarme
    delay(2000); // Aguarda
  }
  else
  {
    digitalWrite(Rele, LOW); // Caso contrário permaneça com o relé desligado
    digitalWrite(ledVerde, HIGH);    // Acende LED verde
    digitalWrite(ledVermelho, LOW); // Apaga LED vermelho
  }

  delay(1000);
}
