void setup()
{
    Serial.begin(9600);
    while (!Serial)
    {
        ; // wait for serial port to connect. Needed for native USB port only
    }

    char c = 'a';

    for (int i = 0; i < 26; i++)
    {
        Serial.print(c);
        Serial.print(", ");
        c = c + 1;
    }

    Serial.println();

    int num = 'a';

    for (int i = 0; i < 26; i++)
    {
        Serial.print(num);
        Serial.print(", ");
        num = num + 1;
    }
}

void loop()
{
}
