void setup()
{
    Serial.begin(115200);
    while (!Serial)
    {
        ; // wait for serial port to connect. Needed for native USB port only
    }

    double log_value = log(16.9);
    double sin_value1 = sin(4.5);
    double sin_value2 = sin(3.14159 / 6.0);
    double tan_val = tan(3.14159 / 4);

    Serial.print("value of log_value: "); Serial.println(log_value);
    Serial.print("value of sin_value1: "); Serial.println(sin_value1);
    Serial.print("value of sin_value2: "); Serial.println(sin_value2);
    Serial.print("value of tan_val: "); Serial.println(tan_val);
}

void loop()
{
}
