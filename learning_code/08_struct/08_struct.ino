
void setup()
{
    Serial.begin(115200);
    while (!Serial)
    {
        ; // wait for serial port to connect. Needed for native USB port only
    }

    struct point_s
    {
        double x, y;
    };

    point_s blank;

    blank.x = 3.4;
    blank.y = 5.6;

    double double_num = blank.x;
    int int_num = blank.x;

    Serial.print("value of double_num: ");
    Serial.println(double_num);
    Serial.print("value of int_num: ");
    Serial.println(int_num);

    blank = (point_s){3.0, 4.0};
    double_num = blank.x;
    int_num = blank.x;

    Serial.print("value of double_num: ");
    Serial.println(double_num);
    Serial.print("value of int_num: ");
    Serial.println(int_num);
}

void loop()
{
}
