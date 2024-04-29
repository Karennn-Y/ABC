//
// Description : Logout을 위한 Header file
// File Name   : debug.h
// Date        : 2023. 07. 03. (월) 18:27:57 KST
// By  : Cento
//
extern void _Logout(const char *, const char *, int, const char *, ...);
#define Logout(fmt, ...) \
	_Logout(__FILE__, __FUNCTION__, __LINE__, fmt, ##__VA_ARGS__)
