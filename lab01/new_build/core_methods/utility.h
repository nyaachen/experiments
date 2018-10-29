#ifndef UTILITY_H
#define UTILITY_H

#include <string>

namespace utility {

    class Message {
    private:
        std::string to_string();
        bool from_string(const std::string &s);
    };

    // 由用户名和密码生成口令字符串。这个函数是可选的加密接口
    std::string generate_password_token(const std::string &Username, const std::string &password);

    // 在控制台进行标准化打印的格式控制
    void standard_print(const Message &m)
}

#endif
