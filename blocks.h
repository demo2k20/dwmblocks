//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"",        "song",         5,                  12},
//	{"",        "keyboard",     -1,                 11},
//	{"",        "disk",         300,                10},
//	{"",        "temperature",  60,                 8},
//	{"",        "cpu",          1,                  8},
//	{"",        "memory",       120,                7},
//	{"",        "dod",          1,                  6},
	{"",        "internet",     120,                5},
	{"",        "brightness",   -1,                 4},
	{"",        "volume",       -1,                 3},
	{"",        "battery2",     120,                2},
	{"",        "datetime",     60,                 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
