#pragma once
#include <concepts>
#include <SFML/System.hpp>

template<typename T>
concept NUM = std::is_integral<T>::value || std::is_floating_point<T>::value;

template<NUM T>
struct Rect
{
	sf::Vector2<T> position;
	T width;
	T height;
};