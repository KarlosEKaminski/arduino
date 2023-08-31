# 16. CONTROLANDO UM MICRO SERVO
## Objetivos:
- Perceber a equivalência de um diagrama de blocos e um código.
- Familiarizar-se com o ambiente de programação do Arduino.
- Aprender a utilizar um micro servo(servo motor)
- Ligar e desligar componentes.
- Construir circuitos limpos e organizados.

## Enunciado:
Neste experimento iremos controlar um micro servo na porta PWM 11. Um micro servo é um motor que 
possibilita o controle de sua posição utilizado em aeromodelismo ou em projetos mecatrônicos. O servo 
mais comum é o Micro Servo TowerPro 9g SG90. Iremos mover o servo de 0 a 90 graus aguardando 15 
milésimos de segundo, depois de 90 a 180 graus aguardando de 30 milésimos, aguarda um segundo(1000 
milésimos), então volta movendo de 180 a 90 graus aguardando 30 milésimos e por fim de 90 a 0 graus 
aguardando 15 milésimos de segundo.

## Atenção: 
Não execute o experimento sem realizar a simulação do circuito no Tinkercad. Somente depois 
monte o circuito e verifique todas as conexões antes de energizar o circuito! Este procedimento é 
extremamente importante para se evitar curto-circuito e possíveis danos aos componentes eletrônicos.

## Lista de componentes:
1 – Arduíno UNO R3<br>
1 – Um cabo de conexão USB<br>
1 – Placa de prototipação (Protoboard)<br>
1 – Micro Servo TowerPro 9g SG90<br>
3 – Jumpers (macho-macho)

## Esquema circuito:
![](/imagens-tinkercad/ex16.png)