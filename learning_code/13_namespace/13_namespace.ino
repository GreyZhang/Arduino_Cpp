namespace namespace_a
{
    int a = 1;
    double b = 2;

    void display()
    {
        Serial.println("now is in namespace a");
        Serial.print(a);
        Serial.print(", ");
        Serial.println(b);
    }
}

namespace namespace_b
{
    int a = 3;
    double b = 4;

    void display()
    {
        Serial.println("now is in namespace b");
        Serial.print(a);
        Serial.print(", ");
        Serial.println(b);
    }
}

void setup()
{
    // put your setup code here, to run once:
    Serial.begin(115200);
    while(!Serial)
    {
        // wait for serial function ok
    }
    
    namespace_a::display();
    namespace_b::display();
}

void loop()
{
    // put your main code here, to run repeatedly:

}
