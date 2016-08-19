//
// Created by zhanggen on 16-8-18.
// 简单的http请求头的读取和解析
//


#include <cstdlib>

#define BUFFER_SIZE 4096

//主状态机的两种可能状态
enum CHECK_STATE {
    CHECK_STATE_REQUESTLINE = 0,        //当前正在分析请求行
    CHECK_STATE_HEADER                  //当前正在分析头部字段
};

//从状态机的三种可能状态
enum LINE_STATUS {
    LINE_OK = 0,        //读取到一个完整行
    LINE_BAD,           //行出错
    LINE_OPEN           //行数据尚不完整
};

//服务器请求http请求的结果
enum HTTP_CODE {
    NO_REQUEST,         //请求不完整
    GET_REQUEST,        //获得完整请求
    BAD_REQUEST,        //客户端数据语法错误
    FORBIDDEN_REQUEST,  //客户端对资源权限不足
    INTERNAL_ERROR,     //服务器内部错误
    CLOSED_CONNECTION   //客户端已经关闭连接
};

//只给客户端发送成功或失败
static const char *szret[] = {"I get a correct result\n", "Something wrong\n"};

//从状态机，用于解析出一行内容
LINE_STATUS parse_line(char * buffer, int &checked_index, int &read_index)
{
    char temp;
    //checked_index指向buffer(用户读缓存区)中当前正在分析的字节，read_index指向buffer中客户端
}

int main(int argc, char *argv[])
{

    return EXIT_SUCCESS;
}