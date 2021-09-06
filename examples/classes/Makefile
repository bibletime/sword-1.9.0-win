TARGETS= ciphercng swmgrex verseranges versevalid lastVerseInChapter verseposition simplechapter flatapilookup flatapiparsekey flatapisearch versenorm flatapiinstallmgr verseconvert
all: $(TARGETS)

clean:
	rm $(TARGETS)

.cpp:
	g++ -O0 -g -Wall -Werror `pkg-config --cflags sword` $< -o $@ `pkg-config --libs sword`
.c:
	gcc -O0 -g -Wall -Werror `pkg-config --cflags sword` $< -o $@ `pkg-config --libs sword` -lstdc++


