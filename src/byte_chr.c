#include "byte.h"

unsigned int byte_rchr(s,n,c)
char *s;
register unsigned int n;
int c;
{
	register char ch;
	register char *t;
	ch = c;
	t = s + n;
	for (;;) {
		if (!n) break; if (*t == ch) break; --t; --n;
		if (!n) break; if (*t == ch) break; --t; --n;
		if (!n) break; if (*t == ch) break; --t; --n;
		if (!n) break; if (*t == ch) break; --t; --n;
	}
	return s - t;
}

unsigned int byte_chr(s,n,c)
char *s;
register unsigned int n;
int c;
{
  register char ch;
  register char *t;

  ch = c;
  t = s;
  for (;;) {
    if (!n) break; if (*t == ch) break; ++t; --n;
    if (!n) break; if (*t == ch) break; ++t; --n;
    if (!n) break; if (*t == ch) break; ++t; --n;
    if (!n) break; if (*t == ch) break; ++t; --n;
  }
  return t - s;
}
