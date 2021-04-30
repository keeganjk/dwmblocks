//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		                /*Update Interval*/	/*Update Signal*/
    {"",          "locip",                          600,                11},
    //{"",        "volume",                       0,                  16},
    //{"",        "battery",                      300,                17},
    {"UPD:",       "checkupdates+aur | wc -l",      600,                12},
    {"CPU:",       "cpu-percentage",                300,                13},
	{"MEM:",       "mem-percentage",                300,	            14},
	{"",           "date '+[%w] %Y-%m-%d %H:%M'",   60,	            	15},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
