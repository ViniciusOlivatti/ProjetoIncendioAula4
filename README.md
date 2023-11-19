Descrição:
Este projeto utiliza um Arduino para criar um sistema de alerta de incêndio simples e eficaz. O dispositivo é capaz de detectar a presença de fumaça no ambiente, acionando um alarme sonoro e visual para alertar sobre a possível ocorrência de um incêndio. A detecção de fumaça é realizada por meio de um sensor de fumaça MQ-2, que é sensível a partículas finas produzidas durante um incêndio.

Componentes Necessários:

1.Arduino (qualquer modelo compatível)
2.Sensor de fumaça MQ-2
3.Buzzer
4.LED
5.Resistores
6.Protoboard e fios jumper
7.Fonte de alimentação para o Arduino

Instruções de Montagem:

1.Conectar o Sensor de Fumaça:
    Conecte a saída analógica do sensor MQ-2 ao pino analógico A0 do Arduino.
    Conecte a saída digital do sensor MQ-2 ao pino digital D2 do Arduino.
  
2.Conectar o Módulo de Relé:
  Conecte o pino de controle do relé ao pino digital D3 do Arduino.
  
3.Conectar o Buzzer:
  Conecte o pino positivo do buzzer ao pino digital D4 do Arduino.
  Conecte o pino negativo do buzzer a qualquer pino GND do Arduino.

4.Conectar o LED:
  Conecte o anodo (perna mais longa) do LED a um resistor de 220 ohms e, em seguida, ao pino digital D5 do Arduino.
  Conecte o catodo (perna mais curta) do LED a qualquer pino GND do Arduino.

5.Alimentação:
    Conecte a alimentação do Arduino, garantindo que todos os componentes estejam devidamente alimentados.
    
Como Utilizar:

1.Faça as conexões conforme as instruções e o esquema fornecido.
2.Carregue o código no Arduino usando a IDE do Arduino.
3.Alimente o Arduino.
4.O sistema estará em modo de espera. Se o sensor de fumaça detectar uma concentração significativa, o alarme sonoro, visual e outras 5.ações configuradas serão acionadas.

Este projeto fornece uma solução básica para alerta de incêndio, mas pode ser expandido e personalizado conforme necessário. Certifique-se de tomar precauções adequadas ao lidar com dispositivos elétricos e ao posicionar o sensor de fumaça em um local estratégico para detecção eficaz.
