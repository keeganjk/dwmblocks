//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		                /*Update Interval*/	/*Update Signal*/
    {"",        "locip",                        600,                601},
    //{"",        "volume",                       0,                  10},
    //{"",        "battery",                      300,                302},
    {"UPD:",       "checkupdates+aur | wc -l",     600,                20},
    {"CPU:",       "cpu-percentage",               300,                301},
	{"MEM:",       "mem-percentage",	            300,	            300},
	{"",        "date '+[%w] %Y.%m.%d %H:%M'",  60,	            	60},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
