#pragma once
#ifndef STUDENTS_H
#define STUDENTS_H

#include <string>
#include <vector>

#include "courses.h"

namespace xuanke {
	class Students {
	private:
		std::string ID;
		std::string Name;
		std::vector<Courses> Courses_list;
	public:
		Students();

		Students &View_courses();
		Students &Print_course_table();
		Students &Select_new_course();
		Students &Deselect_course();
	};
	class Jiaowuyuan {
	public:
		Jiaowuyuan();
		Jiaowuyuan &Add_courses();
		Jiaowuyuan &Print_student_list();
	};
}

#endif