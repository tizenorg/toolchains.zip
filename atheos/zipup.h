/*
  Copyright (c) 1990-2005 Info-ZIP.  All rights reserved.

  See the accompanying file LICENSE, version 2005-Feb-10 or later
  (the contents of which are also included in zip.h) for terms of use.
  If, for some reason, all these files are missing, the Info-ZIP license
  also may be found at:  ftp://ftp.info-zip.org/pub/infozip/license.html
*/
#ifndef _ZIPUP_H_
#define _ZIPUP_H_

#ifndef O_RDONLY
#  include <sys/fcntl.h>
#endif
#define fhow O_RDONLY
#define fbad (-1)
typedef int ftype;
#define zopen(n,p) open(n,p)
#define zread(f,b,n) read(f,b,n)
#define zclose(f) close(f)
#define zerr(f) (k == (extent)(-1L))
#define zstdin 0

#endif /* _ZIPUP_H_ */
