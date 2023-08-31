int valorLido = 0;

void setup()
{
    // Porta Analógica 0 em modo de entrada(leitura).
    pinMode(A0, INPUT);
    Serial.begin(9600);
}

void loop()
{
    // Leitura da porta analógica A0
    valorLido = analogRead(A0);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(valorLido);
    digitalWrite(LED_BUILTIN, LOW);
    delay(valorLido);
}