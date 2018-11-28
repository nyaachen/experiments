#include <iostream>
#include <fstream>

using namespace std;

// 用户交互-登录
std::cout << "学生选课管理系统" << std::endl;
std::cout << "请输入要执行的操作" << std::endl;
std::cout << "1. 学生登陆" << std::endl;
std::cout << "2. 教务员登录" << std::endl;
std::cout << "3. 退出系统" << std::endl;
std::cout << "选择：" << std::flush;

// 用户交互-学生界面
std::cout << "欢迎" << "" << "同学，学号" << "" << std::endl;
std::cout << "请输入要执行的操作" << std::endl;
std::cout << "1. 选课" << std::endl;
std::cout << "2. 退课" << std::endl;
std::cout << "3. 查看我的课程" << std::endl;
std::cout << "4. 退出系统" << std::endl;
std::cout << "选择：" << std::flush;

// 用户交互-选课
std::cout << "请输入要执行的操作" << std::endl;
std::cout << "1. 列表浏览课程" << std::endl;
std::cout << "2. 直接查找课程名" << std::endl;
std::cout << "3. 返回" << std::endl;
std::cout << "选择：" << std::flush;

// 用户交互-选课结果
std::cout << "选课成功" << std::endl;
std::cout << "选课失败：时间冲突" << std::endl;
std::cout << "选课失败：人数限制" << std::endl;

// 用户交互-列表浏览
std::cout << "  1  " << "" << "(spaces)" << "" << std::endl;
std::cout << "  2  " << "" << "(spaces)" << "" << std::endl;
...
std::cout << "  ,/-  " << "上一页" << std::endl;
std::cout << "  ./=  " << "下一页" << std::endl;
std::cout << "第1/2页，当前显示1-10条，总20条" << "上一页" << std::endl;

// 用户交互-直接查找课程名
std::cout << "请输入要查找的课程名称" << std::endl;
std::cout << "查找结果" << std::endl;

// 用户退课-同列表浏览

// 查看我的课程
std::cout << "我的课程列表" << std::endl;
