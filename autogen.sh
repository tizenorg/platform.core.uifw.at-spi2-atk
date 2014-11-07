#!/bin/sh
# Run this to generate all the initial makefiles, etc.

test -n "$srcdir" || srcdir=`dirname "$0"`
test -n "$srcdir" || srcdir=.

olddir=`pwd`
cd "$srcdir"

if type -t autoreconf > /dev/null 2>&1; then
   autoreconf --force --install --verbose || exit $?
   cd "$olddir"
   test -n "$NOCONFIGURE" || "$srcdir/configure" "$@"
else
   echo "*** No autoreconf found, please install it ***. Aborting.";
   exit 1;
fi

