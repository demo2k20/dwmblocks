//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",        "song",         5,                  6},
	{"",        "internet",     60,                 5},
	{"",        "brightness",   -1,                 4},
	{"",        "volume",       -1,                 3},
	{"",        "battery",      60,                 2},
	{"",        "datetime",     60,                 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
