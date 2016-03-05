/*************************************************************************
	> File Name: 12_14.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年03月05日 星期六 12时07分56秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <memory>

struct connection {
    int a;
};

struct destination {
    int b;
};

connection connect(destination *addr)
{
    connection con;
    std::cout << "connect OK!" << std::endl;
    con.a = addr->b;

    return con;
}

void disconnect(connection con)
{
    std::cout << "Close Connet" << std::endl;
}

void end_connection(connection *con)
{
    disconnect(*con);
}

int main(int argc, char *argv[])
{
    destination a;
    a.b = 10;
    auto test = connect(&a);
    std::shared_ptr<connection> p(&test, end_connection);
    
    return EXIT_SUCCESS;
}
