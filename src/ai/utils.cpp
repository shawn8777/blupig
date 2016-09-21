/*
 * renju-parallel
 * Copyright (C) 2016 Yunzhu Li
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <ai/utils.h>

bool RenjuAIUtils::remoteCell(const char *gs, int r, int c) {
    for (int i = r - 2; i <= r + 2; i++) {
        if (i < 0 || i >= 15) continue;
        for (int j = c - 2; j <= c + 2; j++) {
            if (j < 0 || j >= 15) continue;
            if (gs[15 * i + j] > 0) return false;
        }
    }
    return true;
}
