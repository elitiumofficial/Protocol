/*
	This file is part of solidity.

	solidity is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	solidity is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with solidity.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <libsolutil/Exceptions.h>

namespace solidity::phaser
{

struct BadInput: virtual util::Exception {};
struct InvalidProgram: virtual BadInput {};
struct NoInputFiles: virtual BadInput {};
struct MissingFile: virtual BadInput {};

struct FileOpenError: virtual util::Exception {};
struct FileReadError: virtual util::Exception {};
struct FileWriteError: virtual util::Exception {};

}
