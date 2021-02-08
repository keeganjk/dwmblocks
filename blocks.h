//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		                /*Update Interval*/	/*Update Signal*/
    {"",        "localIP",                      600,                601},
    //{"",        "volume",                       0,                  10},
    //{"",        "battery",                      300,                302},
    {"",       "checkupdates+aur | wc -l",     600,                600},
    {"",       "cpuPercentage",                300,                301},
	{"",       "memoryPercentage",	            300,	            300},
	{"",        "date '+%Y.%m.%d %H:%M'",   	60,	            	60},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
