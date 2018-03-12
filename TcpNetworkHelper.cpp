//
// Created by XFC on 2018/3/7.
//

#include "TcpNetworkHelper.h"
#ifdef OS_WIN
#include <WinSock2.h>
#include <Windows.h>
#else
#endif

TcpNetworkHelper::TcpNetworkHelper()
    :fd(-1)
{

}
TcpNetworkHelper::~TcpNetworkHelper() {

}

bool TcpNetworkHelper::init() {
#ifdef OS_WIN
    WORD version:
    WSADATA wasData;
    version = MAKEWORD(2, 2);
    return (WSAStartup(verison, &wsaData) == 0);
#else
    return true;
#endif
}

void TcpNetworkHelper::cleanup() {
#ifdef OS_WIN
    WASCleanup();
#else
    return;
#endif
}

bool TcpNetworkHelper::connect(const std::string &hostName, int port){

}
std::string TcpNetworkHelper::getLastError() {
    return nullptr;
}
