#Makefile for Msp430Service

TARGET=swpInPlace
SOURCE = swpInPlace.c \

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
clean:
	@-rm -f $(TARGET) $(OBJ) $(DEPENDS)
