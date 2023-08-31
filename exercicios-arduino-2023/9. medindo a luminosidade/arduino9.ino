// Luminosidade do fotoresistor
int luminosidade = 0;

void setup()
{
    // Porta 0 (Analógica) em modo de entrada(leitura) para o
    fotoresistor
        pinMode(A0, INPUT);
}

void loop()
{
    // Leitura do fotoresistor
    luminosidade = analogRead(A0);
    // Saída da variável no monitor serial
    Serial.println(luminosidade);
    // Atrase um pouco para melhorar o desempenho da simulação
    delay(10);
}