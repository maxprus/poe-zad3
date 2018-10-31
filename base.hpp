#ifndef _base__hpp__
#define _base__hpp__
#include "sensors.hpp"
struct SMeasurement
{
	float Temp;
	float Hum;
};

class CBase
{
	public:
	void setTemperatureSensor(CTemperatureSensor *pointer);
	void setHumiditySensor(CHumiditySensor *pointer);
	void readSensors();
	void displayMeasurements();
	private:
	CTemperatureSensor* pT;
	CHumiditySensor* pH;
	SMeasurement Measurement;
};

#endif
