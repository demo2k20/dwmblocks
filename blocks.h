//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"",        "song",         5,                  13},
//	{"",        "keyboard",     -1,                 12},
//	{"",        "disk",         300,                11},
//	{"",        "temperature",  60,                 10},
//	{"",        "cpu",          2,                  9},
//	{"",        "memory",       120,                8},
//	{"",        "dod",          1,                  7},
	{"",        "torrents",     300,                6},
	{"",        "internet",     120,                5},
	{"",        "brightness",   -1,                 4},
	{"",        "volume",       -1,                 3},
	{"",        "battery2",     120,                2},
	{"",        "datetime",     60,                 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
