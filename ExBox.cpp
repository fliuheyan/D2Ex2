/*==========================================================
* D2Ex2
* https://github.com/lolet/D2Ex2
* ==========================================================
* Copyright (c) 2011-2014 Bartosz Jankowski
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
* ==========================================================
*/

#include "stdafx.h"
#include "ExBox.h"
#include "Misc.h"

ExBox::ExBox(int X, int Y, int Width, int Height, int Color, int TransLvl) : ExControl(X, Y, Width, Height, 0)
{
	aColor = Color;
	aTransLvl = TransLvl;

}

void ExBox::Draw()
{
	if (cState != INVISIBLE)
	{
		D2Funcs.D2GFX_DrawRectangle(cX, cY, cX + cWidth, cY + cHeight, aColor, aTransLvl);
		D2ASMFuncs::D2CLIENT_DrawGZBox(cX, cY, cX + cWidth, cY + cHeight);
	}
}

ExBox::~ExBox()
{
}
