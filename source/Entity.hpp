/*
 * Copyright (C) 2016 Matthew D. Scholefield
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <memory>

#include "Position.hpp"

namespace sf {
	class Sprite;
}

class Grid;
class Renderer;

class Entity {
public:
	using Ptr = std::shared_ptr<Entity>;
	Position pos;
	bool isAlive;

	Entity();
	virtual ~Entity();
	virtual void update(Grid &grid) = 0;
	virtual void advance(Grid &grid) = 0;
	virtual sf::Sprite &getSprite() = 0;
};
