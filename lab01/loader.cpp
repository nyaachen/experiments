#include <iostream>
#include "manager.h"
#include "Admin.h"
#include "Student.h"

using namespace std;


void user_main(Student &r);
void admin_main(Admin &r);

int main() {
    Manager m();
    while (true) {
        cout << " " << ;
        char t;
        cin >> t;
        switch (t) {
            case '1':
            cout << "" << endl;
            string ID;
            cin >> ID;
            auto user = m.student_login(ID);
            user_main(user);
            break;
            case '2':
            auto admin = m.admin_login();
            admin_main(admin);
            break;
            case '3':
            return 0;
            default:
            break;
        }
    }
}
