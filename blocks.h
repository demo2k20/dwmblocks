//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",        "nightlight",   -1,                 10},
	{"",        "song",         5,                  11},
	{"",        "internet",     60,                 12},
	{"",        "brightness",   -1,                 1},
	{"",        "volume",       -1,                 2},
	{"",        "battery",      60,                 3},
	{"",        "datetime",     60,                 13},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
