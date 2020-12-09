
void setup()
{
    Serial.begin(115200);
    while (!Serial)
    {
        ; // wait for serial port to connect. Needed for native USB port only
    }

    int a = 123;
    int b = 234;

    Serial.println("display values of a and b:");
    Serial.print("a = ");
    Serial.println(a);
    Serial.print("b = ");
    Serial.println(b);

    Serial.println("test for function 0:");
    Serial.println(test_func0(a, b));
    Serial.println("display values of a and b:");
    Serial.print("a = ");
    Serial.println(a);
    Serial.print("b = ");
    Serial.println(b);

    Serial.println("test for function 1:");
    Serial.println(test_func1(a, b));
    Serial.println("display values of a and b:");
    Serial.print("a = ");
    Serial.println(a);
    Serial.print("b = ");
    Serial.println(b);

    int addr_a = &a;
    int addr_b = &b;

    Serial.print("addr_a = ");
    Serial.println(addr_a);
    Serial.print("addr_b = ");
    Serial.println(addr_b);

    addr_a++;
    addr_b++;

    Serial.print("addr_a = ");
    Serial.println(addr_a);
    Serial.print("addr_b = ");
    Serial.println(addr_b);
    Serial.println("display values of a and b:");
    Serial.print("a = ");
    Serial.println(a);
    Serial.print("b = ");
    Serial.println(b);
    // *addr_a++;
    // *addr_b++;
    // Serial.println("display values of a and b after pointer process:");
    // Serial.print("a = ");
    // Serial.println(a);
    // Serial.print("b = ");
    // Serial.println(b);

    Serial.println("******* start test for reference of variables *******:");

    int &ref_a = a;
    int &ref_b = b;
    ref_a += 2;
    ref_b += 3;

    Serial.print("ref_a = ");
    Serial.println(ref_a);
    Serial.print("ref_b = ");
    Serial.println(ref_b);
    Serial.println("display values of a and b:");
    Serial.print("a = ");
    Serial.println(a);
    Serial.print("b = ");
    Serial.println(b);
}

void loop()
{
}

int test_func0(int a, int b)
{
    int c = 0;

    c = a + b;
    a++;
    b++;

    Serial.print("a = ");
    Serial.println(a);

    Serial.print("b = ");
    Serial.println(b);

    return c;
}

int test_func1(int &a, int &b)
{
    int c = 0;

    c = a + b;
    a++;
    b++;

    Serial.print("a = ");
    Serial.println(a);

    Serial.print("b = ");
    Serial.println(b);

    return c;
}
