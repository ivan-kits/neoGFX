// scrollable_widget.cpp
/*
  neogfx C++ App/Game Engine
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

#include <neogfx/neogfx.hpp>
#include <neogfx/gui/widget/scrollable_widget.tpp>
#include <neogfx/gui/widget/framed_widget.hpp>
#include <neogfx/gui/view/view_container.hpp>
#include <neogfx/gui/window/i_window.hpp>

namespace neogfx
{
    template class scrollable_widget<>;
    template class scrollable_widget<framed_widget<widget<>>>;
    template class scrollable_widget<framed_widget<widget<i_window>>>;
}

