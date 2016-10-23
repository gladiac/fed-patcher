RM = rm -f

CFLAGS = -ffunction-sections -O3
LDFLAGS = -Wl,--gc-sections -static

all:libmincrypt.a mkbootimg unpackbootimg

static:libmincrypt.a mkbootimg-static unpackbootimg-static

libmincrypt.a:
	make -C libmincrypt

mkbootimg:mkbootimg.o
	$(CROSS_COMPILE)$(CC) -o $@ $^ -L. -lmincrypt $(LDFLAGS) -s

mkbootimg-static:mkbootimg.o
	$(CROSS_COMPILE)$(CC) -o $@ $^ -L. -lmincrypt $(LDFLAGS) -static -s

mkbootimg.o:mkbootimg.c
	$(CROSS_COMPILE)$(CC) -o $@ $(CFLAGS) -c $< -I. -Werror

unpackbootimg:unpackbootimg.o
	$(CROSS_COMPILE)$(CC) -o $@ $^ $(LDFLAGS) -s

unpackbootimg-static:unpackbootimg.o
	$(CROSS_COMPILE)$(CC) -o $@ $^ $(LDFLAGS) -static -s

unpackbootimg.o:unpackbootimg.c
	$(CROSS_COMPILE)$(CC) -o $@ $(CFLAGS) -c $< -Werror

clean:
	$(RM) mkbootimg mkbootimg-static mkbootimg.o unpackbootimg unpackbootimg-static unpackbootimg.o
	$(RM) libmincrypt.a Makefile.~
	make -C libmincrypt clean
