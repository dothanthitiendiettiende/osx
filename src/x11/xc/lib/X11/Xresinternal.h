/* $XFree86: xc/lib/X11/Xresinternal.h,v 1.1 2003/04/13 19:22:19 dawes Exp $ */

#ifndef _XRESINTERNAL_H_
#define _XRESINTERNAL_H_

/* type defines */
typedef unsigned long Signature;

/* prototypes */
extern XrmQuark _XrmInternalStringToQuark(
    register _Xconst char *name, register int len, register Signature sig,
    Bool permstring);

#endif /* _XRESOURCEINTERNAL_H_ */
/* DON'T ADD STUFF AFTER THIS #endif */
