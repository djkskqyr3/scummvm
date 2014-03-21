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

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#include "illusions/illusions.h"
#include "illusions/talkresource.h"

namespace Illusions {

// TalkResourceLoader

void TalkResourceLoader::load(Resource *resource) {
	debug("TalkResourceLoader::load() Loading font %08X from %s...", resource->_resId, resource->_filename.c_str());

    // TODO
	
}

void TalkResourceLoader::unload(Resource *resource) {
}

void TalkResourceLoader::buildFilename(Resource *resource) {
	resource->_filename = Common::String::format("%08X.tlk", resource->_resId);
}

bool TalkResourceLoader::isFlag(int flag) {
	return
		flag == kRlfLoadFile;
}

} // End of namespace Illusions