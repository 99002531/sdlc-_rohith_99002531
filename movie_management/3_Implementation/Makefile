SRC =unity/unity.c\
src/function.c\
main.c

TEST_SRC = src/function.c\
test/test_function.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = FUNCTION.out
# Output directory
BUILD = build
$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)
all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)
run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lcunit
	./$(TEST_OUTPUT)

clean:
	rm -rf $(PROJECT_NAME) documentation/html
$(BUILD):
	mkdir build
