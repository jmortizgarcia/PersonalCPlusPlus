#include <iostream>

class Log
{

public:
	enum Level
	{
		LEVELERROR = 0, 
		LEVELWARNING, 
		LEVELINFO
	};
	
private:
	Level m_LogLevel = LEVELINFO;

public:
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LEVELINFO)
			std::cout << "[INFO]: " << message << std::endl;
	}
	void Warn(const char* message)
	{
		if (m_LogLevel >= LEVELWARNING)
			std::cout << "[WARNING]: " << message << std::endl;
	}
	void Error(const char* message)
	{
		if (m_LogLevel >= LEVELERROR)
			std::cout << "[ERROR]: " << message << std::endl;
	}
};
