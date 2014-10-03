/* $Header: version.c,v 2.0 86/09/17 15:40:11 lwall Exp $
 *
 * $Log:	version.c,v $
 * Revision 2.0  86/09/17  15:40:11  lwall
 * Baseline for netwide release.
 *
 */

#include "EXTERN.h"
#include "common.h"
#include "util.h"
#include "INTERN.h"
#include "patchlev.h"
#include "version.h"

/* Print out the version number and die. */

void
version()
{
    extern char rcsid[];

#ifdef lint
    rcsid[0] = rcsid[0];
#else
    fatal3("\n%s\nPatch level: %d, with unidiff support, for DOS and OS/2\n", rcsid, PATCHLEVEL);
#endif
}
