.PHONY:clean
CC=g++
CFLAGS=-Wall -g
BIN=libecho.a
OBJS=Socket.o Rio.o TcpConnection.o PollPoller.o InetAddress.o TcpServer.o Thread.o Condition.o ThreadPool.o Exception.o Timer.o TimerThread.o
STARD=-std=c++0x -rdynamic
$(BIN):$(OBJS)
	ar -crv $@ -o $^
	chmod 0777 $@
	rm -f *.o
	rm -rf echo
	mkdir echo
	cp *.h echo/
%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(STARD)
clean:
	rm -rf *.o $(BIN) echo
