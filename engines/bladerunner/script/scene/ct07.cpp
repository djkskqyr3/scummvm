/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#include "bladerunner/script/scene.h"

namespace BladeRunner {

void SceneScriptCT07::InitializeScene() {
	Setup_Scene_Information(202.32f, -58.23f, -12.86f, 225);
	Actor_Put_In_Set(kActorZuben, 30);
	Actor_Set_At_XYZ(kActorZuben, -9.68f, -58.23f, 11.14f, 250);
	Ambient_Sounds_Add_Looping_Sound(54, 30, 90, 1);
	Ambient_Sounds_Add_Looping_Sound(205, 20, 1, 1);
	Ambient_Sounds_Add_Looping_Sound(56, 40, 100, 1);
	Ambient_Sounds_Add_Speech_Sound(60, 0, 10, 260, 17, 24, -100, 100, -101, -101, 1, 1);
	Ambient_Sounds_Add_Speech_Sound(60, 20, 10, 260, 17, 24, -100, 100, -101, -101, 1, 1);
	Ambient_Sounds_Add_Speech_Sound(60, 40, 10, 260, 17, 24, -100, 100, -101, -101, 1, 1);
	Ambient_Sounds_Add_Speech_Sound(60, 50, 10, 260, 17, 24, -100, 100, -101, -101, 1, 1);
	Ambient_Sounds_Add_Sound(67, 80, 180, 16, 25, 0, 0, -101, -101, 0, 0);
	Ambient_Sounds_Add_Sound(68, 50, 180, 16, 25, 0, 0, -101, -101, 0, 0);
	Ambient_Sounds_Add_Sound(379, 10, 60, 50, 100, 0, 0, -101, -101, 0, 0);
	Ambient_Sounds_Add_Sound(375, 6, 50, 50, 100, 0, 0, -101, -101, 0, 0);
	Ambient_Sounds_Add_Sound(377, 10, 70, 50, 100, 0, 0, -101, -101, 0, 0);
	Ambient_Sounds_Add_Sound(61, 10, 30, 12, 14, 100, 100, -101, -101, 0, 0);
	Ambient_Sounds_Add_Sound(62, 10, 30, 12, 14, 100, 100, -101, -101, 0, 0);
	Ambient_Sounds_Add_Sound(63, 10, 30, 12, 14, 100, 100, -101, -101, 0, 0);
	Ambient_Sounds_Add_Sound(64, 10, 30, 12, 14, 100, 100, -101, -101, 0, 0);
}

void SceneScriptCT07::SceneLoaded() {
	Obstacle_Object("BOX01", true);
	Obstacle_Object("BOX02", true);
	Obstacle_Object("BOX03", true);
	Obstacle_Object("BOX04", true);
	Unclickable_Object("BOX01");
	Unclickable_Object("BOX02");
	Unclickable_Object("BOX03");
	Unclickable_Object("BOX04");
}

bool SceneScriptCT07::MouseClick(int x, int y) {
	return true;
}

bool SceneScriptCT07::ClickedOn3DObject(const char *objectName, bool a2) {
	return false;
}

bool SceneScriptCT07::ClickedOnActor(int actorId) {
	return false;
}

bool SceneScriptCT07::ClickedOnItem(int itemId, bool a2) {
	return false;
}

bool SceneScriptCT07::ClickedOnExit(int exitId) {
	return false;
}

bool SceneScriptCT07::ClickedOn2DRegion(int region) {
	return false;
}

void SceneScriptCT07::SceneFrameAdvanced(int frame) {
}

void SceneScriptCT07::ActorChangedGoal(int actorId, int newGoal, int oldGoal, bool currentSet) {
}

void SceneScriptCT07::PlayerWalkedIn() {
	Player_Gains_Control();
	Non_Player_Actor_Combat_Mode_On(kActorZuben, 0, 0, kActorMcCoy, 2, 4, 7, 8, 0, 0, 100, 15, 300, 0);
	Game_Flag_Set(516);
	Actor_Face_Actor(kActorMcCoy, kActorZuben, true);
}

void SceneScriptCT07::PlayerWalkedOut() {
	Music_Stop(2);
}

void SceneScriptCT07::DialogueQueueFlushed(int a1) {
}

} // End of namespace BladeRunner