#include<iostream> 
#include<time.h>
using namespace std;
class Date{
	private:
		int year,month,day;
	public:
	Date()
		{
			time_t ltime=time(NULL);
			tm* today=localtime(&ltime);
			year=today->tm_year+1900;
			month=today->tm_mon+1;
			day=today->tm_mday;
		}
	void setDate(int a,int b,int c){
		year=a;
		month=b;
		day=c;
	}
	
	~setDate(){
	}
    void print{
	cout<<"year:"<<year<<endl<<"month:"<<month<<endl<<"day:"<<day<<endl;}
};
class Datetime{
	private:
		Date d;
		int h,m,s;
	public:
	DateTime()
		{
			time_t ltime=time(NULL);
			tm* today=localtime(&ltime);
			h=today->tm_hour;
			m=today->tm_min;
			s=today->tm_sec;
			cout<<"DC:\n";
			this->show();
		}
	setDatetime(int year,int month,int day,int h,int m,int s){
		d.setDate(year,month,day);
		this->h=h;
		this->m=m;
		this->s=s;
	}
	
	void show{
		d.print;
		cout<<"hour:"<<h<<endl<<"month:"<<m<<endl<<"day:"<<d;
	}
	~setDatetime{}	
};
int main(){
	Datetime time1;
	Datetime time2;
	time2.setDatetime(2020,9,4,11,51,32);
	time1.show();
	time2.show();
	retuen 0;
	
	
}
