void test_func(int a = 1, int b = 2)
{
    Serial.print("a: ");
    Serial.println(a);
    Serial.print("b: ");
    Serial.println(b);
}

void setup()
{
    // Open serial communications and wait for port to open:
    Serial.begin(115200);
    while (!Serial)
    {
        ; // wait for serial port to connect. Needed for native USB port only
    }

    test_func();
    test_func(3,4);
    test_func(3);
}

void loop(void)
{
}
