void setup()
{
    // Open serial communications and wait for port to open:
    Serial.begin(115200);
    while (!Serial)
    {
        ; // wait for serial port to connect. Needed for native USB port only
    }

    int a;
    int b;
    int c;
    int d;

    for(int i = 0; i < 3; i ++)
    {
        a = b = c = d = i;

        Serial.print("a = ");Serial.println(a);
        Serial.print("b = ");Serial.println(b);
        Serial.print("c = ");Serial.println(c);
        Serial.print("d = ");Serial.println(d);
    }
}

void loop(void)
{
}
