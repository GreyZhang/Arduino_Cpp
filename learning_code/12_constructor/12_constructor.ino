struct Time
{
    int hour, minute;
    double second;

    void Time::print();
    Time::Time(int h, int m, double s);
    Time::Time();
};

// Time::Time()
// {
//     hour = 0;
//     minute = 0;
//     second = 0;
// }

Time::Time()
{
    hour = 6;
    minute = 6;
    second = 6;
}

Time::Time(int h, int m, double s)
{
    hour = h;
    minute = m;
    second = s;
}

void Time::print()
{
    Serial.print("current time is: ");
    Serial.print(hour);
    Serial.print(":");
    Serial.print(minute);
    Serial.print(":");
    Serial.println(second);
}

void setup()
{
    Serial.begin(115200);
    while (!Serial)
    {
        ; // wait for serial port to connect. Needed for native USB port only
    }

    // Time a(1,2,3.0);
    // Time b(2,3,4);

    Time a;
    Time b;

    a.print();
    b.print();
}

void loop()
{
}

