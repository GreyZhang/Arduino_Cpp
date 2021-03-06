// struct Date
// {
//     int year;
//     int month;
//     int day;

//     void init(int y, int m, int d);
//     void add_year(int y);
//     void add_month(int m);
//     void add_day(int d);
// };
class Date
{
    int year;
    int month;
    int day;

public:
    void init(int y, int m, int d);
    void add_year(int y);
    void add_month(int m);
    void add_day(int d);
    void date_display();
};

void Date::init(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}

void Date::add_year(int y)
{
    year = year + y;
}

void Date::add_month(int m)
{
    month = month + m;
}

void Date::add_day(int d)
{
    day = d;
}

void Date::date_display()
{
    Serial.print("year: ");
    Serial.println(year);
    Serial.print("month: ");
    Serial.println(month);
    Serial.print("day: ");
    Serial.println(day);
}

void setup()
{
    // Open serial communications and wait for port to open:
    Serial.begin(115200);
    while (!Serial)
    {
        ; // wait for serial port to connect. Needed for native USB port only
    }

    Date date_var0;
    Date date_var1;
    date_var0.init(2020, 9, 15);
    date_var1.init(2020, 9, 16);
    date_var0.date_display();
    date_var1.date_display();
    // Serial.print("year: ");
    // Serial.println(date_var0.year);
    // Serial.print("month: ");
    // Serial.println(date_var0.month);
    // Serial.print("day: ");
    // Serial.println(date_var0.day);
    // Serial.println("test for var1");
    // Serial.print("year: ");
    // Serial.println(date_var1.year);
    // Serial.print("month: ");
    // Serial.println(date_var1.month);
    // Serial.print("day: ");
    // Serial.println(date_var1.day);
}

void loop(void)
{
}
