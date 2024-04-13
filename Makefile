 APP_NAME=test
 BUILD_DIR= ./bin
 C_FILES= ./src/*.cpp

 APP_LINKERS:= -L/System/Library/Frameworks -framework GLUT -framework OpenGL

 build:
	gcc -o $(BUILD_DIR)/$(APP_NAME) $(C_FILES) $(APP_LINKERS)
	./bin/${APP_NAME}