//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"",        "music",        5,                  12},
//	{"",        "keyboard",     0,                  11},
//	{"",        "disk",         300,                10},
//	{"",        "temperature",  60,                 9},
//	{"",        "cpu",          2,                  8},
//	{"",        "memory",       120,                7},
//	{"",        "dod",          1,                  6},
	{"",        "torrents",     300,                5},
	{"",        "internet",     120,                4},
	{"",        "volume",       0,                  3},
	{"",        "battery",      120,                2},
	{"",        "datetime",     60,                 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
