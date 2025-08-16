
#include <iostream>
using namespace std;


class HMS;


class Seconds {
    int seconds;

public:
	
	friend class HMS;
 
    Seconds() {
        seconds = 0;
    }

 
    Seconds(int s) {
        seconds = s;
    }

    
    void setValue(int s) {
        seconds = s;
    }

    
    void displaySeconds() {
        cout << seconds << " seconds!" << endl;
    }

    
    int getValue() {
        return seconds;
    }
    
    
    void hms_to_seconds(HMS obj);
    
    

};

class HMS {
    int hour;
    int minutes;
    int seconds;

public:
	
	friend class Seconds;
  
    HMS() {
        hour = 0;
        minutes = 0;
        seconds = 0;
    }
 
    HMS(int h, int m, int s) {
        hour = h;
        minutes = m;
        seconds = s;
    }

    
    void setHMS(int h, int m, int s) {
        hour = h;
        minutes = m;
        seconds = s;
    }

    
    void displayHMS() {
        cout << hour << " h : " << minutes << " m : " << seconds << " s"<<endl;
    }


    
    void seconds_to_hms(Seconds obj) {
    	
    	int total_seconds=obj.seconds;
        hour = total_seconds / 3600;
        total_seconds %= 3600;
        minutes = total_seconds / 60;
        seconds = total_seconds % 60;
    }
    
    
    
};

void Seconds::hms_to_seconds(HMS obj) {
        seconds = obj.hour * 3600 + obj.minutes * 60 + obj.seconds;
}

int main() {
    
    int s = 3890;
	

    
    Seconds time_in_sec;
    time_in_sec.setValue(s);
    time_in_sec.displaySeconds();
    HMS time_in_hms;
    time_in_hms.seconds_to_hms(time_in_sec);
    time_in_hms.displayHMS();
    
    
    time_in_hms.setHMS(5,46,25);
    time_in_hms.displayHMS();
    time_in_sec.hms_to_seconds(time_in_hms);
    time_in_sec.displaySeconds();
    return 0;
}
