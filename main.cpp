#include <iostream>

class  Log
{
public:
	enum Level
	{
		LevelError = 0, LevelWarning, LevelInfo
	};

public:
	void SetLevel(int level)
	{
		m_LogLevel = level;
	}
	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError) {
			std::cout << "[ERROR]: " << message << std::endl;
		}			
	}
	void Warning(const char* message)
	{
		if (m_LogLevel >= LevelWarning) {
			std::cout << "[WARNING]: " << message << std::endl;
		}		
	}
	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo) {
			std::cout << "[INFO]: " << message << std::endl;
		}		
	}

private:
	int m_LogLevel = LevelInfo;
};

int main()
{
	Log log;
	log.SetLevel(log.LevelError);
	log.Error("Error messages");
	log.Warning("Warning messages");
	log.Info("Info messages");
}