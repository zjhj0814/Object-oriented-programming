#include "Practice1.h"

int Server::lastOSUpdateDay = 0;
//static 변수 클래스 외부에서 정의 필수!!!!!

Server::Server(string name, int serial, int version, int lastday)
	:modelName{name}, serialNumber{serial}, OSVersion{version}, lastMaintanenceDay{lastday}
{

}

void Server::updateMaintanenceDay(int day)
{
	lastMaintanenceDay = day;
}

int Server::getOSUpdateDay()
{
	return lastOSUpdateDay;
}

void Server::updateOSUpdateDay(int lastUp) 
//선언에 static 키워드 명시-> 정의부 static 키워드 생략하기
{
	lastOSUpdateDay = lastUp;
}