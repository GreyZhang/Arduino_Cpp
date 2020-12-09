// class Date
// {
// private:
//     int year = 2020;
//     int month = 1;
//     int day = 1;
// public:
//     void init(int y, int m, int d);
//     void date_display()
//     {
//         Serial.print("year: ");
//         Serial.println(year);
//         Serial.print("month: ");
//         Serial.println(month);
//         Serial.print("day: ");
//         Serial.println(day);
//     }
// };
class Date
{
private:
    int year;
    int month;
    int day;
public:
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
    Date():year(2020), month(1), day(2){}
};

void setup()
{
    // Open serial communications and wait for port to open:
    Serial.begin(115200);
    while (!Serial)
    {
        ; // wait for serial port to connect. Needed for native USB port only
    }

    Date date;
    date.date_display();
}

void loop(void)
{
}

