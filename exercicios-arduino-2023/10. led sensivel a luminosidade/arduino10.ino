// Luminosidade do fotoresistor
int luminosidade = 0;

void setup()
{
    // Porta 0(Analógica) em modo de entrada (leitura) para o
    fotoresistor
        pinMode(A0, INPUT);
    // Porta 13 (LED_BUILTIN) em modo de saída (escrita)
    pinMode(LED_BUILTIN, OUTPUT); // LED VERMELHO
}

void loop()
{
    // Leitura do fotoresistor
    luminosidade = analogRead(A0);
    // Avalia a variável
    if (luminosidade < 750)
    {
        digitalWrite(LED_BUILTIN, HIGH); // Liga o LED VERMELHO
    }
    else
    {
        digitalWrite(LED_BUILTIN, LOW); // Desliga o LED VERMELHO
    }
    // Atrase um pouco para melhorar o desempenho da simulação
    delay(10);
}