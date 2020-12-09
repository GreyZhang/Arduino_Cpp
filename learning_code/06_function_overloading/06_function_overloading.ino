void DemoFunc();

void setup()
{
    Serial.begin(115200);
    while (!Serial)
    {
        ; // wait for serial port to connect. Needed for native USB port only
    }
    Serial.println("calling function 1");
    DemoFunc();
    Serial.println("calling function 2");
    DemoFunc(123);
    Serial.println("calling function 3");
    DemoFunc(123, 456);
    Serial.println("calling function 4");
    Serial.print("function 4 return value is: ");
    Serial.println(DemoFunc(3.14159));
}

void loop()
{
}

void DemoFunc()
{
    // this is function 1
    Serial.println("function 1 called, no parameter.");
}


void DemoFunc(int a)
{
    // this is function 2
    Serial.print("function 2 called, parameter is: ");
    Serial.println(a);
}

void DemoFunc(int a, int b)
{
    // this is function 3
    Serial.print("function 3 called, parameters are: ");
    Serial.print(a); Serial.print(','); Serial.println(b);
}


double DemoFunc(double a)
{
    Serial.print("function 4 called, parameter is: ");
    Serial.println();

    return a;
}
