#include <iostream>

using namespace std;

class Timer{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Timer(int hours, int minutes, int seconds){
        this->hours=hours;
        this->minutes=minutes;
        this->seconds=seconds;
    }
    void getTime(){
        int rMinutes=(this->seconds)/60;
        this->minutes= (this->minutes)+rMinutes;
        this->seconds=(this->seconds)%60;
        int rHours=(this->minutes)/60;
        this->hours= (this->hours)+rHours;
        this->minutes=this->minutes%60;
        this->hours=this->hours%24;
        cout<<this->hours<<":"<<this->minutes<<":"<<this->seconds;

    }
};

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    Timer t(a,b,c);
    t.getTime();
}