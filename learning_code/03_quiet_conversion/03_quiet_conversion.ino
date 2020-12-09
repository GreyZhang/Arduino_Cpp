void setup()
{
    Serial.begin(115200);
    while (!Serial)
    {
        ; // wait for serial port to connect. Needed for native USB port only
    }

    double num_double1 = 1 / 3;
    double num_double2 = 1.0 / 3;
    double num_double3 = 1.0 / 3.0;

    int num_int1 = 1.3;
    // 这个用法不像C语言，倒是优点python的意思
    int num_int2 = int(1.3);
    int num_int3 = 0.9999;

    Serial.print("num_double1: ");Serial.println(num_double1);
    Serial.print("num_double2: ");Serial.println(num_double2);
    Serial.print("num_double3: ");Serial.println(num_double3);

    Serial.print("num_int1: ");Serial.println(num_int1);
    Serial.print("num_int2: ");Serial.println(num_int2);
    Serial.print("num_int3: ");Serial.println(num_int3);

}

void loop()
{
}
