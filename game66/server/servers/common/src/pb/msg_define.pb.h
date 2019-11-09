// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg_define.proto

#ifndef PROTOBUF_msg_5fdefine_2eproto__INCLUDED
#define PROTOBUF_msg_5fdefine_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include "error_code.pb.h"
#include "base_msg_struct.pb.h"
#include "land_logic_msg.pb.h"
#include "showhand_logic_msg.pb.h"
#include "bainiu_logic_msg.pb.h"
#include "texas_logic_msg.pb.h"
#include "zajinhua_logic_msg.pb.h"
#include "client_logic_msg.pb.h"
#include "niuniu_logic_msg.pb.h"
#include "baccarat_logic_msg.pb.h"
#include "sangong_logic_msg.pb.h"
#include "paijiu_logic_msg.pb.h"
#include "everycolor_logic_msg.pb.h"
#include "dice_logic_msg.pb.h"
#include "majiang_logic_msg.pb.h"
#include "slot_logic_msg.pb.h"
#include "war_logic_msg.pb.h"
#include "fight_logic_msg.pb.h"
#include "robniu_logic_msg.pb.h"
#include "fishing_logic_msg.pb.h"
#include "twoeight_logic_msg.pb.h"
#include "carcity_logic_msg.pb.h"
#include "servers_msg.pb.h"
// @@protoc_insertion_point(includes)

