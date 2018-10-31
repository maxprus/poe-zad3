#include "base.hpp"
#include <cstdlib>

using namespace std;
CTemperatureSensor::CTemperatureSensor(int ctMin, int ctMax):
tMin(ctMin),
tMax(ctMax)
{
}

void CTemperatureSensor::makeMeasurement()
{
	Temperature = (rand() % ((tMax - tMin)*1000))/1000.0 + tMin;
}
float CTemperatureSensor::getTemperature()
{
	makeMeasurement();
	return Temperature;
}

CHumiditySensor::CHumiditySensor(int chMin, int chMax):
hMin(chMin),
hMax(chMax)
{
}

void CHumiditySensor::makeMeasurement()
{
	Humidity = (rand() % ((hMax - hMin)*1000))/1000.0 + hMin;
}
float CHumiditySensor::getHumidity()
{
	makeMeasurement();
	return Humidity;
}
