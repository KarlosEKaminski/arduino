// Distância do sensor
int distancia = 0;

// Função de leitura do sensor
long readUltrasonicDistance(int triggerPin, int echoPin)
{
    // Porta triggerPin em modo de saída (escrita)
    pinMode(triggerPin, OUTPUT);
    digitalWrite(triggerPin, LOW);
    delayMicroseconds(2);
    digitalWrite(triggerPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(triggerPin, LOW);
    // Porta echoPin em modo de entrada (leitura)
    pinMode(echoPin, INPUT);
    return pulseIn(echoPin, HIGH);
}

void setup()
{
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
}

void loop()
{
    // Leitura e cálculo da distância do objeto
    distancia = 0.01723 * readUltrasonicDistance(4, 5);
    if (distancia < 100)
    {
        digitalWrite(12, HIGH);
        digitalWrite(13, LOW);
    }
    else
    {
        digitalWrite(12, LOW);
        66. digitalWrite(13, HIGH);
    }
    // Atrase um pouco para melhorar o desempenho da simulação
    delay(10);
}