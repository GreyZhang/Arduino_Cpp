// vector can't be found by compiler
// #include <vector>

void setup()
{
    Serial.begin(115200);
    while (!Serial)
    {
        ; // wait for serial port to connect. Needed for native USB port only
    }

    // vector<int> a;
    // vector<double> b;
}

void loop()
{
}

