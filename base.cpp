#include "base.hpp"
#include <iostream>
using namespace std;
void CBase::setTemperatureSensor(CTemperatureSensor *pointer)
{
	pT = pointer;
}
void CBase::setHumiditySensor(CHumiditySensor *pointer)
{
	pH = pointer;
}
void CBase::readSensors()
{
	Measurement.Temp = pT->getTemperature();
	Measurement.Hum = pH->getHumidity();
}
void CBase::displayMeasurements()
{
	cout << "Temperature: " << Measurement.Temp << endl;
	cout << "Humidity:    " << Measurement.Hum << endl;
}
