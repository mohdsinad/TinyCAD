#pragma once
class CUpdateCheck
{
private:

	// When was the last time this update information was generated?
	CString lastUpdateDate;

	// What is the latest version of TinyCAD?
	CString latestVersion;

	// Is there a special message for the user?
	CString userMessage;


	static void bgUpdateCheck(void*);
public:
	void checkForUpdates();
};

