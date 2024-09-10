#include "Practice2.h"

int Server::lastOSUpdateDay = 0;
//static ���� Ŭ���� �ܺο��� ���� �ʼ�!!!!!

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

void Server::updateOSUpdateDay(int lastUp) //define������ static �ĺ��� ��� ��?
{
	lastOSUpdateDay = lastUp;
}