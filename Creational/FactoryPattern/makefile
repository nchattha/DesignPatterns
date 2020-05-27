CC = g++
HDR_DIRS ?= header
TARGET ?= FactoryApp.out
SRC_DIRS ?= src
ODIR ?= obj
# The CFLAGS variable sets compile flags for gcc:
#  -g          compile with debug information
#  -Wall       give verbose compiler warnings
# -Wextra      enables some extra warning flags that are not enabled by -Wall.
# -O or -O2 - turn on optimizations
# -o <name> - name of the output file
# -c - output an object file (.o)
# -I<include path> - specify an include directory
# -L<library path> - specify a lib directory
# -l<library> - link with library lib<library>.a
# $@ - The file name of the target of the rule. If the target is an archive member.
# $%	The target member name, when the target is an archive member.
# $<	The name of the first prerequisite. 
# $?	The names of all the prerequisites that are newer than the target, with spaces between them. 
# $^	The names of all the prerequisites, with spaces between them. 
# $@ is the name of the file being generated, and $< the first prerequisite
# all: library.cpp main.cpp
#	$@ evaluates to all
#	$< evaluates to library.cpp
#	$^ evaluates to library.cpp main.cpp
CFLAGS = -Wall -g -c -std=c11 -I$(HDR_DIRS)
# The LDFLAGS variable sets flags for linker
#  -lm   says to link in libm (the math library)
#LDFLAGS = -lm
#target: depenedency
# command
SRCS := $(shell find $(SRC_DIRS) -name *.cpp)
$(info "$(SRCS)")
HDRS := $(shell find $(HDR_DIRS) -name *.h)
$(info "$(HDRS)")

OBJS = $(SRCS:%.cpp=$(ODIR)/%.o)
#OBJS := $(SRCS:.cpp=.o)
#$(ODIR)/%.o: $(SRC_DIRS)/*.cpp
#	$(CC) $(CFLAGS) $< -o $@
	
	# note the -c option, which means: "compile, but don't link"
    # $< will expand to the first source file
OBJS := $(shell find $(ODIR) -name *.o)
$(info "$(OBJS)")
# $(ODIR)/%.o: %.cpp 
#	$(CC) -c -o $@ $< $(CFLAGS)

all: $(TARGET)
$(TARGET):$(OBJS)
	$(CC) -o $@ $^

# Phony means not a "real" target, it doesn't build anything
# The phony target "clean" is used to remove all compiled object files.
# 'core' is the name of the file outputted in some cases when you get a
# crash (SEGFAULT) with a "core dump"; it can contain more information about
# the crash.
.PHONY: clean
clean:
	$(RM) $(TARGET) $(OBJS)