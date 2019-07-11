#pragma once

#define FLORA_VERSION 4

// client --> server
#define CMD_AUTH_REQ 0
#define CMD_SUBSCRIBE_REQ 1
#define CMD_UNSUBSCRIBE_REQ 2
#define CMD_POST_REQ 3
#define CMD_REPLY_REQ 4
#define CMD_DECLARE_METHOD_REQ 5
#define CMD_REMOVE_METHOD_REQ 6
#define CMD_CALL_REQ 7
#define CMD_PING_REQ 8
// server --> client
#define CMD_AUTH_RESP 101
#define CMD_POST_RESP 102
#define CMD_REPLY_RESP 103
#define CMD_CALL_RESP 104
#define CMD_MONITOR_RESP 105
#define CMD_PONG_RESP 106

#define MSG_HANDLER_COUNT 9

// subtype of CMD_MONITOR_RESP
#define MONITOR_LIST_ALL 0
#define MONITOR_LIST_ADD 1
#define MONITOR_LIST_REMOVE 2
#define MONITOR_SUB_ALL 3
#define MONITOR_SUB_ADD 4
#define MONITOR_SUB_REMOVE 5
#define MONITOR_DECL_ALL 6
#define MONITOR_DECL_ADD 7
#define MONITOR_DECL_REMOVE 8
#define MONITOR_POST 9
#define MONITOR_CALL 10
#define MONITOR_SUBTYPE_NUM 11

#define DEFAULT_MSG_BUF_SIZE 32768

#ifdef __APPLE__
#define SELECT_BLOCK_IF_FD_CLOSED
#endif

#define TAG "flora"
#define FILE_TAG "flora.filelog"
