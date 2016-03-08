// Matt Wells, copyright Jun 2000

// . class to parse a standard MIME file

#ifndef GB_MIME_H
#define GB_MIME_H

#include <time.h>   // time_t mktime()
#include "Url.h"

class Mime {

 public:

	// just sets m_mime/m_mimeLen
	void set ( char *mime , int32_t mimeLen );

	// . returns a ptr to next line
	// . fills in your "field/value" pair of this line
	// . skips empty and comment lines automatically
	char *getLine ( char   *line  ,
			char  **field , int32_t *fieldLen ,
			char  **value , int32_t *valueLen ) ;

	// use this to get the value of a unique field
	char *getValue ( char *field , int32_t *valueLen );

 private:

	char *m_mime;
	int32_t  m_mimeLen;
	char *m_mimeEnd;
};

#endif // GB_MIME_H
