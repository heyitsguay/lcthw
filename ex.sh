mkdir $1
cd $1
echo -e "CFLAGS=-Wall -g\n\nall: $1\n\nclean:\n\trm -f $1\n\trm -f *~" >> Makefile
echo "" >> $1.c
