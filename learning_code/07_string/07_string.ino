
void setup()
{
    Serial.begin(115200);
    while (!Serial)
    {
        ; // wait for serial port to connect. Needed for native USB port only
    }

    Serial.println("******* init value test *******");
    String str0 = "init string";
    Serial.println(str0);

    String str;

    Serial.println("******* assignment test *******");
    str = "hello world";
    Serial.println(str);
    Serial.println("******* string length test *******");
    Serial.print("length of string is: ");
    Serial.println(str.length());

    str = "hello";
    Serial.print("******* traverse: access each element of string");
    Serial.print(str);
    Serial.println("*******");
    for(int i = 0; i < str.length(); i++)
    {
        Serial.println(str[i]);
    }

    Serial.println();

    str = "world";
    Serial.println("******* string length test *******");
    Serial.print("length of string is: ");
    Serial.println(str.length());

    Serial.print("******* traverse: access each element of string");
    Serial.print(str);
    Serial.println("*******");
    for(int i = 0; i < str.length(); i++)
    {
        Serial.println(str[i]);
    }

    Serial.println("******* test for find method *******");
    // Arduino C++ do not have thisi method
    // Serial.println(str.find("rl"));

    Serial.println("******* test for join function *******");
    Serial.println("hello " + str);

    Serial.println("******* test for compare function *******");
    // Serial.println("hello" == str);
    // Serial.println("world" == str);
    // Serial.println("world" > str);
    // Serial.println("world" < str);
    str0 = "hello";
    Serial.println(str0 == str);
    str0 = "world";
    Serial.println(str0 == str);
    str0 = "hello";
    Serial.println(str0 > str);
    Serial.println(str0 < str);
}

void loop()
{
}

