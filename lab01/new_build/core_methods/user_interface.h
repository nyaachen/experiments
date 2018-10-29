

// 任何ui层应用程序都通过这个标准接口来与系统互动，因此他们需要保存一个这个类的对象
#include <string>
#include "utility.h"

using namespace utility;

class User_interface {
private:
    Login_status obj;
    // to_server_interface
public:
    // 这些是共通方法
    // 这个方法用来请求登录，需要的接口是登录口令字符串。返回登录是否成功的提示
    utility::Message User_login(const std::string &token);
    // 这个方法注销当前已经登录的用户
    utility::Message logout();
    // 这个方法请求查看当前用户的个人信息
    utility::Message personal_info();
    // 这个方法请求查看全校课程信息
    utility::Message view_all_course();
    // 这个方法请求查看某个课程的信息
    utility::Message view_course(const std::string &course_id);

    // 这些是学生方法
    // 这个方法请求选课
    utility::Message student_choose_course();
    // 这个方法请求退课
    utility::Message student_leave_course();
    // 这个方法查看自己已选择的课程
    utility::Message student_my_course();
    // 这个方法打印课表
    utility::Message student_my_timetable();

    // 这些是教师方法
    // 这个方法查看自己开设的所有课程
    utility::Message teacher_my_course();
    // 这个方法从自己名下开设新课程
    utility::Message teacher_new_course();
    // 这个方法为一名学生添加课程，课程必须是自己开设的并且该学生没有课程冲突
    utility::Message teacher_select_course();
    // 这个方法打印一门自己开设的课程的选课名单
    utility::Message teacher_my_student_table();
    // 这个方法停开一门自己开设的课程，这门课程必须无人选课
    utility::Message teacher_stop_course()

    // 这些是管理员方法
    // 这个方法添加一位学生
    utility::Message admin_new_student();
    // 这个方法添加一位教师
    utility::Message admin_new_reacher();
    // 这个方法添加一门课程
    utility::Message admin_new_course();
    // 这个方法修改一门课程的信息
    utility::Message admin_modify_course();
    // 这个方法打印一门课程的选课名单
    utility::Message admin_student_table();
    // 这个方法停开一门课程
    utility::Message admin_stop_course();
    // 这个方法为学生指选一门课程，必须没有课程冲突
    utility::Message admin_select_course();
    // 这个方法为学生删除一门课程
    utility::Message admin_remove_course();
    // 这个方法删除一门课程，删除的课程必须已经停课，已经选课的学生会自动退选
    utility::Message admin_remove_course();

}
