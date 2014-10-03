/* ISVALID.C
 *
 * Autor:    Kai Uwe Rommel
 * Datum:    Thu 15-Nov-1990
 *
 * Compiler: MS C ab 6.00
 * System:   OS/2 ab 1.2
 */

#define LABEL    "isvalid.c"
#define VERSION  "1.0"


#define INCL_NOPM
#define INCL_DOSERRORS
#include <os2.h>


int IsFileNameValid(char *name)
{
  HFILE hf;
  USHORT usAction;

  switch( DosOpen(name, &hf, &usAction, 0L, 0, FILE_OPEN,
                  OPEN_ACCESS_READONLY | OPEN_SHARE_DENYNONE, 0L) )
  {
  case ERROR_INVALID_NAME:
  case ERROR_FILENAME_EXCED_RANGE:
    return FALSE;
  case NO_ERROR:
    DosClose(hf);
  default:
    return TRUE;
  }
}



/* Ende ISVALID.C */
