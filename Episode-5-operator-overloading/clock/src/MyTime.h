#ifndef MYTIME
#define MYTIMEjjpkjpjjjpj

class MyTime {
    public:
        MyTime(int hr, int min, int sec) {
            if (hr < 0 || min < 0 || sec < 0) {
                throw "\n\033[31mInvalid time format!\033[0m";
            }

            hour = hr;
            minute = min;
            second = sec;
        }

        bool operator> (const MyTime &mt2) const;
        bool operator< (const MyTime &mt2) const;
        bool operator== (const MyTime &mt2) const;
        MyTime operator+ (const MyTime &mt2) const;
        MyTime operator- (const MyTime &mt2) const;
        MyTime& operator++ ();
        MyTime operator++ (int);
        MyTime& operator-- ();
        MyTime operator-- (int);
        MyTime operator+= (const int &n);
        MyTime operator-= (const int &n);
        
        int getHour();
        int getMinute();
        int getSecond();

        void setHour(int hour);
        void setMinute(int minute);
        void setSecond(int second);
        void print();
    private:
        int hour, minute, second;
};

#endif // !MYTIME