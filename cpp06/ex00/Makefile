# Name of the program.
NAME     := convert

# Sources and objects.
SRCS     := main.cpp Convert.cpp
OBJS     := $(SRCS:.cpp=.o)

# Define all the compiling flags.
CLANG      := clang++ -Wall -Werror -Wextra

# Compile and create everything.
all: $(NAME)

# Compile the program with the objects.
$(NAME): $(OBJS)
	@$(CLANG) $(OBJS) -o $@

# This won't run if the source files don't exist or are not modified.
%.o: %.cpp
	$(CLANG) -o $@ -c $<

# Rule to remove all the object files.
clean:
	@rm -f $(OBJS)
	@echo "[INFO] $(OBJS) removed!"

# Rule to remove everything that has been created by the makefile.
fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed!"

# Rule to re-make everything.
re:     fclean all

# Makes sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: all clean fclean format re