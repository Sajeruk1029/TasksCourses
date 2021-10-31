CFLAGS	=	-Wall -Wextra -Wpedantic
LDFLAGS	=	-lm
CC	= gcc

SRCSDIR	=	compile/src
OBJSDIR	=	compile/objects
BUILDDIR	=	compile/build

NAMEPROG	=	AllTasks

all:	$(NAMEPROG)

$(NAMEPROG):	$(OBJSDIR)/*.o
	@echo CC $^
	@mkdir -p $(BUILDDIR)
	@$(CC) $(CFLAGS) $^ -o $(BUILDDIR)/$(NAMEPROG) $(LDFLAGS)

$(OBJSDIR)/*.o:	$(SRCSDIR)/*.c
	@echo + CC $^
	@mkdir -p $(OBJSDIR)
	@$(CC) $(CFLAGS) -c $^
	@mv *.o $(OBJSDIR)/

clean:
	rm -rf $(OBJSDIR)/	$(BUILDDIR)/
