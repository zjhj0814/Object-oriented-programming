#include "Practice1.h"

int Server::lastOSUpdateDay = 0;
//static ���� Ŭ���� �ܺο��� ���� �ʼ�!!!!!

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
//���� static Ű���� ���-> ���Ǻ� static Ű���� �����ϱ�
{
	lastOSUpdateDay = lastUp;
}