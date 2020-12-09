class Date
{
    int year;
    int month;
    int day;

public:
    Date::Date(int y, int m, int d);
    void init(int y, int m, int d);
    void date_display()
    {
        Serial.print("year: ");
        Serial.println(year);
        Serial.print("month: ");
        Serial.println(month);
        Serial.print("day: ");
        Serial.println(day);
    }
};

Date::Date(int y = 0, int m = 0, int d = 0)
{
    year = y;
    month = m;
    day = d;
}

// void Date::date_display()
// {
//     Serial.print("year: ");
//     Serial.println(year);
//     Serial.print("month: ");
//     Serial.println(month);
//     Serial.print("day: ");
//     Serial.println(day);
// }


void setup()
{
    // Open serial communications and wait for port to open:
    Serial.begin(115200);
    while (!Serial)
    {
        ; // wait for serial port to connect. Needed for native USB port only
    }

    Date date(2020, 1, 1);
    date.date_display();
}

void loop(void)
{
}

