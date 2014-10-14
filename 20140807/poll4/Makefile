.PHONY:clean
CC=g++
CFLAGS=-Wall -g
BIN=server
OBJS=Socket.o Rio.o TcpConnection.o PollPoller.o InetAddress.o TcpServer.o Thread.o Condition.o ThreadPool.o EchoServer.o Exception.o main.o
STARD=-std=c++0x
LINKS=-lpthread
$(BIN):$(OBJS)
	$(CC) $(CFLAGS) $^ -o $@ $(LINKS)
%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(STARD)
clean:
	rm -f *.o $(BIN)
