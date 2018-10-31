#ifndef _sensors__hpp__
#define _sensors__hpp__
class CTemperatureSensor
{
public:
	CTemperatureSensor(int ctMin = -100, int ctMax = 100);
	float getTemperature();
private:
	void makeMeasurement();
	float Temperature;
	int tMin;
	int tMax;
};
class CHumiditySensor
{
public:
	CHumiditySensor(int chMin = 0, int chMax = 100);
	float getHumidity();
private:
	void makeMeasurement();
	float Humidity;
	int hMin;
	int hMax;
};
#endif
