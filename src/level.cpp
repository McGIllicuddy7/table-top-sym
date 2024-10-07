#include "level.h"
#include <raylib.h>
void Level::InitDefault(){

}
void Level::Render(){
	BeginDrawing();
	ClearBackground(Color{40,68,40, 255});
	EndDrawing();
}
