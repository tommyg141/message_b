#include "doctest.h"
#include "Board.hpp"
#include <iostream>
#include <ctime>
#include <stdexcept>
#include <string>
using namespace ariel;
using namespace std;

		//    98:  _________
		//    99:  ____x____
		//    100: __abyd___
		//    101: ____z____
		//    102: _________
TEST_CASE("test post")
{
	Board test;
	test.post(0,0,Direction::Horizontal,"hello");//6
	test.post(1,2,Direction::Horizontal,"my");//2
	test.post(2,4,Direction::Horizontal,"name");//4
	test.post(3,6,Direction::Horizontal,"is");//2
	test.post(4,8,Direction::Horizontal,"tommy");//5
	test.post(5,10,Direction::Horizontal,"how");//3
	test.post(6,12,Direction::Horizontal,"are");//3
	test.post(7,14,Direction::Horizontal,"you");//3
	test.post(8,16,Direction::Horizontal,"today");//5
	test.post(9,18,Direction::Horizontal,"?");//1

CHECK(test.read(0,0,Direction::Horizontal,6)=="hello");//6
	CHECK(test.read(1,2,Direction::Horizontal,2)=="my");//2
	CHECK(test.read(2,4,Direction::Horizontal,4)=="name");//4
	CHECK(test.read(3,6,Direction::Horizontal,2)=="is");//2
	CHECK(test.read(4,8,Direction::Horizontal,5)=="tommy");//5
	CHECK(test.read(5,10,Direction::Horizontal,3)=="how");//3
	CHECK(test.read(6,12,Direction::Horizontal,3)=="are");//3
	CHECK(test.read(7,14,Direction::Horizontal,3)=="you");//3
	CHECK(test.read(8,16,Direction::Horizontal,5)=="today");//5
	CHECK(test.read(9,18,Direction::Horizontal,1)=="?");//1
}  
TEST_CASE("test post-v"){
	Board test;
	test.post(0,0,Direction::Vertical,"hello");//6
	test.post(1,2,Direction::Vertical,"my");//2
	test.post(2,4,Direction::Vertical,"name");//4
	test.post(3,6,Direction::Vertical,"is");//2
	test.post(4,8,Direction::Vertical,"tommy");//5
	test.post(5,10,Direction::Vertical,"how");//3
	test.post(6,12,Direction::Vertical,"are");//3
	test.post(7,14,Direction::Vertical,"you");//3
	test.post(8,16,Direction::Vertical,"today");//5
	test.post(9,18,Direction::Vertical,"?");//1

	CHECK(test.read(0,0,Direction::Vertical,6)=="hello");//6
	CHECK(test.read(1,2,Direction::Vertical,2)=="my");//2
	CHECK(test.read(2,4,Direction::Vertical,4)=="name");//4
	CHECK(test.read(3,6,Direction::Vertical,2)=="is");//2
	CHECK(test.read(4,8,Direction::Vertical,5)=="tommy");//5
	CHECK(test.read(5,10,Direction::Vertical,3)=="how");//3
	CHECK(test.read(6,12,Direction::Vertical,3)=="are");//3
	CHECK(test.read(7,14,Direction::Vertical,3)=="you");//3
	CHECK(test.read(8,16,Direction::Vertical,5)=="today");//5
	CHECK(test.read(9,18,Direction::Vertical,1)=="?");//1
}
TEST_CASE("test post-v+h"){
	Board test;
	test.post(0,0,Direction::Horizontal,"hello");//6
	test.post(1,2,Direction::Vertical,"my");//2
	test.post(2,4,Direction::Horizontal,"name");//4
	test.post(3,6,Direction::Vertical,"is");//2
	test.post(4,8,Direction::Horizontal,"tommy");//5
	test.post(5,10,Direction::Vertical,"how");//3
	test.post(6,12,Direction::Horizontal,"are");//3
	test.post(7,14,Direction::Vertical,"you");//3
	test.post(8,16,Direction::Horizontal,"today");//5
	test.post(9,18,Direction::Vertical,"?");//1

	CHECK(test.read(0,0,Direction::Horizontal,6)=="hello");//6
	CHECK(test.read(1,2,Direction::Vertical,2)=="my");//2
	CHECK(test.read(2,4,Direction::Horizontal,4)=="name");//4
	CHECK(test.read(3,6,Direction::Vertical,2)=="is");//2
	CHECK(test.read(4,8,Direction::Horizontal,5)=="tommy");//5
	CHECK(test.read(5,10,Direction::Vertical,3)=="how");//3
	CHECK(test.read(6,12,Direction::Horizontal,3)=="are");//3
	CHECK(test.read(7,14,Direction::Vertical,3)=="you");//3
	CHECK(test.read(8,16,Direction::Horizontal,5)=="today");//5
	CHECK(test.read(9,18,Direction::Vertical,1)=="?");//1
	}
	