//
// Created by wang on 2018/6/26.
//

//防止头文件重复包含
#pragma once

#ifndef CMIRROR_SOCKETCLENT_H
#define CMIRROR_SOCKETCLENT_H


//初始化环境
int socket_init(void **handle);

//发送信息
int socket_send(void *handle,void *buf,int len);

//接受信息
int socket_receive(void *handle,void *buf,int *len);

int socket_free(void **buf);

//是否自愿
int socket_destroy(void *handle);

#endif //CMIRROR_SOCKETCLENT_H
