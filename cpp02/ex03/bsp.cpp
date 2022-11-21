/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 00:16:25 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/21 14:55:03 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed	p1, p2, p3;

	// Point PC((c.getX() - point.getX()).toFloat(), (c.getY() - point.getY()).toFloat());
	// Point PA((a.getX() - point.getX()).toFloat(), (a.getY() - point.getY()).toFloat());
	// Point PB((b.getX() - point.getX()).toFloat(), (b.getY() - point.getY()).toFloat());

	// Point AC((c.getX() - a.getX()).toFloat(), (c.getY() - a.getY()).toFloat());
	// Point BA((a.getX() - b.getX()).toFloat(), (a.getY() - b.getY()).toFloat());
	// Point CB((b.getX() - c.getX()).toFloat(), (b.getY() - c.getY()).toFloat());

	// p1 = PC.getX() * AC.getX() + PC.getY() * AC.getY();
	// p2 = PA.getX() * BA.getX() + PA.getY() * BA.getY();
	// p3 = PB.getX() * CB.getX() + PB.getY() * CB.getY();

	p1 = (c.getX() - point.getX()) * (a.getY() - point.getY()) - (c.getY() - point.getY()) * (a.getX() - point.getX());
	p2 = (a.getX() - point.getX()) * (b.getY() - point.getY()) - (a.getY() - point.getY()) * (b.getX() - point.getX());
	p3 = (b.getX() - point.getX()) * (c.getY() - point.getY()) - (b.getY() - point.getY()) * (c.getX() - point.getX());
	if ((p1 > 0 && p2 > 0 && p3 > 0) || (p1 < 0 && p2 < 0 && p3 < 0))
		return true;
	return false;
}