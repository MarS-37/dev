#include <iostream>

class  Log
{
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;

public:
	void SetLevel(int level)
	{
		m_LogLevel = level;
	}
	void Error(const char* message)
	{
		if (m_LogLevel >= LogLevelError) {
			std::cout << "[ERROR]: " << message << std::endl;
		}
	}
	void Warning(const char* message)
	{
		if (m_LogLevel >= LogLevelWarning) {
			std::cout << "[WARNING]: " << message << std::endl;
		}
	}
	void Info(const char* message)
	{
		if (m_LogLevel >= LogLevelInfo) {
			std::cout << "[INFO]: " << message << std::endl;
		}
	}

private:
	int m_LogLevel = LogLevelInfo;
};

int main()
{
	Log log;
	log.SetLevel(log.LogLevelInfo);
	log.Error("Error messages");
	log.Warning("Warning messages");
	log.Info("Info messages");
}