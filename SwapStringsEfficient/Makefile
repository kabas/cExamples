#Makefile for Msp430Service

TARGET=swpInPlace

INCLUDE = include/
SOURCE = swpInPlace.c \
OBJ=$(join $(addsuffix ../obj/, $(dir $(SOURCE))), $(notdir $(SOURCE:.c=.o))) 

all: $(TARGET)
	@true

## Generic compilation rule
%.o : %.c
	@mkdir -p $(dir $@)
	@echo "============="
	@echo "Compiling $<"
	@gcc $(FLAGS) -c $< -o $@

## Rules for object files from c files
## Object file for each file is put in obj directory
## one level up from the actual source directory.
/obj/%.o : %.c
	@mkdir -p $(dir $@)
	@echo "============="
	@echo "Compiling $<"
	@gcc $(FLAGS) -c $< -o $@
clean:
	@-rm -f $(TARGET) $(OBJ) $(DEPENDS)
