#include <iostream>
#include "GraduateStudent.h"
#include "StudentLeader.h"
#include "TeacherLeader.h"

using namespace std;

int main(int argc, char const *argv[])
{
    GraduateStudent* graduateStudent = new GraduateStudent(
        "E21714049",
        "梅世祺",
        "男",
        20,
        "英才班",
        "计算机科学与技术",
        "张伟",
        "计算机视觉"
    );

    StudentLeader* studentLeader = new StudentLeader(
        "E21714049",
        "梅世祺",
        "男",
        20,
        "英才班",
        "计算机视觉",
        "做好社会主义接班人",
        "19年3个月"
    );

    TeacherLeader* teacherLeader = new TeacherLeader(
        "E21714049",
        "张飞",
        "男",
        20,
        "院学生处",
        "培养社会主义接班人",
        "4年",
        "长江学者",
        "大数据"
    );

    cout<<graduateStudent->getAge()<<endl;
    cout<<studentLeader->getDepartment()<<endl;
    cout<<teacherLeader->getName()<<" "<<teacherLeader->getDuties()<<endl;

    teacherLeader->setDuties("培养祖国的花朵");

    cout<<teacherLeader->getName()<<" "<<teacherLeader->getDuties()<<endl;
}