namespace net {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_msg_5fdefine_2eproto();
void protobuf_AssignDesc_msg_5fdefine_2eproto();
void protobuf_ShutdownFile_msg_5fdefine_2eproto();


enum PHP_MSG_ID {
  PHP_MSG_CHANGE_SAFEPWD = 11,
  PHP_MSG_BROADCAST = 12,
  PHP_MSG_SYS_NOTICE = 13,
  PHP_MSG_KILL_PLAYER = 14,
  PHP_MSG_CHANGE_ACCVALUE = 15,
  PHP_MSG_SET_SVR_STATE = 16,
  PHP_MSG_CHANGE_NAME = 17,
  PHP_MSG_STOP_SERVICE = 18,
  PHP_MSG_CHANGE_ROBOT = 19,
  PHP_MSG_CHANGE_VIP = 20,
  PHP_MSG_CHANGE_ROOM_PARAM = 21,
  PHP_MSG_CONTROL_PLAYER = 22,
  PHP_MSG_UPDATE_ACCVALUE_INGAME = 23,
  PHP_MSG_STOP_SNATCH_COIN = 24,
  PHP_MSG_CHANGE_VIP_BROADCAST = 25,
  PHP_MSG_ROBOT_SNATCH_COIN = 26,
  PHP_MSG_NOTIFY_VIP_PROXY_RECHARGE = 27,
  PHP_MSG_CONTROL_MULTI_PLAYER = 28,
  PHP_MSG_CONTROL_DICE_GAME_CARD = 29,
  PHP_MSG_NOTIFY_UNION_PAY_RECHARGE = 30,
  PHP_MSG_NOTIFY_WECHAT_PAY_RECHARGE = 31,
  PHP_MSG_NOTIFY_ALI_PAY_RECHARGE = 32,
  PHP_MSG_NOTIFY_OTHER_PAY_RECHARGE = 33,
  PHP_MSG_NOTIFY_QQ_PAY_RECHARGE = 34,
  PHP_MSG_NOTIFY_WECHAT_SCAN_PAY_RECHARGE = 35,
  PHP_MSG_NOTIFY_JD_PAY_RECHARGE = 36,
  PHP_MSG_ONLINE_CONFIG_ROBOT = 37,
  PHP_MSG_NOTIFY_APPLE_PAY_RECHARGE = 38,
  PHP_MSG_CONFIG_MAJIANG_CARD = 39,
  PHP_MSG_NOTIFY_LARGE_ALI_PAY_RECHARGE = 40,
  PHP_MSG_REFRESH_AUTO_KILL_CFG = 41,
  PHP_MSG_REFRESH_AUTO_KILL_USERS = 42,
  PHP_MSG_NOTIFY_UPDATE_NEW_PLAYER_NOVICE_WELFARE_RIGHT = 43,
  PHP_MSG_NOTIFY_UPDATE_NEW_PLAYER_NOVICE_WELFARE_VALUE = 44,
  PHP_MSG_NOTIFY_SIGN_IN_UPDATE = 45,
  PHP_MSG_NOTIFY_ACTIVE_WELFARE_CFG_UPDATE = 46,
  PHP_MSG_NOTIFY_ACTIVE_WELFARE_INFO_CLEAR = 47,
  PHP_MSG_NOTIFY_NEW_REGISTER_WELFARE_CFG_UPDATE = 48,
  PHP_MSG_CONFIG_CONTROL_USER = 50,
  PHP_MSG_CHANGE_ROOM_STOCK_CFG = 51,
  PHP_MSG_NOTIFY_EXCLUSIVE_ALIPAY_RECHARGE = 53,
  PHP_MSG_CONFIG_LUCKY_INFO = 54,
  PHP_MSG_CONFIG_FISH_INFO = 55,
  PHP_MSG_RESET_LUCK_CONFIG_INFO = 56,
  PHP_MSG_NOTIFY_FIXED_ALIPAY_RECHARGE = 57,
  PHP_MSG_NOTIFY_FIXED_WECHAT_RECHARGE = 58,
  PHP_MSG_NOTIFY_FIXED_UNIONPAY_RECHARGE = 59,
  PHP_MSG_NOTIFY_EXCLUSIVE_FLASH_RECHARGE = 60
};
bool PHP_MSG_ID_IsValid(int value);
const PHP_MSG_ID PHP_MSG_ID_MIN = PHP_MSG_CHANGE_SAFEPWD;
const PHP_MSG_ID PHP_MSG_ID_MAX = PHP_MSG_NOTIFY_EXCLUSIVE_FLASH_RECHARGE;
const int PHP_MSG_ID_ARRAYSIZE = PHP_MSG_ID_MAX + 1;

const ::google::protobuf::EnumDescriptor* PHP_MSG_ID_descriptor();
inline const ::std::string& PHP_MSG_ID_Name(PHP_MSG_ID value) {
  return ::google::protobuf::internal::NameOfEnum(
    PHP_MSG_ID_descriptor(), value);
}
inline bool PHP_MSG_ID_Parse(
    const ::std::string& name, PHP_MSG_ID* value) {
  return ::google::protobuf::internal::ParseNamedEnum<PHP_MSG_ID>(
    PHP_MSG_ID_descriptor(), name, value);
}
enum SERVER_MSG_ID {
  S2L_MSG_REGISTER = 501,
  L2S_MSG_REGISTER_REP = 502,
  S2L_MSG_REPORT = 503,
  S2L_MSG_LEAVE_SVR = 504,
  L2S_MSG_NOTIFY_NET_STATE = 505,
  L2S_MSG_ENTER_INTO_SVR = 506,
  S2L_MSG_NOTIFY_CHANGE_ACCOUNT_DATA = 507,
  L2S_MSG_NOTIFY_CHANGE_PLAYERINFO = 508,
  L2S_MSG_NOTIFY_STOP_SERVICE = 509,
  L2S_MSG_CHANGE_ROOM_PARAM = 510,
  L2S_MSG_CONTORL_PLAYER = 511,
  L2S_MSG_STOP_SNATCH_COIN = 512,
  L2S_MSG_ROBOT_SNATCH_COIN = 513,
  L2S_MSG_CONTORL_MULTI_PLAYER = 514,
  L2S_MSG_DICE_CONTROL_REQ = 515,
  L2S_MSG_UPDATE_SERVER_ROOM_ROBOT = 516,
  L2S_MSG_MAJIANG_CONFIG_HAND_CARD = 517,
  L2S_MSG_RELOAD_ROBOT_ONLINE_CFG = 518,
  L2S_MSG_REFRESH_AUTO_KILL_CFG = 519,
  L2S_MSG_REFRESH_AUTO_KILL_USERS = 520,
  L2S_MSG_UPDATE_NEW_PLAYER_NOVICE_WELFARE_RIGHT = 521,
  L2S_MSG_UPDATE_NEW_PLAYER_NOVICE_WELFARE_VALUE = 522,
  L2S_MSG_REFRESH_ACTIVE_WELFARE_CFG = 523,
  L2S_MSG_RESET_ACTIVE_WELFARE_INFO = 524,
  L2S_MSG_RESET_NEW_REGISTER_WELFARE_INFO = 525,
  L2S_MSG_STOP_CONTROL_PLAYER = 530,
  L2S_MSG_SYN_CTRL_USER_CFG = 531,
  L2S_MSG_CHANGE_ROOM_STOCK_CFG = 532,
  L2S_MSG_SYN_LUCKY_CFG = 533,
  L2S_MSG_SYN_FISH_CFG = 534,
  L2S_MSG_RESET_LUCKY_CFG = 535,
  S2L_MSG_REPORT_GAME_RESULT = 601,
  S2L_MSG_REPORT_FEE_LOG = 602,
  L2S_MSG_LEAVE_ROBOT = 603,
  L2S_MSG_FLUSH_CHANGE_ACC_DATA = 604,
  L2S_MSG_UPDATE_CHANGE_ACC_DATA = 605,
  S2L_MSG_UPDATE_LOBBY_CHANGE_ACCOUNT_DATA = 606,
  S2L_MSG_NOTIFY_UPDATE_LOBBY_CHANGE_ACCOUNT_DATA = 607,
  L2S_MSG_ENTER_INTO_EVERY_COLOR_SVR = 610,
  L2S_MSG_ENTER_INTO_LEAVE_COLOR_SVR = 611
};
bool SERVER_MSG_ID_IsValid(int value);
const SERVER_MSG_ID SERVER_MSG_ID_MIN = S2L_MSG_REGISTER;
const SERVER_MSG_ID SERVER_MSG_ID_MAX = L2S_MSG_ENTER_INTO_LEAVE_COLOR_SVR;
const int SERVER_MSG_ID_ARRAYSIZE = SERVER_MSG_ID_MAX + 1;

const ::google::protobuf::EnumDescriptor* SERVER_MSG_ID_descriptor();
inline const ::std::string& SERVER_MSG_ID_Name(SERVER_MSG_ID value) {
  return ::google::protobuf::internal::NameOfEnum(
    SERVER_MSG_ID_descriptor(), value);
}
inline bool SERVER_MSG_ID_Parse(
    const ::std::string& name, SERVER_MSG_ID* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SERVER_MSG_ID>(
    SERVER_MSG_ID_descriptor(), name, value);
}
enum DISPATCH_MSG_ID {
  LS2D_MSG_REGISTER = 701,
  D2LS_MSG_REGISTER_REP = 702,
  D2S_MSG_NOTIFY_GAMESVRS_NEW_LOBBY = 703,
  D2L_MSG_RETIRE_LOBBYSVR = 704,
  D2S_MSG_RETIRE_GAMESVR = 705,
  LS2D_MSG_REPORT_ONLINES = 706,
  P2D_MSG_RETIRE_SERVER = 707,
  P2D_MSG_SVRLIST = 708,
  L2D_MSG_BROADCAST_OTHER_LOBBY = 709,
  D2L_MSG_BROADCAST = 710
};
bool DISPATCH_MSG_ID_IsValid(int value);
const DISPATCH_MSG_ID DISPATCH_MSG_ID_MIN = LS2D_MSG_REGISTER;
const DISPATCH_MSG_ID DISPATCH_MSG_ID_MAX = D2L_MSG_BROADCAST;
const int DISPATCH_MSG_ID_ARRAYSIZE = DISPATCH_MSG_ID_MAX + 1;

const ::google::protobuf::EnumDescriptor* DISPATCH_MSG_ID_descriptor();
inline const ::std::string& DISPATCH_MSG_ID_Name(DISPATCH_MSG_ID value) {
  return ::google::protobuf::internal::NameOfEnum(
    DISPATCH_MSG_ID_descriptor(), value);
}
inline bool DISPATCH_MSG_ID_Parse(
    const ::std::string& name, DISPATCH_MSG_ID* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DISPATCH_MSG_ID>(
    DISPATCH_MSG_ID_descriptor(), name, value);
}
enum CLIENT_MSG_ID {
  C2S_MSG_HEART = 1000,
  C2S_MSG_LOGIN = 1001,
  S2C_MSG_LOGIN_REP = 1002,
  S2C_MSG_NOTIFY_LEAVE = 1009,
  S2C_MSG_ENTER_GAME = 1010,
  S2C_MSG_PLAYER_INFO = 1011,
  C2S_MSG_UPDATE_INFO_REQ = 1012,
  S2C_MSG_UPDATE_ACC_VALUE = 1013,
  S2C_MSG_UPDATA_LAND_INFO = 1014,
  S2C_MSG_UPDATA_BASE_VALUE = 1015,
  S2C_MSG_UPDATA_GAME_INFO = 1017,
  S2C_MSG_SEND_BASE_VALUE = 1018,
  C2S_MSG_REQ_SVRS_INFO = 1100,
  S2C_MSG_SVRS_INFO = 1101,
  C2S_MSG_ENTER_SVR = 1102,
  S2C_MSG_ENTER_SVR_REP = 1103,
  C2S_MSG_LOGIN_SAFEBOX = 1109,
  S2C_MSG_LOGIN_SAFEBOX_REP = 1110,
  C2S_MSG_CHANGE_SAFEBOX_PWD = 1111,
  S2C_MSG_CHANGE_SAFEBOX_PWD_REP = 1112,
  C2S_MSG_TAKE_SAFEBOX = 1113,
  S2C_MSG_TAKE_SAFEBOX_REP = 1114,
  C2S_MSG_GIVE_SAFEBOX = 1115,
  S2C_MSG_GIVE_SAFEBOX = 1116,
  S2C_MSG_PHP_BROADCAST = 1240,
  S2C_MSG_SYSTEM_BROADCAST = 1241,
  S2C_MSG_SEND_ALL_MISSION_REP = 1250,
  S2C_MSG_SEND_MISSION_REP = 1251,
  C2S_MSG_GET_MISSION_PRIZE_REQ = 1252,
  S2C_MSG_GET_MISSION_PRIZE_REP = 1253,
  C2S_MSG_GET_LOGIN_REWARD_REQ = 1260,
  S2C_MSG_GET_LOGIN_REWARD_REP = 1261,
  C2S_MSG_GET_BANKRUPT_HELP = 1265,
  S2C_MSG_GET_BANKRUPT_HELP_REP = 1266,
  C2S_MSG_EXCHANGE_SCORE_REQ = 1270,
  S2C_MSG_EXCHANGE_SCORE_REP = 1271,
  C2S_MSG_SPEAK_BROADCAST_REQ = 1280,
  S2C_MSG_SPEAK_BROADCAST_REP = 1281,
  C2S_MSG_GET_HISTORY_SPEAK = 1282,
  S2C_MSG_SEND_HISTORY_SPEAK = 1283,
  S2C_MSG_SPEAK_OPER_REP = 1284,
  C2S_MSG_GET_SERVER_INFO = 1285,
  S2C_MSG_SEND_SERVER_INFO = 1286,
  S2C_MSG_NOTICE_CONTROL_PLAYER_BACK_LOBBY = 1287,
  C2S_MSG_REQ_ROOMS_INFO = 2001,
  S2C_MSG_ROOMS_INFO = 2002,
  C2S_MSG_BACK_LOBBY = 2003,
  S2C_MSG_BACK_LOBBY_REP = 2004,
  C2S_MSG_GOTO_SVR = 2005,
  S2C_MSG_GOTO_SVR_REP = 2006,
  C2S_MSG_ENTER_NOVICE_WELFARE_ROOM = 2010,
  C2S_MSG_ENTER_ROOM = 2011,
  S2C_MSG_ENTER_ROOM_REP = 2012,
  S2C_MSG_NOTIFY_LEAVE_ROOM = 2013,
  C2S_MSG_REQ_TABLE_LIST = 2014,
  S2C_MSG_TABLE_LIST = 2015,
  C2S_MSG_REQ_CREATE_TABLE = 2016,
  S2C_MSG_CREATE_TABLE_REP = 2017,
  C2S_MSG_RENEW_TABLE_REQ = 2018,
  S2C_MSG_RENEW_TABLE_REP = 2019,
  C2S_MSG_LEAVE_TABLE_REQ = 2020,
  S2C_MSG_LEAVE_TABLE_REP = 2021,
  C2S_MSG_ENTER_TABLE_REQ = 2024,
  S2C_MSG_ENTER_TABLE = 2025,
  S2C_MSG_TABLE_INFO = 2026,
  S2C_MSG_SEATS_INFO = 2027,
  C2S_MSG_TABLE_READY = 2028,
  S2C_MSG_TABLE_READY_REP = 2029,
  C2S_MSG_TABLE_CHAT = 2030,
  S2C_MSG_TABLE_CHAT = 2031,
  C2S_MSG_TABLE_SET_AUTO = 2032,
  S2C_MSG_TABLE_SET_AUTO = 2033,
  C2S_MSG_MASTER_JOIN_TABLE = 2036,
  S2C_MSG_MASTER_JOIN_TABLE_REP = 2037,
  C2S_MSG_FAST_JOIN_BY_ROOM_ID = 2039,
  C2S_MSG_FAST_JOIN_ROOM = 2040,
  S2C_MSG_FAST_JOIN_ROOM_REP = 2041,
  C2S_MSG_FAST_JOIN_TABLE = 2042,
  S2C_MSG_FAST_JOIN_TABLE_REP = 2043,
  C2S_MSG_QUERY_TABLE_LIST_REQ = 2045,
  S2C_MSG_QUERY_TABLE_LIST_REP = 2046,
  S2C_MSG_NOTIFY_PLAYER_JOIN = 2047,
  S2C_MSG_LOOKER_LIST_INFO = 2048,
  C2S_MSG_SITDOWN_STANDUP = 2049,
  S2C_MSG_SITDOWN_STANDUP = 2050,
  C2S_MSG_ITEMS_USER_REQ = 2051,
  S2C_MSG_ITEMS_USER_REP = 2052,
  S2C_MSG_INGAME_UPDATE_SCORE = 2053,
  S2C_MSG_NOTIFY_VIP_RECHARGE_SHOW = 2054,
  C2S_MSG_NOTIFY_VIP_RECHARGE_REQ = 2055,
  C2S_MSG_NOTIFY_UNION_PAY_RECHARGE_REQ = 2056,
  S2C_MSG_NOTIFY_UNION_PAY_RECHARGE_REP = 2057,
  C2S_MSG_NOTIFY_WECHAT_PAY_RECHARGE_REQ = 2058,
  S2C_MSG_NOTIFY_WECHAT_PAY_RECHARGE_REP = 2059,
  C2S_MSG_NOTIFY_ALI_PAY_RECHARGE_REQ = 2060,
  S2C_MSG_NOTIFY_ALI_PAY_RECHARGE_REP = 2061,
  C2S_MSG_NOTIFY_OTHER_PAY_RECHARGE_REQ = 2062,
  S2C_MSG_NOTIFY_OTHER_PAY_RECHARGE_REP = 2063,
  C2S_MSG_NOTIFY_QQ_PAY_RECHARGE_REQ = 2064,
  S2C_MSG_NOTIFY_QQ_PAY_RECHARGE_REP = 2065,
  C2S_MSG_NOTIFY_WECHAT_SCAN_PAY_RECHARGE_REQ = 2066,
  S2C_MSG_NOTIFY_WECHAT_SCAN_PAY_RECHARGE_REP = 2067,
  C2S_MSG_NOTIFY_JD_PAY_RECHARGE_REQ = 2068,
  S2C_MSG_NOTIFY_JD_PAY_RECHARGE_REP = 2069,
  C2S_MSG_NOTIFY_APPLE_PAY_RECHARGE_REQ = 2070,
  S2C_MSG_NOTIFY_APPLE_PAY_RECHARGE_REP = 2071,
  S2C_MSG_BAIREN_GAME_CONTINUOUS_PRESSURE_REP = 2072,
  C2S_MSG_NOTIFY_LARGE_ALI_PAY_RECHARGE_REQ = 2073,
  S2C_MSG_NOTIFY_LARGE_ALI_PAY_RECHARGE_REP = 2074,
  C2S_MSG_NOTIFY_VIP_ALIACC_RECHARGE_REQ = 2075,
  S2C_MSG_NOTIFY_VIP_ALIACC_RECHARGE_REP = 2076,
  S2C_MSG_NOTIFY_EXCLUSIVE_ALIPAY_RECHARGE_SHOW = 2077,
  C2S_MSG_NOTIFY_EXCLUSIVE_ALIPAY_RECHARGE_SHOW_REQ = 2078,
  C2S_MSG_NOTIFY_FIXED_ALIPAY_RECHARGE_SHOW_REQ = 2079,
  S2C_MSG_NOTIFY_FIXED_ALIPAY_RECHARGE_SHOW_REP = 2080,
  C2S_MSG_NOTIFY_FIXED_WECHAT_RECHARGE_SHOW_REQ = 2081,
  S2C_MSG_NOTIFY_FIXED_WECHAT_RECHARGE_SHOW_REP = 2082,
  C2S_MSG_NOTIFY_FIXED_UNIONPAY_RECHARGE_SHOW_REQ = 2083,
  S2C_MSG_NOTIFY_FIXED_UNIONPAY_RECHARGE_SHOW_REP = 2084,
  C2S_MSG_NOTIFY_EXCLUSIVE_FLASH_RECHARGE_SHOW_REQ = 2085,
  S2C_MSG_NOTIFY_EXCLUSIVE_FLASH_RECHARGE_SHOW_REP = 2086,
  C2S_MSG_FIRST_GAME_PLAY_LOG_REQ = 2090,
  S2C_MSG_FIRST_SEND_GAME_PLAY_LOG_REP = 2091,
  S2C_MSG_NEXTS_SEND_GAME_PLAY_LOG_REP = 2092,
  C2S_MSG_CHAT_INFO_FORWARD_REQ = 2093,
  S2C_MSG_CHAT_INFO_FORWARD_REP = 2094,
  C2S_MSG_BRC_CONTROL_ENTER_TABLE_REQ = 2100,
  S2C_MSG_BRC_CONTROL_ENTER_TABLE_REP = 2101,
  C2S_MSG_BRC_CONTROL_LEAVE_TABLE_REQ = 2102,
  S2C_MSG_BRC_CONTROL_LEAVE_TABLE_REP = 2103,
  C2S_MSG_BRC_CONTROL_FORCE_LEAVE_BANKER_REQ = 2104,
  S2C_MSG_BRC_CONTROL_FORCE_LEAVE_BANKER_REP = 2105,
  C2S_MSG_BRC_CONTROL_AREA_INFO_REQ = 2106,
  S2C_MSG_BRC_CONTROL_AREA_INFO_REP = 2107,
  S2C_MSG_BRC_CONTROL_TOTAL_ROBOT_BET_INFO = 2108,
  S2C_MSG_BRC_CONTROL_TOTAL_PLAYER_BET_INFO = 2109,
  S2C_MSG_BRC_CONTROL_SINGLE_PLAYER_BET_INFO = 2110,
  S2C_MSG_BRC_CONTROL_ALL_PLAYER_BET_INFO = 2111,
  S2C_MSG_BRC_CONTROL_APPLE_BANKER_INFO = 2112,
  S2C_MSG_BRC_CONTROL_GAME_END_INFO = 2113,
  S2C_MSG_BRC_CONTROL_GAME_STATUS_INFO = 2114,
  S2C_MSG_BRC_CONTROL_FLUSH_AREA_INFO = 2115,
  S2C_MSG_LAND_GAME_INFO = 3101,
  S2C_MSG_LAND_START = 3102,
  C2S_MSG_LAND_CALL_SCORE_REQ = 3103,
  S2C_MSG_LAND_CALL_SCORE = 3104,
  C2S_MSG_LAND_REQ_HAND_CARD = 3105,
  S2C_MSG_LAND_HAND_CARD = 3106,
  S2C_MSG_LAND_BANKER_INFO = 3107,
  C2S_MSG_LAND_OUT_CARD_REQ = 3108,
  S2C_MSG_LAND_OUT_CARD = 3109,
  C2S_MSG_LAND_PASS_CARD_REQ = 3110,
  S2C_MSG_LAND_PASS_CARD = 3111,
  S2C_MSG_LAND_GAME_OVER = 3112,
  S2C_MSG_LAND_MARRY_PLAYER = 3113,
  C2S_MSG_LAND_REQ_HAND_CARD_2 = 3114,
  S2C_MSG_LAND_HAND_CARD_2 = 3115,
  S2C_MSG_SHOWHAND_GAME_INFO = 3300,
  S2C_MSG_SHOWHAND_START = 3301,
  C2S_MSG_SHOWHAND_ADDSCORE = 3302,
  S2C_MSG_SHOWHAND_ADDSCORE = 3303,
  C2S_MSG_SHOWHAND_GIVE_UP = 3304,
  S2C_MSG_SHOWHAND_GIVE_UP = 3305,
  S2C_MSG_SHOWHAND_SEND_CARD = 3306,
  S2C_MSG_SHOWHAND_GAME_END = 3307,
  S2C_MSG_BAINIU_GAME_FREE_INFO = 3400,
  S2C_MSG_BAINIU_GAME_PLAY_INFO = 3401,
  S2C_MSG_BAINIU_START = 3402,
  C2S_MSG_BAINIU_PLACE_JETTON = 3403,
  S2C_MSG_BAINIU_PLACE_JETTON_REP = 3404,
  S2C_MSG_BAINIU_PLACE_JETTON_BROADCAST = 3405,
  S2C_MSG_BAINIU_GAME_END = 3408,
  C2S_MSG_BAINIU_APPLY_BANKER = 3409,
  S2C_MSG_BAINIU_APPLY_BANKER = 3410,
  S2C_MSG_BAINIU_CHANGE_BANKER = 3411,
  S2C_MSG_BAINIU_CHANGE_USER_SCORE = 3412,
  S2C_MSG_BAINIU_APPLY_LIST = 3413,
  C2S_MSG_BAINIU_JUMP_APPLY_QUEUE = 3414,
  S2C_MSG_BAINIU_JUMP_APPLY_QUEUE = 3415,
  S2C_MSG_BAINIU_BANKER_CALC = 3416,
  S2C_MSG_BAINIU_ADD_BANKER_SCORE = 3417,
  S2C_MSG_BAINIU_PLAY_LOG = 3418,
  C2S_MSG_BAINIU_CONTINUOUS_PRESSURE_REQ = 3419,
  S2C_MSG_BAINIU_CONTINUOUS_PRESSURE_REP = 3420,
  S2C_MSG_TEXAS_GAME_FREE_INFO = 3500,
  S2C_MSG_TEXAS_GAME_PLAY_INFO = 3501,
  S2C_MSG_TEXAS_START = 3502,
  C2S_MSG_TEXAS_ADD_SCORE = 3503,
  S2C_MSG_TEXAS_ADD_SCORE = 3504,
  C2S_MSG_TEXAS_GIVEUP = 3505,
  S2C_MSG_TEXAS_GIVEUP = 3506,
  S2C_MSG_TEXAS_SEND_CARD = 3507,
  S2C_MSG_TEXAS_GAME_END = 3508,
  C2S_MSG_TEXAS_BUYIN = 3509,
  S2C_MSG_TEXAS_BUYIN = 3510,
  C2S_MSG_TEXAS_SHOW_CARD = 3511,
  S2C_MSG_TEXAS_SHOW_CARD = 3512,
  S2C_MSG_TEXAS_STANDUP_TABLE = 3513,
  C2S_MSG_TEXAS_BUYIN_NEXT = 3514,
  S2C_MSG_TEXAS_BUYIN_NEXT = 3515,
  S2C_MSG_TEXAS_BUYIN_NEXT_SUC = 3516,
  S2C_MSG_TEXAS_BUYIN_WAIT = 3517,
  C2S_MSG_TEXAS_BUYIN_WAIT_STANDUP = 3518,
  S2C_MSG_TEXAS_BUYIN_WAIT_STANDUP = 3519,
  S2C_MSG_ZAJINHUA_GAME_FREE_INFO = 3600,
  S2C_MSG_ZAJINHUA_GAME_PLAY_INFO = 3601,
  S2C_MSG_ZAJINHUA_START = 3602,
  C2S_MSG_ZAJINHUA_ADD_SCORE = 3603,
  S2C_MSG_ZAJINHUA_ADD_SCORE = 3604,
  C2S_MSG_ZAJINHUA_GIVEUP = 3605,
  S2C_MSG_ZAJINHUA_GIVEUP = 3606,
  S2C_MSG_ZAJINHUA_COMPARE_CARD = 3607,
  C2S_MSG_ZAJINHUA_COMPARE_CARD = 3608,
  S2C_MSG_ZAJINHUA_LOOK_CARD = 3609,
  C2S_MSG_ZAJINHUA_LOOK_CARD = 3610,
  S2C_MSG_ZAJINHUA_OPEN_CARD = 3612,
  C2S_MSG_ZAJINHUA_OPEN_CARD = 3613,
  S2C_MSG_ZAJINHUA_GAME_END = 3614,
  C2S_MSG_ZAJINHUA_SHOW_CARD = 3615,
  S2C_MSG_ZAJINHUA_SHOW_CARD = 3616,
  S2C_MSG_BACCARAT_GAME_FREE_INFO = 3800,
  S2C_MSG_BACCARAT_GAME_PLAY_INFO = 3801,
  S2C_MSG_BACCARAT_START = 3802,
  C2S_MSG_BACCARAT_PLACE_JETTON = 3803,
  S2C_MSG_BACCARAT_PLACE_JETTON_REP = 3804,
  S2C_MSG_BACCARAT_PLACE_JETTON_BROADCAST = 3805,
  S2C_MSG_BACCARAT_GAME_END = 3808,
  C2S_MSG_BACCARAT_APPLY_BANKER = 3809,
  S2C_MSG_BACCARAT_APPLY_BANKER = 3810,
  S2C_MSG_BACCARAT_CHANGE_BANKER = 3811,
  S2C_MSG_BACCARAT_CHANGE_USER_SCORE = 3812,
  S2C_MSG_BACCARAT_APPLY_LIST = 3813,
  C2S_MSG_BACCARAT_JUMP_APPLY_QUEUE = 3814,
  S2C_MSG_BACCARAT_JUMP_APPLY_QUEUE = 3815,
  S2C_MSG_BACCARAT_BANKER_CALC = 3816,
  S2C_MSG_BACCARAT_ADD_BANKER_SCORE = 3817,
  S2C_MSG_BACCARAT_PLAY_LOG = 3818,
  C2S_MSG_BACCARAT_CONTINUOUS_PRESSURE_REQ = 3819,
  S2C_MSG_BACCARAT_CONTINUOUS_PRESSURE_REP = 3820,
  S2C_MSG_SANGONG_GAME_FREE_INFO = 3900,
  S2C_MSG_SANGONG_GAME_PLAY_INFO = 3901,
  S2C_MSG_SANGONG_START = 3902,
  C2S_MSG_SANGONG_APPLY_BANKER = 3903,
  S2C_MSG_SANGONG_APPLY_BANKER_REP = 3904,
  S2C_MSG_SANGONG_BANKER_RESULT = 3905,
  C2S_MSG_SANGONG_PLACE_JETTON_REQ = 3906,
  S2C_MSG_SANGONG_PLACE_JETTON_REP = 3907,
  S2C_MSG_SANGONG_PLACE_JETTON_BROADCAST = 3908,
  S2C_MSG_SANGONG_SENDCARD_REP = 3909,
  C2S_MSG_SANGONG_CHANGE_CARD = 3910,
  S2C_MSG_SANGONG_CHANGE_CARD_REP = 3911,
  S2C_MSG_SANGONG_GAME_END = 3912,
  S2C_MSG_PAIJIU_GAME_FREE_INFO = 4000,
  S2C_MSG_PAIJIU_GAME_PLAY_INFO = 4001,
  S2C_MSG_PAIJIU_START = 4002,
  C2S_MSG_PAIJIU_PLACE_JETTON = 4003,
  S2C_MSG_PAIJIU_PLACE_JETTON_REP = 4004,
  S2C_MSG_PAIJIU_PLACE_JETTON_BROADCAST = 4005,
  S2C_MSG_PAIJIU_GAME_END = 4008,
  C2S_MSG_PAIJIU_APPLY_BANKER = 4009,
  S2C_MSG_PAIJIU_APPLY_BANKER = 4010,
  S2C_MSG_PAIJIU_CHANGE_BANKER = 4011,
  S2C_MSG_PAIJIU_CHANGE_USER_SCORE = 4012,
  S2C_MSG_PAIJIU_APPLY_LIST = 4013,
  C2S_MSG_PAIJIU_JUMP_APPLY_QUEUE = 4014,
  S2C_MSG_PAIJIU_JUMP_APPLY_QUEUE = 4015,
  S2C_MSG_PAIJIU_BANKER_CALC = 4016,
  S2C_MSG_PAIJIU_ADD_BANKER_SCORE = 4017,
  S2C_MSG_PAIJIU_PLAY_LOG = 4018,
  C2S_MSG_PAIJIU_CONTINUOUS_PRESSURE_REQ = 4019,
  S2C_MSG_PAIJIU_CONTINUOUS_PRESSURE_REP = 4020,
  CMD_MSG_EVERY_COLOR_GAME_BEGIN = 4030,
  C2S_MSG_EVERY_COLOR_GAME_ENTER = 4031,
  S2C_MSG_EVERY_COLOR_GAME_ENTER_REP = 4032,
  C2S_MSG_EVERY_COLOR_GAME_LEAVE = 4033,
  S2C_MSG_EVERY_COLOR_GAME_LEAVE_REP = 4034,
  S2C_MSG_EVERY_COLOR_GAME_FREE_INFO = 4035,
  S2C_MSG_EVERY_COLOR_GAME_PLAY_INFO = 4036,
  S2C_MSG_EVERY_COLOR_GAME_START = 4037,
  S2C_MSG_EVERY_COLOR_TEN_GAME_START = 4038,
  S2C_MSG_EVERY_COLOR_HUNDRED_GAME_START = 4039,
  C2S_MSG_EVERY_COLOR_PLACE_JETTON_REQ = 4040,
  S2C_MSG_EVERY_COLOR_PLACE_JETTON_REP = 4041,
  S2C_MSG_EVERY_COLOR_PLACE_JETTON_BROADCAST = 4042,
  C2S_MSG_EVERY_COLOR_SNATCH_COIN_ENTER_REQ = 4043,
  C2S_MSG_EVERY_COLOR_SNATCH_COIN_ENTER_REP = 4044,
  C2S_MSG_EVERY_COLOR_SNATCH_COIN_REQ = 4045,
  S2C_MSG_EVERY_COLOR_SNATCH_COIN_REP = 4046,
  S2C_MSG_EVERY_COLOR_SNATCH_COIN_BROADCAST = 4047,
  S2C_MSG_EVERY_COLOR_GAME_END = 4048,
  S2C_MSG_EVERY_COLOR_TEN_GAME_END = 4049,
  S2C_MSG_EVERY_COLOR_HUNDRED_GAME_END = 4050,
  S2C_MSG_EVERY_COLOR_SNATCH_COIN_STATE = 4051,
  S2C_MSG_EVERY_COLOR_SNATCH_COIN_GAME_STATE = 4052,
  CMD_MSG_EVERY_COLOR_GAME_END = 4053,
  S2C_MSG_DICE_GAME_FREE_INFO = 4100,
  S2C_MSG_DICE_GAME_PLAY_INFO = 4101,
  S2C_MSG_DICE_START = 4102,
  C2S_MSG_DICE_PLACE_JETTON = 4103,
  S2C_MSG_DICE_PLACE_JETTON_REP = 4104,
  S2C_MSG_DICE_PLACE_JETTON_BROADCAST = 4105,
  C2S_MSG_DICE_CANCEL_JETTON = 4106,
  S2C_MSG_DICE_CANCEL_JETTON_REP = 4107,
  S2C_MSG_DICE_CANCEL_JETTON_BROADCAST = 4108,
  S2C_MSG_DICE_GAME_END = 4109,
  C2S_MSG_DICE_APPLY_BANKER = 4110,
  S2C_MSG_DICE_APPLY_BANKER = 4111,
  S2C_MSG_DICE_CHANGE_BANKER = 4112,
  S2C_MSG_DICE_CHANGE_USER_SCORE = 4113,
  S2C_MSG_DICE_APPLY_LIST = 4114,
  C2S_MSG_DICE_JUMP_APPLY_QUEUE = 4115,
  S2C_MSG_DICE_JUMP_APPLY_QUEUE = 4116,
  S2C_MSG_DICE_BANKER_CALC = 4117,
  S2C_MSG_DICE_ADD_BANKER_SCORE = 4118,
  S2C_MSG_DICE_PLAY_LOG = 4119,
  C2S_MSG_DICE_JACKPOT_INFO_REQ = 4120,
  S2C_MSG_DICE_JACKPOT_INFO_REP = 4121,
  C2S_MSG_DICE_CONTROL_REQ = 4122,
  C2S_MSG_DICE_CONTINUOUS_PRESSURE_REQ = 4123,
  S2C_MSG_DICE_CONTINUOUS_PRESSURE_REP = 4124,
  S2C_MSG_MAJIANG_GAME_INFO = 4400,
  S2C_MSG_MAJIANG_START = 4401,
  C2S_MSG_MAJIANG_OUT_CARD_REQ = 4402,
  S2C_MSG_MAJIANG_OUT_CARD_REP = 4403,
  S2C_MSG_MAJIANG_SEND_CARD_REP = 4404,
  S2C_MSG_MAJIANG_LISTEN_CARD_REP = 4405,
  S2C_MSG_MAJIANG_OPER_NOTIFY_REP = 4406,
  C2S_MSG_MAJIANG_OPER_CARD_REQ = 4407,
  S2C_MSG_MAJIANG_OPER_RESULT_REP = 4408,
  S2C_MSG_MAJIANG_GAME_OVER_REP = 4409,
  S2C_MSG_MAJIANG_OPENING_HU_REP = 4410,
  S2C_MSG_MAJIANG_FLUSH_DESK_REP = 4411,
  S2C_MSG_MAJIANG_SHOW_PUB_CARD_REP = 4412,
  C2S_MSG_MAJIANG_CHANGE_CARD_REQ = 4413,
  C2S_MSG_MAJIANG_GET_HAND_CARD_REQ = 4414,
  S2C_MSG_MAJIANG_GET_HAND_CARD_REP = 4415,
  C2S_MSG_MAJIANG_OPER_TRUSTEE_REQ = 4416,
  S2C_MSG_MAJIANG_OPER_TRUSTEE_REP = 4417,
  S2C_MSG_MAJIANG_OPER_TRUSTEE_BROADCAST = 4418,
  C2S_MSG_MAJIANG_OPER_AFTER_NOTIFY_HU_REQ = 4419,
  S2C_MSG_MAJIANG_OPER_AFTER_NOTIFY_HU_REP = 4420,
  C2S_MSG_MAJIANG_GET_ALL_CARD_INFO_REQ = 4421,
  S2C_MSG_MAJIANG_GET_ALL_CARD_INFO_REQ = 4422,
  C2S_MSG_MAJIANG_OUT_AFTER_NOTIFY_HU_REQ = 4423,
  S2C_MSG_MAJIANG_OUT_AFTER_NOTIFY_HU_REP = 4424,
  S2C_MSG_SLOT_GAME_INFO = 4500,
  S2C_MSG_SLOT_GAME_PLAY_INFO = 4501,
  C2S_MSG_SLOT_SPIN_REQ = 4502,
  S2C_MSG_SLOT_SPIN_REP = 4503,
  C2S_MSG_SLOT_FREE_SPIN_REQ = 4504,
  S2C_MSG_SLOT_FREE_SPIN_REP = 4505,
  S2C_MSG_SLOT_ERROR_REP = 4506,
  S2C_MSG_SLOT_SORT_FRONT_REP = 4507,
  S2C_MSG_SLOT_JACKPOT_SCORE_REP = 4508,
  C2S_MSG_SLOT_SEND_MASTER_CTRL_INFO_REQ = 4509,
  S2C_MSG_SLOT_SEND_MASTER_CTRL_INFO_REP = 4510,
  S2C_MSG_SLOT_SEND_MASTER_CTRL_INFO_BROADCAST = 4511,
  C2S_MSG_SLOT_SHOW_MASTER_CTRL_INFO_REQ = 4512,
  S2C_MSG_SLOT_SHOW_MASTER_CTRL_INFO_REP = 4513,
  C2S_MSG_SLOT_UPDATE_MASTER_SHOW_INFO_REQ = 4514,
  S2C_MSG_SLOT_UPDATE_MASTER_SHOW_INFO_REP = 4515,
  S2C_MSG_WAR_GAME_FREE_INFO = 4550,
  S2C_MSG_WAR_GAME_PLAY_INFO = 4551,
  S2C_MSG_WAR_START = 4552,
  C2S_MSG_WAR_PLACE_JETTON = 4553,
  S2C_MSG_WAR_PLACE_JETTON_REP = 4554,
  S2C_MSG_WAR_PLACE_JETTON_BROADCAST = 4555,
  S2C_MSG_WAR_GAME_END = 4556,
  S2C_MSG_WAR_PLAY_LOG = 4557,
  C2S_MSG_WAR_CONTINUOUS_PRESSURE_REQ = 4558,
  S2C_MSG_WAR_CONTINUOUS_PRESSURE_REP = 4559,
  S2C_MSG_FIGHT_GAME_FREE_INFO = 4580,
  S2C_MSG_FIGHT_GAME_PLAY_INFO = 4581,
  S2C_MSG_FIGHT_START = 4582,
  C2S_MSG_FIGHT_PLACE_JETTON = 4583,
  S2C_MSG_FIGHT_PLACE_JETTON_REP = 4584,
  S2C_MSG_FIGHT_PLACE_JETTON_BROADCAST = 4585,
  S2C_MSG_FIGHT_GAME_END = 4586,
  S2C_MSG_FIGHT_PLAY_LOG = 4587,
  C2S_MSG_FIGHT_CONTINUOUS_PRESSURE_REQ = 4588,
  S2C_MSG_FIGHT_CONTINUOUS_PRESSURE_REP = 4589,
  S2C_MSG_ROBNIU_GAME_FREE_INFO = 4610,
  S2C_MSG_ROBNIU_GAME_PLAY_INFO = 4611,
  S2C_MSG_ROBNIU_READY_START = 4612,
  S2C_MSG_ROBNIU_START = 4613,
  C2S_MSG_ROBNIU_APPLY_BANKER_REQ = 4614,
  S2C_MSG_ROBNIU_APPLY_BANKER_REP = 4615,
  S2C_MSG_ROBNIU_BANKER_RESULT = 4616,
  C2S_MSG_ROBNIU_PLACE_JETTON_REQ = 4617,
  S2C_MSG_ROBNIU_PLACE_JETTON_REP = 4618,
  S2C_MSG_ROBNIU_PLACE_JETTON_BROADCAST = 4619,
  S2C_MSG_ROBNIU_SEND_FOUR_CARD_REP = 4620,
  S2C_MSG_ROBNIU_SEND_LAST_CARD_REP = 4621,
  C2S_MSG_ROBNIU_CHANGE_CARD_REQ = 4622,
  S2C_MSG_ROBNIU_CHANGE_CARD_REP = 4623,
  S2C_MSG_ROBNIU_GAME_END = 4624,
  S2C_MSG_ROBNIU_SCORE_LESS = 4625,
  S2C_MSG_ROBNIU_GAME_STATUS_ERROR = 4626,
  S2C_MSG_NIUNIU_GAME_FREE_INFO = 4650,
  S2C_MSG_NIUNIU_GAME_PLAY_INFO = 4651,
  S2C_MSG_NIUNIU_READY_START = 4652,
  S2C_MSG_NIUNIU_START = 4653,
  C2S_MSG_NIUNIU_APPLY_BANKER_REQ = 4654,
  S2C_MSG_NIUNIU_APPLY_BANKER_REP = 4655,
  S2C_MSG_NIUNIU_BANKER_RESULT = 4656,
  C2S_MSG_NIUNIU_PLACE_JETTON_REQ = 4657,
  S2C_MSG_NIUNIU_PLACE_JETTON_REP = 4658,
  S2C_MSG_NIUNIU_PLACE_JETTON_BROADCAST = 4659,
  S2C_MSG_NIUNIU_SEND_CARD_REP = 4660,
  C2S_MSG_NIUNIU_CHANGE_CARD_REQ = 4661,
  S2C_MSG_NIUNIU_CHANGE_CARD_REP = 4662,
  S2C_MSG_NIUNIU_GAME_END = 4663,
  S2C_MSG_NIUNIU_SCORE_LESS = 4664,
  S2C_MSG_NIUNIU_GAME_STATUS_ERROR = 4665,
  S2C_MSG_NIUNIU_SEND_MASTER_CARD_REP = 4666,
  C2S_MSG_NIUNIU_RECV_MASTER_CARD_REQ = 4667,
  S2C_MSG_NIUNIU_RECV_MASTER_CARD_REP = 4668,
  C2S_MSG_FISHING_GAME_INFO_REQ = 5000,
  S2C_MSG_FISHING_GAME_INFO_RSP = 5001,
  C2S_MSG_FISHING_SHOOTING_REQ = 5002,
  S2C_MSG_FISHING_SHOOTING_RSP = 5003,
  C2S_MSG_FISHING_HIT_REQ = 5004,
  S2C_MSG_FISHING_HIT_RSP = 5005,
  C2S_MSG_FISHING_CHANGE_BOT_REQ = 5006,
  S2C_MSG_FISHING_CHANGE_BOT_RSP = 5007,
  S2C_MSG_FISHING_NOTICE_CHANGE_MAP = 5008,
  C2S_MSG_FISHING_USE_PROP_REQ = 5009,
  S2C_MSG_FISHING_NOTICE_USE_PROP = 5010,
  C2S_MSG_FISHING_MAP_INFO_REQ = 5011,
  S2C_MSG_FISHING_MAP_INFO_RSP = 5012,
  C2S_MSG_FISHING_BULLET_TRACE_REQ = 5013,
  S2C_MSG_FISHING_NOTICE_BULLET_TRACE = 5014,
  S2C_MSG_FISHING_HIT_NO_FISH_RSP = 5015,
  C2S_MSG_FISHING_NEW_BULLET_REQ = 5016,
  S2C_MSG_FISHING_NOTICE_NEW_BULLET = 5017,
  S2C_MSG_TWOEIGHT_GAME_FREE_INFO = 5050,
  S2C_MSG_TWOEIGHT_GAME_PLAY_INFO = 5051,
  S2C_MSG_TWOEIGHT_START = 5052,
  C2S_MSG_TWOEIGHT_PLACE_JETTON = 5053,
  S2C_MSG_TWOEIGHT_PLACE_JETTON_REP = 5054,
  S2C_MSG_TWOEIGHT_PLACE_JETTON_BROADCAST = 5055,
  S2C_MSG_TWOEIGHT_GAME_END = 5056,
  C2S_MSG_TWOEIGHT_APPLY_BANKER = 5057,
  S2C_MSG_TWOEIGHT_APPLY_BANKER = 5058,
  S2C_MSG_TWOEIGHT_CHANGE_BANKER = 5059,
  S2C_MSG_TWOEIGHT_CHANGE_USER_SCORE = 5060,
  S2C_MSG_TWOEIGHT_APPLY_LIST = 5061,
  C2S_MSG_TWOEIGHT_JUMP_APPLY_QUEUE = 5062,
  S2C_MSG_TWOEIGHT_JUMP_APPLY_QUEUE = 5063,
  S2C_MSG_TWOEIGHT_BANKER_CALC = 5064,
  S2C_MSG_TWOEIGHT_ADD_BANKER_SCORE = 5065,
  S2C_MSG_TWOEIGHT_PLAY_LOG = 5066,
  C2S_MSG_TWOEIGHT_CONTINUOUS_PRESSURE_REQ = 5067,
  S2C_MSG_TWOEIGHT_CONTINUOUS_PRESSURE_REP = 5068,
  S2C_MSG_CARCITY_GAME_FREE_INFO = 5100,
  S2C_MSG_CARCITY_GAME_PLAY_INFO = 5101,
  S2C_MSG_CARCITY_START = 5102,
  C2S_MSG_CARCITY_PLACE_JETTON = 5103,
  S2C_MSG_CARCITY_PLACE_JETTON_REP = 5104,
  S2C_MSG_CARCITY_PLACE_JETTON_BROADCAST = 5105,
  S2C_MSG_CARCITY_GAME_END = 5106,
  S2C_MSG_CARCITY_PLAY_LOG = 5107,
  C2S_MSG_CARCITY_CONTINUOUS_PRESSURE_REQ = 5108,
  S2C_MSG_CARCITY_CONTINUOUS_PRESSURE_REP = 5109
};
bool CLIENT_MSG_ID_IsValid(int value);
const CLIENT_MSG_ID CLIENT_MSG_ID_MIN = C2S_MSG_HEART;
const CLIENT_MSG_ID CLIENT_MSG_ID_MAX = S2C_MSG_CARCITY_CONTINUOUS_PRESSURE_REP;
const int CLIENT_MSG_ID_ARRAYSIZE = CLIENT_MSG_ID_MAX + 1;

const ::google::protobuf::EnumDescriptor* CLIENT_MSG_ID_descriptor();
inline const ::std::string& CLIENT_MSG_ID_Name(CLIENT_MSG_ID value) {
  return ::google::protobuf::internal::NameOfEnum(
    CLIENT_MSG_ID_descriptor(), value);
}
inline bool CLIENT_MSG_ID_Parse(
    const ::std::string& name, CLIENT_MSG_ID* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CLIENT_MSG_ID>(
    CLIENT_MSG_ID_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

}  // namespace net

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::net::PHP_MSG_ID>() {
  return ::net::PHP_MSG_ID_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::net::SERVER_MSG_ID>() {
  return ::net::SERVER_MSG_ID_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::net::DISPATCH_MSG_ID>() {
  return ::net::DISPATCH_MSG_ID_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::net::CLIENT_MSG_ID>() {
  return ::net::CLIENT_MSG_ID_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msg_5fdefine_2eproto__INCLUDED
