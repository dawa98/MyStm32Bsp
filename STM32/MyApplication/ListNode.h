#ifndef __LISTNODE_H__
#define __LISTNODE_H__

#include "MyApplication.h"

//定义枚举类型

//定义结构体类型
typedef struct
{
    int data;
    ListNode_t *next; 
}ListNode_t;

/* extern variables-----------------------------------------------------------*/
extern ListNode_t  ListNode;


#endif
/********************************************************
  End Of File
********************************************************/
