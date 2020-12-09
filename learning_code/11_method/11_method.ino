struct Time
{
    int hour, minute;
    double second;

    void Time::print();
    void Time::increment(double sec);
    double Time::convert2seconds() const;
    Time::Time(int h, int m, double s);
};

// void Time::print()
// {
//     Time time = *this;
//     Serial.print("current time is: ");
//     Serial.print(time.hour);
//     Serial.print(":");
//     Serial.print(time.minute);
//     Serial.print(":");
//     Serial.println(time.second);
// }

// void Time::print()
// {
//     Serial.print("current time is: ");
//     Serial.print(this->hour);
//     Serial.print(":");
//     Serial.print(this->minute);
//     Serial.print(":");
//     Serial.println(this->second);
// }

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

void Time::increment(double sec)
{
    second += sec;

    while(second >= 60)
    {
        second -= 60;
        minute += 1;
    }

    while(minute >= 60)
    {
        minute -= 60;
        hour += 1;
    }
}

double Time::convert2seconds() const
{
    return hour * 3600 + minute * 60 * second;
}

void setup()
{
    Serial.begin(115200);
    while (!Serial)
    {
        ; // wait for serial port to connect. Needed for native USB port only
    }

    Time time(17, 26, 23);

    time.hour = 1;
    time.minute = 2;
    time.second = 3;

    for(int i = 0; i < 10; i++)
    {
        time.increment(i * i);
        time.print();
    }
    Serial.print("second of all: ");
    Serial.println(time.convert2seconds());

    Time ttt(7,7,7);
    Serial.println(ttt.hour);
    Serial.println(ttt.minute);
    Serial.println(ttt.second);
}

void loop()
{
}

