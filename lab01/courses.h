#pragma once
#ifndef COURSES_H
#define COURSES_H

#include <string>
#include <vector>

namespace xuanke {
	enum Weekday {MON,TUE,WED,THU,FRI};
	enum Hour {MORNING1, MORNING2, AFTERNOON1};
	class Time {
	private:
		Weekday day;
		Hour hr;
	public:
		Time(Weekday d, Hour h);
		bool operator==(const Time &t);
		bool operator<(const Time &t);
	};
	class Courses {
	private:
		std::string Name;
		std::string Department;
		std::vector<Time> Timetable;
	public:
		Courses(std::string name, std::string department, std::vector<Time> timetable);

		Courses &Print_detail();
		bool belong_to();
		bool conflict();
	};
}
#endif