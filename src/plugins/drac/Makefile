DOVDIR:=../../..
LIBS:=-ldrac

local_CFLAGS=-Wall -W -shared -fPIC -DHAVE_CONFIG_H
INC=-I$(DOVDIR) \
	-I$(DOVDIR)/src/lib \
	-I$(DOVDIR)/src/lib-index \
	-I$(DOVDIR)/src/lib-mail \
	-I$(DOVDIR)/src/lib-storage \
	-I$(DOVDIR)/src/lib-storage/index \
	-I$(DOVDIR)/src/lib-storage/index/maildir \
	-I../../lib

all: drac_plugin.so

drac_plugin.so: drac-plugin.c
	$(CC) $(CFLAGS) $(local_CFLAGS) $(INC) $(LDFLAGS) $< -o $@ $(LIBS)

clean:
	@rm -f *.so *.o
