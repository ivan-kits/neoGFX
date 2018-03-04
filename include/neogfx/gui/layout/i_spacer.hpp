// i_spacer.hpp
/*
  neogfx C++ GUI Library
  Copyright (c) 2015-present, Leigh Johnston.  All Rights Reserved.
  
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
#include "i_widget_geometry.hpp"

namespace neogfx
{
	class i_widget;
	class i_layout;

	class i_spacer : public i_widget_geometry, public i_units_context
	{
	public:
		enum expansion_policy_e
		{
			ExpandHorizontally = 0x01,
			ExpandVertically = 0x02
		};
		typedef boost::optional<size> optional_weight;
	public:
		virtual ~i_spacer() {}
	public:
		virtual i_widget* owner() const = 0;
		virtual bool has_parent() const = 0;
		virtual const i_layout& parent() const = 0;
		virtual i_layout& parent() = 0;
		virtual void set_parent(i_layout& aParent) = 0;
		virtual expansion_policy_e expansion_policy() const = 0;
		virtual void set_expansion_policy(expansion_policy_e aExpansionPolicy) = 0;
	};
}