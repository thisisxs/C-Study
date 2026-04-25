CC = gcc
CFLAGS = -I./include -Wall -g
TARGET = build/study_prog
SRCS = src/main.c

# 默认执行的操作
all:
	$(CC) $(SRCS) $(CFLAGS) -o $(TARGET)

# 清理编译结果
clean:
	rm -rf build/*
