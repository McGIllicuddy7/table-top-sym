#include "level.h"
#include <raylib.h>
int main(){
	SetTraceLogLevel(LOG_ERROR);
	InitWindow(1000,1000,"GURPS");
	Level l = Level();
	l.InitDefault();
	while(!WindowShouldClose()){
		l.Render();	
	}
	return 0;
}
