/*
 *--------------------------------------------------------
 *	PatternObject.c
 *	Routines related with the object and material
 *	files to write a .obj and .mtl format file
 *--------------------------------------------------------
 */

#ifndef _PATTERN_OBJECT_H_
#define _PATTERN_OBJECT_H_

#include "../common.h"

/*
 *------------------------------------------------------------
 *  Global definitions
 *------------------------------------------------------------
 */

extern int mtl_flag;
extern int opt_flag;

char mtl_file[256];     /* mtl file name */
long int vsize, total_vertices;


extern long int *exchange;
extern long int *sort;
extern TVertex *vertex;
extern TVertex  *vertexNew;



/*-----PROTOTYPES----*/
void savePatternFile( const char *filename );
void saveMtl( const char *mtl_file );

int CmpVertex(const void *elem0, const void *elem1);
void optimizer( FILE *fp );
void saveVertices( FILE *fpObj );
void saveFaces( FILE *fpObj );


#endif //_PATTERN_OBJECT_H_

