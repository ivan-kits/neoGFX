// file_dialog.hpp
/*
  neogfx C++ GUI Library
  Copyright (c) 2020 Leigh Johnston.  All Rights Reserved.

  This program is free software: you can redistribute it and / or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <neogfx/neogfx.hpp>
#include <string>
#include <vector>

namespace neogfx
{
	struct file_dialog_spec
	{
		std::string title;
		std::string defaultPathAndFile;
		std::vector<std::string> filterPatterns;
		std::string filterPatternDescritpion;
	};

	std::string save_file_dialog(const file_dialog_spec& aSpec = {});
	std::string open_file_dialog(const file_dialog_spec& aSpec = {}, bool aAllowMultipleSelection = false);
	std::string select_folder_dialog(const std::string& aTitle = {}, const std::string& aDefaultPath = {});
}