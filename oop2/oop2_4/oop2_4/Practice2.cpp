#include "Practice2.h"

int Server::lastOSUpdateDay = 0;
//static 변수 클래스 외부에서 정의 필수!!!!!

Server::Server(string name, int serial, int version, int lastday)
	:modelName{ name }, serialNumber{ serial }, OSVersion{ version }, lastMaintanenceDay{ lastday }
{

}

Server& Server::updateMaintanenceDay(int day)
{
	lastMaintanenceDay = day;
	return *this;
}

int Server::getOSUpdateDay()
{
	return lastOSUpdateDay;
}

void Server::updateSerialNumber(int serialNumber)
{
	this->serialNumber = serialNumber;
}

void Server::updateOSUpdateDay(int lastUp) //define에서는 static 식별자 사용 ㄴ?
{
	lastOSUpdateDay = lastUp;
}