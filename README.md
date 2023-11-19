Descrição do funcionamento e uso para quem quiser reproduzir

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

Descrição do Hardware:

1.Plataforma de Desenvolvimento:

Arduino: Utilizou-se uma placa Arduino (qualquer modelo compatível) como a plataforma principal para o desenvolvimento do projeto.
Comprimento: 68.6 mm
Largura: 53.4 mm

2.Sensor de Fumaça (MQ-2):

O sensor de fumaça MQ-2 é o componente chave para detectar a presença de fumaça no ambiente. Ele possui saídas analógicas e digitais que indicam a concentração de fumaça.
Comprimento: 32 mm (aproximadamente)
Diâmetro: 20 mm (aproximadamente)

3.Buzzer:

Um buzzer foi utilizado para criar um alerta sonoro quando o sensor de fumaça detecta uma concentração significativa. Ele é conectado a um pino digital do Arduino.
12 mm de diâmetro e 9 mm de altura.

4.LED:

Um LED foi incorporado como um indicador visual para acompanhar o alerta sonoro. Ele é conectado a um pino digital do Arduino.
5 mm de diâmetro e 2 mm de altura. 

5.Protoboard e Fios Jumper:

Uma protoboard foi usada para facilitar as conexões entre os componentes. Fios jumper foram utilizados para conectar os diversos elementos de forma organizada.
8,3 x 5,5 x 1,0 cm

6.Fonte de Alimentação:

A alimentação do Arduino pode ser fornecida por meio de uma fonte de alimentação externa ou por meio da conexão USB.

Interfaces, protocolos e módulos de comunicação.

Sensor de Fumaça (MQ-2):

O sensor MQ-2 normalmente fornece dois tipos de saídas: analógica e digital. A saída analógica é proporcional à concentração de gás, enquanto a saída digital muda de estado quando a concentração ultrapassa um certo limite. No código, a leitura do sensor é realizada pelo pino analógico A0 e digital D2 do Arduino.

Buzzer:

O buzzer é um atuador de alarme sonoro que é acionado quando o sensor de fumaça detecta fumaça. No código, o buzzer é controlado pelo pino digital D4 do Arduino.

LED:

O LED é um indicador visual que acompanha o alerta sonoro. Ele é acionado quando o sensor de fumaça detecta uma concentração significativa. No código, o LED é controlado pelo pino digital D5 do Arduino.

Comunicação entre Componentes:

A comunicação entre os componentes neste projeto é principalmente unidirecional. O Arduino lê os valores do sensor de fumaça e, com base nesses valores, ativa o buzzer e o LED, e possivelmente controla o relé para desligar equipamentos elétricos.

Protocolos e Interfaces:

Não há protocolos de comunicação complexos ou interfaces sofisticadas envolvidos neste projeto. A comunicação é principalmente feita por meio de pinos digitais e analógicos padrão do Arduino.


