#pragma once
class RandomDay
{
public:
	RandomDay(void);
	~RandomDay(void);
	enum Language
	{
		english,
		spanish
	};
	const wchar_t*Get();
	Language language;
	int contador=0;
private:
	const wchar_t*GetDayName(int day);
	const wchar_t*GetNombreDia(int day);
	int currentDay;
	
};

