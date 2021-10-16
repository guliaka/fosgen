#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "15";
	static const char MONTH[] = "10";
	static const char YEAR[] = "2021";
	static const char UBUNTU_VERSION_STYLE[] =  "21.10";
	
	//Software Status
	static const char STATUS[] =  "Alpha";
	static const char STATUS_SHORT[] =  "a";
	
	//Standard Version Type
	static const long MAJOR  = 0;
	static const long MINOR  = 1;
	static const long BUILD  = 48;
	static const long REVISION  = 285;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 52;
	#define RC_FILEVERSION 0,1,48,285
	#define RC_FILEVERSION_STRING "0, 1, 48, 285\0"
	static const char FULLVERSION_STRING [] = "0.1.48.285";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 48;
	

}
#endif //VERSION_H
